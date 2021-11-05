#include <iostream>
#include <math.h>
using namespace std;

int n1()
{
    setlocale(LC_ALL, "rus");
    int A, B;
    cout << "Введите значения переменных A и B, чтобы поменять их местами\n";
    cin >> A >> B;
    int x = A;
    A = B;
    B = x;
    cout << "Новые значения переменных A и В соответственно\n" << A << "\n" << B << "\n";
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "Введите значения переменных A, B и C, чтобы поменять их местами (B = A; C = B; A = C)\n";
    cin >> A >> B >> C;
    int x = B;
    int y = C;
    B = A;
    C = x;
    A = y;
    cout << "Новые значения переменных A, B и C соответственно\n" << A << "\n" << B << "\n" << C << "\n";
    return 0;
}

int n3()
{
    //а в ц, ц в б, б в а
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "Введите значения переменных A, B и C, чтобы поменять их местами (C = A; B = C; A = B)\n";
    cin >> A >> B >> C;
    int x = B;
    int y = C;
    C = A;
    B = y;
    A = x;
    cout << "Новые значения переменных A, B и C соответственно\n" << A << "\n" << B << "\n" << C << "\n";
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите х, чтобы решить уравнение y = 3(x^6) - 6(x^2) - 7\n";
    int x;
    cin >> x;
    int y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
    cout << "y = " << y << "\n";
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите х, чтобы решить уравнение y = 4(x-3)^6 - 7(x-3)^3 + 2 \n";
    double x;
    cin >> x;
    int y = 4 * (pow(x - 3, 6)) - 7 * (pow(x - 3, 3)) + 2;
    cout << "y = " << y << "\n";
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "rus");
    double A, x;
    cout << "Введите А, чтобы получить А^8";
    cin >> A;
    x = pow(A, 2);
    int A8 = x * x * x * x;
    cout << "Введённое А в восьмой степени = " << A8 << "\n";
    return 0;
}

int n7()
{
    setlocale(LC_ALL, "rus");
    double A, x, y;
    cout << "Введите А, чтобы получить А^15\n";
    cin >> A;
    x = pow(A, 5);
    y = pow(A, 2);
    int A15 = y * y * y * y * y * x;
    cout << "Введённое А в пятнадцатой степени = " << A15 << "\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n0 = 0;
    int k = 0;
    while (k < 7)
    {
    cout << "Введите номер задания Лабораторной №6\n";
    cin >> n0;
        if (n0 == 1)
        {
            n1();
            k++;
        }
        if (n0 == 2)
        {
            n2();
            k++;
        }
        if (n0 == 3)
        {
            n3();
            k++;
        }
        if (n0 == 4)
        {
            n4();
            k++;
        }
        if (n0 == 5)
        {
            n5();
            k++;
        }
        if (n0 == 6)
        {
            n6();
            k++;
        }
        if (n0 == 7)
        {
            n7();
            k++;
        }
    }
}