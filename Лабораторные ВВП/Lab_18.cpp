#include <iostream>
#include <windows.h>
using namespace std;

void n1()
{
    cout << "Введите N, а затем последовательно два массива, чтобы поменять их содержимое местами" << endl;
    int i, x, arr1[100], N, arr2[100];
    cout << "Введите N: ";
    cin >> N;
    cout << "Введите первый массив: " << endl;
    for (i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    cout << "Введите второй массив: " << endl;
    for (i = 0; i < N; i++)
    {
        cin >> arr2[i];
    }
    for (i = 0; i < N; i++)
    {
        x = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = x;
    }
    cout << "Новые значения первого массива: ";
    for (i = 0; i < N; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl << "Новые значения второго массива: ";
    for (i = 0; i < N; i++)
    {
        cout << arr2[i] << " ";
    }
}

void n2()
{
    int i, N, j, K;
    float arr1[100], arr2[100], S, SA;
    cout << "Введите размер массива N и сам массив, чтобы сформировать новый массив В того же размера по следующему правилу:\nэлемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K\n";
    cout << "Введите размер массива: ";
    cin >> N;
    cout << "Введите значение К: ";
    cin >> K;
    cout << "Введите сам массив:\n";
    for (i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < N; i++)
    {
        S = 0;
        for (j = 0; j < K; j++)
        {
            S += arr1[j];
        }
        SA = S / K;
    }
    cout << SA << endl;
    cout << "Новый массив:\n";
    for (i = 0; i < K; i++)
    {
        arr2[i] = arr1[i] + SA;
        cout << arr2[i] << " ";
    }
    for (i = K; i < N; i++)
    {
        arr2[i] = arr1[i];
        cout << arr2[i] << " ";
    }
}

void n3()
{
    cout << "Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа.\nЕсли нечетные числа в массиве отсутствуют, то оставить массив без изменений\n";
    int arr[100], max, i, N;
    cout << "Введите размер массива: ";
    cin >> N;
    cout << "Введите сам массив:\n";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0 and arr[i] != 0)
        {
            max = arr[i];
        }
    }
    cout << "Новый массив:\n";
    for (i = 0; i < N; i++)
    {
        if (arr[i] % 2 != 0 and arr[i] != 0)
        {
            cout << (arr[i] + max) << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}

void n4()
{
    cout << "Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).\n";
    int arr[100], i, max = -10000, imax, min = 10000, imin, N;
    cout << "Введите размер массива: ";
    cin >> N;
    cout << "Введите сам массив:\n";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            imax = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            imin = i;
        }
    }
    if (imin < imax)
    {
        for (i = imin + 1; i < imax; i++)
        {
            arr[i] = 0;
        }
    }
    if (imin > imax)
    {
        for (i = imax + 1; i < imin; i++)
        {
            arr[i] = 0;
        }
    }
    cout << "Новый массив:\n";
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

void n5()
{
    cout << "Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию.\nСделать массив упорядоченным, переместив первый элемент на новую позицию.\n";
    int arr[100], i, temp, N;
    cout << "Введите размер массива: ";
    cin >> N;
    cout << "Введите сам массив:\n";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < N - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    cout << "Новый массив:\n";
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n0 = 0;
    int k = -1;
    while (k != 0)
    {
        cout << "\n\nВведите номер задания Лабораторной №18 (1 - 5):\n\n";
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
    }
}