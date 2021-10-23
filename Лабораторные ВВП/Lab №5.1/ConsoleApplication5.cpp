#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    float x1, x2, x3, y1, y2, y3, len1, len2, len3, P, S, p;
    std::cout << "Введите координаты (х и у) точки №1 в треугольнике\n";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты (х и у) точки №2 в треугольнике\n";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты (х и у) точки №3 в треугольнике\n";
    std::cin >> x3 >> y3;
    len1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    len2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    len3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    P = len1 + len2 + len3;
    p = P / 2;
    S = sqrt(p * (p - len1) * (p - len2) * (p - len3));
    if (S == 0)
    {
        std::cout << "Треугольник не существует";
    }
    else
    {
        std::cout << "Периметр данного тругольника = " << P << "\n";
        std::cout << "Площадь данного треугольника = " << S;
    }
}