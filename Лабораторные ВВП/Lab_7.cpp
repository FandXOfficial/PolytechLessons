﻿#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите значение угла альфа в градусах, чтобы узнать значение этого угла в радианах\n";
    double a, ar;
    cin >> a;
    ar = (a * 3.14) / 180;
    cout << "Значение угла альфа в радианах = " << ar << '\n';
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите значение угла альфа в радианах, чтобы узнать значение этого угла в градусах\n";
    double a, ar;
    cin >> ar;
    a = (ar * 180) / 3.14;
    cout << "Значение угла альфа в градусах = " << a << '\n';
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите количество кг конфет и цену за этот вес\n";
    double A, X, kg1, Y, kgY;
    cin >> X >> A;
    kg1 = A / X;
    cout << "1 кг конфет стоит = " << kg1 << "\n";
    cout << "Введите новое значение количества килограмм конфет\n";
    cin >> Y;
    kgY = kg1 * Y;
    cout << Y << "кг конфет стоит = " << kgY << '\n';
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите последовательно скорости первого и второго автомобилей, удаляющихся друг от друга, и начальное расстояние между ними\n";
    double V1, V2, S, T, SK;
    cin >> V1 >> V2 >> S;
    cout << "Введите количество часов, через которое необходимо найти расстояние между автомобилями\n";
    cin >> T;
    SK = S + V1 * T + V2 * T;
    cout << "Через " << T << "ч автомобили будут находится на расстоянии " << SK << "км\n";
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите коэффициенты А и В (А не равно 0), чтобы решить линейное уравнение А * х + В = 0 относительно х\n";
    double x, A, B;
    cin >> A >> B;
    if (A != 0)
    {
        x = -1 * B / A;
        cout << "х равен " << x << "\n";
    }
    else
    {
        cout << "А равно 0. Противоречит условию\n";
        return 1;
    }
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите последовательно A1, A2, B1, B2, C1, C2 для решения системы уравнения вида\nA1 * x + B1 * y = C1\nA2 * x + B2 * y = C2\n";
    double A1, A2, B1, B2, C1, C2, x, y, D, D1, D2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
    D = A1 * B2 - A2 * B1;
    D1 = C1 * B2 - C2 * B1;
    D2 = A1 * C2 - A2 * C1;
    x = D1 / D;
    y = D2 / D;
    
    cout << "x и у равны " << x << " и " << y << " соответственно\n";
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n0 = 0;
    int k = 0;
    while (k < 7)
    {
        cout << "Введите номер задания Лабораторной №7\n";
        cin >> n0;
        if (n0 == 0)
        {
            cout << "...\n";
        }
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
            if (n5() == 0)
            {
                k++;
            }
        }
        if (n0 == 6)
        {
            n6();
            k++;
        }
    }
}
