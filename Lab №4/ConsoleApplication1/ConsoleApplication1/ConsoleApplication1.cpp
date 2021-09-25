// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "BBedi Bisotu\n";
    std::cin >> a;
    std::cout << "BBedi shirinu\n";
    std::cin >> b;
    int S = a * b;
    int P = 2 * (a + b);
    std::cout << S << "\n" << P;
}