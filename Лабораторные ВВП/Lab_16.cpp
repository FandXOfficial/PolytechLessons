#include <iostream>
#include <windows.h>

using namespace std;

void n1()
{
    cout << "Введите число, чтобы получить целочисленный массив размера N,\nсодержащий N первых положительных нечетных чисел: 1, 3, 5, ...\n";
    int i, c = 0, N;
    cin >> N;
    int arr[1000];
    for (i = 1; c < N; i++)
    {
        if (i % 2 != 0)
        {
            
            arr[c] = i;
            c += 1;
        }
    }
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

void n2()
{
    cout << "Введите числа последовательно N, А и D, чтобы получить массив размера N,\nсодержащий N первых членов данной прогрессии: A, A·D, A·D^2 , A·D^3 , ...\n";
    int i, N, A, D;
    cin >> N >> A >> D;
    long long arr[1000];
    for (i = 0; i < N; i++)
    {
        arr[i] = A * pow(D, i);
    }
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

void n3()
{
    cout << "Введите N > 2, A и В, чтобы сформировать и вывести целочисленный массив размера N,\nпервый элемент которого равен A, второй равен B,\nа каждый последующий элемент равен сумме всех предыдущих\n";
    int i, N, A, B, s, c = 0;
    cin >> N >> A >> B;
    long long arr[1000];
    arr[0] = A;
    arr[1] = B;
    s = (A + B);
    for (i = 2; i < N; i++)
    {
        arr[i] = s * pow(2, c);
        c++;
    }
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}

void n4()
{
    cout << "Введите размер массива N и сам массив А,\nчтобы вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2...\n";
    int i, N, A, c = 0;
    long long arr[1000];
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < (N / 2); i++)
    {
        if (i + 1 == N / 2 and N % 2 != 0)
        {
            cout << arr[i] << " " << arr[N - i - 1] << " " << arr[i + 1] << " ";
        }
        else
        {
            cout << arr[i] << " " << arr[N - i - 1] << " ";
        }
    }
}

void n5()
{
    cout << "Введите размер массива N и сам массив А,\nчтобы вывести вначале его элементы с нечетными номерами в порядке возрастания номеров,\nа затем — элементы с четными номерами в порядке убывания номеров\n";
    int i, j, N, A, B, s, c1 = 0, c2 = 0;
    long long arrn[1000];
    long long arrch[1000];
    long long arrnech[1000];
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> arrn[i];
    }
    for (i = 0; i < N; i++)
    {
        if (arrn[i] % 2 != 0 and arrn[i] != 0)
        {
            arrch[c1] = arrn[i];
            c1 += 1;
        }
    }
    for (i = 0; i < N; i++)
    {
        if (arrn[i] % 2 == 0 and arrn[i] != 0)
        {
            arrnech[c2] = arrn[i];
            c2 += 1;
        }
    }
    int buf;
    for (i = 0; i < c1 - 1; i++)
    {
        for (j = 0; j < c1 - 1 - i; j++)
        {
            if (arrch[j] > arrch[j + 1])
            {
                buf = arrch[j];
                arrch[j] = arrch[j + 1];
                arrch[j + 1] = buf;
            }
        }
    }
    int buf1;
    for (i = 0; i < c2 - 1; i++)
    {
        for (j = 0; j < c2 - 1 - i; j++)
        {
            if (arrnech[j] < arrnech[j + 1])
            {
                buf1 = arrnech[j];
                arrnech[j] = arrnech[j + 1];
                arrnech[j + 1] = buf1;
            }
        }
    }
    for (i = 0; i < c1; i++)
    {
        if (i + 1 == N)
        {
            cout << arrch[i];
        }
        else
        {
            cout << arrch[i] << " ";
        }
    }
    for (i = 0; i < c2; i++)
    {
        if (i + 1 == N)
        {
            cout << arrnech[i];
        }
        else
        {
            cout << arrnech[i] << " ";
        }
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
        cout << "\nВведите номер задания Лабораторной №15 (1 - 5):\n\n";
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