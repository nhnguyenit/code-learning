#include "CSoPhuc.cpp"
#include "CSoPhuc.h"


int main()
{
    CSoPhuc sophuc1(6, 9);
    CSoPhuc sophuc2(4, 1);


    cout << "1. Operator =: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    CSoPhuc result1 = sophuc1;
    cout << "\tKet qua thuc hien Operator:\t\t\t" << result1 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "2. Operator +: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    CSoPhuc result2 = sophuc1 + sophuc2;
    cout << "\tKet qua thuc hien Operator:\t\t\t" << result2 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "3. Operator -: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    CSoPhuc result3 = sophuc1 - sophuc2;
    cout << "\tKet qua thuc hien Operator:\t\t\t" << result3 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "4. Operator *: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    CSoPhuc result4 = sophuc1 * sophuc2;
    cout << "\tKet qua thuc hien Operator:\t\t\t" << result4 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "5. Operator +=: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    sophuc1 += sophuc2;
    cout << "\tKet qua thuc hien Operator sophuc1 += sophuc2:\t" << sophuc1 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "6. Operator -=: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    sophuc1 -= sophuc2;
    cout << "\tKet qua thuc hien Operator sophuc1 -= sophuc2:\t" << sophuc1 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;

    cout << "7. Operator *=: " << endl;
    cout << "\tSo phuc 1 TRUOC khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 TRUOC khi thuc hien Operator:\t\t" << sophuc2 << endl;
    sophuc1 *= sophuc2;
    cout << "\tKet qua thuc hien Operator sophuc1 *= sophuc2:\t" << sophuc1 << endl;
    cout << "\tSo phuc 1 SAU khi thuc hien Operator:\t\t" << sophuc1 << endl;
    cout << "\tSo phuc 2 SAU khi thuc hien Operator:\t\t" << sophuc2 << endl;


    return 0;
}