// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    float a = 0;
    float b = 0;
    std::cout << "BBedite nenulevoe chislo = ";
    std::cin >> a;
    if (a != 0)
    {
        std::cout << "BBedite nenulevoe chislo №2 = ";
        std::cin >> b;
        if (b != 0)
        {
            float a2 = a * a;
            float b2 = b * b;
            float s = a2 + b2;
            float r = a2 - b2;
            float p = a2 * b2;
            float ch = a2 / b2;
        }
    }
}