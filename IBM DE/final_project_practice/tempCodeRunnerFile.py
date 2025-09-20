from datetime import datetime
import requests
from bs4 import BeautifulSoup
import pandas as pd
import sqlite3


def log_progress(message):
    log_file = 'code_log.txt'
    timestamp_format = '%Y-%h-%d %H:%M:%S'
    now = datetime.now()
    timestamp = now.strftime(timestamp_format)
    with open(log_file, 'a') as f:
        f.write(timestamp + ': ' + message + '\n')


def extract(url, table_attributes):
    df = pd.DataFrame(columns=table_attributes)
    count = 0
    html_page = requests.get(url).text
    data = BeautifulSoup(html_page, 'html.parser')
    tables = data.find_all('tbody')
    rows = tables[0].find_all('tr')
    # print(tables[0])
    for row in rows:
        if count < 10:
            cols = row.find_all('td')
            if len(cols) > 0:
                data_dict = {'Name': cols[1].find_all('a')[1].string,
                             'MC_USD_Billion': cols[2].contents[0].strip()}
                df1 = pd.DataFrame(data_dict, index=[0])
                df = pd.concat([df, df1], ignore_index=True)
                count += 1
        else:
            break
    return df

def transform(df):
    df['MC_USD_Billion'] = df['MC_USD_Billion'].astype(float)
    df['MC_EUR_Billion'] = round(df.MC_USD_Billion*0.93, 2)
    df['MC_GBP_Billion'] = round(df.MC_USD_Billion*0.8, 2)
    df['MC_INR_Billion'] = round(df.MC_USD_Billion*82.95, 2)
    return df

def load_to_csv(transformed_data, csv_path):
    target_file = csv_path
    transformed_data.to_csv(target_file)

def load_to_db(transformed_data, sql_conn, table_name):
    transformed_data.to_sql(table_name, sql_conn, if_exists = 'replace', index = False)
    sql_conn.close()

def read_to_db(query_stmt):
    db_name = 'Banks.db'
    conn = sqlite3.connect(db_name)
    df = pd.read_sql(query_stmt, conn)
    return df


# init variables
url = 'https://web.archive.org/web/20230908091635%20/https://en.wikipedia.org/wiki/List_of_largest_banks'
table_attributes = ['Name', 'MC_USD_Billion']
csv_path = 'Largest_banks_data.csv'
db_name = 'Banks.db'
table_name = 'Largest_banks'
conn = sqlite3.connect(db_name)

# call functions
log_progress('Extract data from webpage.')
df = extract(url, table_attributes)
print(df)

log_progress('Transform: Add 3 new MC in Billion for EUR, GBP, INR and round all of them to 2 decimal places.')
transformed_df = transform(df)
print(transformed_df)

log_progress('Load transformed data to csv file.')
load_to_csv(transformed_df, csv_path)

log_progress('Load transformed data to  Banks database under Largest_banks table.')
load_to_db(transformed_df, conn, table_name)

log_progress('Query avg MC_INR_Billion in Largest_banks table.')
returned_data = read_to_db('select avg(MC_INR_Billion) from Largest_banks')
print(returned_data)