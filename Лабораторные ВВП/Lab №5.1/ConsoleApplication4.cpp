
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "rus");
    float x1, y1, x2, y2, h, l, P, S;
    std::cout << "Введите координаты (х и у) вершины прямоугольника\n";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты (х и у) противоположной вершины прямоугольника\n";
    std::cin >> x2 >> y2;
    h = abs(y2 - y1);//высота
    l = abs(x2 - x1);//длина
    P = h * 2 + l * 2;
    S = h * l;
    std::cout << "Периметр данного прямоугольника = " << P << "\n";
    std::cout << "Площадь данного прямоугольника = " << S;
}
