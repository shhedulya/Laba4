// Задание 2. Ввести n (1..10000). С помощью while определить количество нулей в конце десятичной записи числа n! без вычисления самого факториала. Для этого последовательно делить копию n на 5, 25 и т. д. и суммировать целые частные. Вывести количество нулей. Использовать переменную-делитель типа long long.
#include <iostream>
#include <clocale>
using namespace std;

void task2()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int zeros = 0;
    long long del = 5;
    cout << "Введите n (1..10000): ";
    while (!(cin >> n) || n < 1 || n > 10000)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Нужно число от 1 до 10000. Повторите ввод: ";
    }
    while (del <= n)
    {
        zeros = zeros + n / del;
        del = del * 5;
    }
    cout << "Нулей в конце " << n << "!: " << zeros << endl;
}

/*
int main() {
    task2();
    return;
}
*/