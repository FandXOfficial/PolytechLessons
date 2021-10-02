// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    std::cout << "Введите координаты точки А";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты точки B";
    std::cin >> x2 >> y2;
    int dlina = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    float lenxy = sqrt(dlina);
    std::cout << "Расстояние между точками = " << lenxy;
}