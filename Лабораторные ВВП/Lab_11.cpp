#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int n1()
{
    cout << "Введите два числа, чтобы если они не равны, то присвоить каждой большее из этих значений,\nа если нет, то присвоить переменным нулевые значения\n";
    int A, B;
    cin >> A >> B;
    if (A != B)
    {
        if (A > B)
        {
            B = A;
            cout << endl << A << endl << B << endl << endl;
        }
        else
        {
            A = B;
            cout << endl << A << endl << B << endl << endl;
        }
    }
    else
    {
        A = 0;
        B = 0;
        cout << endl << A << endl << B << endl << endl;
    }
    return 0;
}

int n2()
{
    cout << "Введите три числа, чтобы найти сумму двух наибольших из них\n";
    int a, b, c, s;
    cin >> a >> b >> c;
    if (a > c and b > c)
    {
        s = a + b;
        cout << "Сумма двух наибольших из них равна " << s << endl << endl;
    }
    if (a > b and c > b)
    {
        s = a + c;
        cout << "Сумма двух наибольших из них равна " << s << endl << endl;
    }
    if (c > a and b > a)
    {
        s = c + b;
        cout << "Сумма двух наибольших из них равна " << s << endl << endl;
    }
    return 0;
}

int n3()
{
    double Ax, Ay, Bx, By, Cx, Cy, RAB, RAC;
    cout << "Введите координаты точек A, B и C, чтобы определить, какая из точек В и С ближе к А\n";
    cout << "Введите координаты точки А\n";
    cin >> Ax >> Ay;
    cout << "Введите координаты точки B\n";
    cin >> Bx >> By;
    cout << "Введите координаты точки C\n";
    cin >> Cx >> Cy;
    RAB = sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));
    RAC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
    if (RAB < RAC)
    {
        cout << "К точке А ближе точка В с расстоянием в " << RAB << "у.е.\n";
    }
    if (RAC < RAB)
    {
        cout << "К точке А ближе точка C с расстоянием в " << RAC << "у.е.\n";
    }
    if (RAC == RAB)
    {
        cout << "К точке А точки В и С равноудалены с расстоянием в " << RAC << "у.е.\n";
    }
    return 0;
}

int n4()
{
    cout << "Введите координаты точки в плоскости, не лежащей на координатных осях,\nчтобы определить номер координатной четверти, в которой она находится\n";
    int x, y;
    cin >> x >> y;
    if (x != 0 and y != 0)
    {
        if (x > 0 and y > 0)
        {
            cout << "Точка расположена в координатной четверти под номером 1\n";
        }
        if (x < 0 and y > 0)
        {
            cout << "Точка расположена в координатной четверти под номером 2\n";
        }
        if (x < 0 and y < 0)
        {
            cout << "Точка расположена в координатной четверти под номером 3\n";
        }
        if (x > 0 and y < 0)
        {
            cout << "Точка расположена в координатной четверти под номером 4\n";
        }
    }
    else
    {
        cout << "Точка лежит на координатных осях. Начните заново\n";
    }
    return 0;
}

int n5()
{
    cout << "Введите целое число, чтобы увидеть его описание\n";
    int A;
    cin >> A;
    string znak, chet;
    if (A == 0)
    {
        cout << "Нулевое число";
    }
    else
    {
        if(A < 0)
        {
            znak = "отрицательное ";
        }
        if (A > 0)
        {
            znak = "положительное ";
        }

        if (A % 2 == 0)
        {
            chet = "чётное ";
        }
        else
        {
            chet = "нечётное ";
        }
        cout << "A " << znak << chet << "число\n";
    }
    return 0;
}

int n6()
{
    cout << "Введите целое число, лежащее в диапазоне 1-999, чтобы увидеть его описание\n";
    int A;
    cin >> A;
    string znach, chet;
    if (A >= 1 and A <= 9)
    {
        znach = "однозначное ";
    }
    if (A >= 10 and A <= 99)
    {
        znach = "двузначное ";
    }
    if (A >= 100 and A <= 999)
    {
        znach = "трёхзначное ";
    }

    if (A % 2 == 0)
    {
        chet = "чётное ";
    }
    else
    {
        chet = "нечётное ";
    }
    cout << "A " << chet << znach << "число\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n0 = 0;
    int k = -1;
    while (k != 0)
    {
        cout << "\nВведите номер задания Лабораторной №11\n\n";
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
        if (n0 == 6)
        {
            n6();
        }
    }
}