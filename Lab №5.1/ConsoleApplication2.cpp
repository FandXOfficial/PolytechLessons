// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    std::cout << "Введите координаты точки А";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты точки B";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты точки C";
    std::cin >> x3 >> y3;
    int dlinaAC = ((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1));
    float lenAC = sqrt(dlinaAC);
    std::cout << "Расстояние AC= " << lenAC << '\n';
    int dlinaBC = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
    float lenBC = sqrt(dlinaBC);
    std::cout << "Расстояние BC = " << lenBC << '\n';
    std::cout << "Сумма отрезков AC и BC = " << lenAC + lenBC;
}