
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    float xA, xB, xC, lenAC, lenBC, AC_BC;
    std::cout << "Введите координату (x) точек A и B последовательно" << "\n";
    std::cin >> xA >> xB;
    if (xA == xB)
    {
        std::cout << "Длина отрезка = 0";
    }
    else
    {
        std::cout << "Введите координату (x) точки С, лежащей между A и B" << "\n";
        std::cin >> xC;
        if (xA < xB)
        {
            if (xA < xC < xB)
            {
                lenAC = xC - xA;
                lenBC = xB - xC;
                AC_BC = lenAC * lenBC;
                std::cout << "Произведение длин отрезков AC и BC = " << AC_BC;
            }
            else
            {
                std::cout << "Точка С лежит вне отрезка АВ";
            }
        }
        if (xB < xA)
        {
            if (xB < xC < xA)
            {
                lenAC = xA - xC;
                lenBC = xC - xB;
                AC_BC = lenAC * lenBC;
                std::cout << "Произведение длин отрезков AC и BC = " << AC_BC;
            }
            else
            {
                std::cout << "Точка С лежит вне отрезка АВ";
            }
        }
    }
}
    