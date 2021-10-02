#include <iostream>
#include <cmath>

int main()
{
    float a = 0;
    float b = 0;
    std::cout << "BBedite nenulevoe chislo №1 = ";
    std::cin >> a;
    if (a != 0)
    {
        std::cout << "BBedite nenulevoe chislo №2 = ";
        std::cin >> b;
        if (b != 0)
        {
            float ma = abs(a);
            float mb = abs(b);
            float s = ma + mb;
            float r = ma - mb;
            float p = ma * mb;
            float ch = ma / mb;
            std::cout << s << '\n' << r << '\n' << p << '\n' << ch;
        }
    }
}