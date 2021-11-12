#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите размер файла в байтах\n";
    int x, kx;
    cin >> x;
    kx = x / 1024;
    cout << "Размер файла в килобайтах равен " << ceil(kx) << "\n";
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите два целых положительных числа А и В (А > В)\n";
    int A, B, x;
    cin >> A >> B;
    if (A < 0 or B < 0) 
    {
        cout << "Не соответствует условию\n";
    }
    else
    {
        if (A > B)
        {
            x = A / B;
            cout << "Количество целых отрезков В, размещённых на отрезке А = " << x << "\n";
        }
        else
        {
            cout << "Не соответствует условию\n";
        }
    }
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите два целых положительных числа А и В (А > В)\n";
    int A, B, x;
    cin >> A >> B;
    if (A < 0 or B < 0)
    {
        cout << "Не соответствует условию\n";
    }
    else
    {
        if (A > B)
        {
            x = A % B;
            cout << "Длинна незанятой части равна " << x << "\n";
        }
        else
        {
            cout << "Не соответствует условию\n";
        }
    }
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите двузначное число\n";
    int x1, x2, y;
    cin >> y;
    if (y >= 100 or y <= 9)
    {
        cout << "Не соответствует условию\n";
        return 1;
    }
    else
    {
        x1 = y / 10;
        x2 = y - x1 * 10;
        cout << "Число, полученное при перестановке цифр исходного числа = " << x2 << x1 << "\n";
    }
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите трёхзначное число\n";
    int x1, x2, x3, y;
    cin >> y;
    if (y >= 1000 or y <= 99)
    {
        cout << "Не соответствует условию\n";
        return 1;
    }
    else
    {
        x1 = y / 100;
        x2 = (y - x1 * 100) / 10;
        x3 = y - x1 * 100 - x2 * 10;
        cout << "Число, полученное при переносе первого слева числа на первое справа место = " << x2 << x3 << x1 << "\n";
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n0 = 0;
    int k = 0;
    while (k < 7)
    {
        cout << "Введите номер задания Лабораторной №8\n";
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
            if (n4() == 0)
            {
                k++;
            }
        }
        if (n0 == 5)
        {
            if (n5() == 0)
            {
                k++;
            }
        }
    }
}
