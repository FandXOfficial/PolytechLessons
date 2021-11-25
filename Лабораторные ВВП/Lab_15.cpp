#include <iostream>
#include <windows.h>
using namespace std;

void PowerA3()
{
    double A, B, i;
    for (i = 1; i < 6; i++)
    {
        cout << "Число номер " << i << ": ";
        cin >> A;
        B = pow(A, 3);
        cout << "Третья степень данного числа: " << B << endl << endl;
    }
}

void n1()
{
    cout << "Введите 5 чисел, чтобы получить их третьи степени: \n\n";
    PowerA3();
}

double Sign()
{
    double X;
    cin >> X;
    if (X < 0)
    {
        return -1;
    }
    if (X == 0)
    {
        return 0;
    }
    if (X > 0)
    {
        return 1;
    }
}

void n2()
{
    cout << "Введите вещественные числа А и В, чтобы найти найти значение выражения Sign(A) + Sign(B),\nвозвращающие следующие значения для Х в Sign(X):\n-1, если Х < 0; 0, если Х = 0; 1, если Х > 0\n";
    double A, B, x;
    A = Sign();
    B = Sign();
    x = A + B;
    cout << "Значение выражения равно " << x << endl;
}

double RingS(double R1, double R2)
{
    double S, S1, S2;
    S1 = 3.14 * pow(R1, 2);
    S2 = 3.14 * pow(R2, 2);
    S = S1 - S2;
    return S;
}

void n3()
{
    cout << "Введите внешний и внутренний радиусы трёх кругов, чтобы найти площади их колец,\nзаключённых между внешней и внутренней окружностями\n";
    double A, B, i;
    for (i = 0; i < 3; i++)
    {
        cin >> A >> B;
        cout << "Площадь внутреннего кольца для введённых радиусов равна " << RingS(A, B) << endl;
    }
}

int Quartex(double x, double y)
{
    if (x > 0 and y > 0)
    {
        return 1;
    }
    if (x < 0 and y > 0)
    {
        return 2;
    }
    if (x < 0 and y < 0)
    {
        return 3;
    }
    if (x > 0 and y < 0)
    {
        return 4;
    }
    if (x == 0 or y == 0)
    {
        cout << "ОШИБКА" << endl << endl;
    }
}

void n4()
{
    cout << "Введите координаты трёх точек, чтобы определить, в каких координатных четвертях они лежат\n";
    double x, y, i;
    for (i = 1; i < 4; i++)
    {
        cout << "Координата Х точки номер " << i << ": ";
        cin >> x;
        cout << "Координата Y точки номер " << i << ": ";
        cin >> y;
        cout << "Точка находится в координатной четверти номер " << Quartex(x, y) << endl << endl;
    }
}

double Fact2(int N)
{
    double P, i;
    P = 1;
    if (N % 2 == 0)
    {
        for (i = 2; i != (N + 2); i += 2)
        {
            P *= i;
        }
    }
    else
    {
        for (i = 1; i != (N + 2); i += 2)
        {
            P *= i;
        }
    }
    return P;
}

void n5()
{
    cout << "Введите число, чтобы найти его двойной факториал: ";
    int N;
    cin >> N;
    cout << "Двойной факториал введённого числа равен " << Fact2(N) << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n0 = 0;
    int k = -1;
    while (k != 0)
    {
        cout << "\nВведите номер задания Лабораторной №15 (1 - 5):\n\n";
        cin >> n0;
        if (n0 == 0)
        {
            cout << "Выход из программы...\nСпасибо, что засчитали лабораторную!\n";
            k = 0;
        }
        if (n0 == 1)
        {
            n1();
        }
        if (n0 == 2)
        {
            n2();
        }
        if (n0 == 3)
        {
            n3();
        }
        if (n0 == 4)
        {
            n4();
        }
        if (n0 == 5)
        {
            n5();
        }
    }
}