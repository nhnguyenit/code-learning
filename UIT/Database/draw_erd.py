import matplotlib.pyplot as plt
import networkx as nx

# Tạo đồ thị có hướng
G = nx.DiGraph()

# Thực thể và mối quan hệ
entities = [
    "Nhân viên", "Y sĩ", "Y tá", "Nhân viên văn phòng", "Kỹ thuật viên",
    "Khu điều trị", "Phòng thí nghiệm", "Bệnh nhân"
]

relationships = [
    "Phân công trực (Y tá - Khu điều trị)", 
    "Phục vụ (Kỹ thuật viên - Phòng thí nghiệm)",
    "Điều trị (Y sĩ - Bệnh nhân)"
]

# Thêm các thực thể và mối quan hệ vào đồ thị
G.add_nodes_from(entities + relationships)

# Thêm các mối quan hệ
edges = [
    ("Y tá", "Phân công trực (Y tá - Khu điều trị)"),
    ("Khu điều trị", "Phân công trực (Y tá - Khu điều trị)"),
    ("Kỹ thuật viên", "Phục vụ (Kỹ thuật viên - Phòng thí nghiệm)"),
    ("Phòng thí nghiệm", "Phục vụ (Kỹ thuật viên - Phòng thí nghiệm)"),
    ("Y sĩ", "Điều trị (Y sĩ - Bệnh nhân)"),
    ("Bệnh nhân", "Điều trị (Y sĩ - Bệnh nhân)"),
    ("Y sĩ", "Y sĩ"),
    ("Y tá", "Y tá"),
    ("Nhân viên văn phòng", "Nhân viên văn phòng"),
    ("Kỹ thuật viên", "Kỹ thuật viên")
]

# Thêm mối quan hệ kiểu con giữa "Nhân viên" và các nhóm nhân viên con
subtypes = [
    ("Nhân viên", "Y sĩ"),
    ("Nhân viên", "Y tá"),
    ("Nhân viên", "Nhân viên văn phòng"),
    ("Nhân viên", "Kỹ thuật viên")
]

# Thêm các mối quan hệ vào đồ thị
G.add_edges_from(edges + subtypes)

# Vị trí của các nút trên đồ thị
pos = nx.spring_layout(G, seed=42)

# Tạo hình vẽ
plt.figure(figsize=(12, 12))

# Vẽ các nút và các cạnh
nx.draw_networkx_nodes(G, pos, node_size=3000, node_color="lightblue", alpha=0.7)
nx.draw_networkx_edges(G, pos, edgelist=edges + subtypes, width=2, alpha=0.7, edge_color="gray")
nx.draw_networkx_labels(G, pos, font_size=10, font_weight="bold", font_color="black")
nx.draw_networkx_edge_labels(G, pos, edge_labels={(u, v): f"{u} - {v}" for u, v in edges}, font_size=8)

# Tiêu đề của sơ đồ
plt.title("Sơ đồ EER Quản lý Nhân viên Bệnh viện", fontsize=16)
plt.axis("off")  # Tắt trục
plt.show()
