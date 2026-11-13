// Задание 4. Ввести r и c (каждое 3..8). Во вложенных циклах вывести адрес каждой ячейки как число 100*i + j; но если (i + j) кратно 5, вместо номера вывести символ # (ячейка закрыта). После таблицы вывести число закрытых и число доступных ячеек.
#include <iostream>
#include <clocale>
using namespace std;

void task4()
{
    setlocale(LC_ALL, "Russian");
    int r, c;
    int closed = 0;
    int open = 0;
    cout << "Введите r (3..8): ";
    while (!(cin >> r) || r < 3 || r > 8)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Нужно число от 3 до 8. Повторите ввод: ";
    }
    cout << "Введите c (3..8): ";
    while (!(cin >> c) || c < 3 || c > 8)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Нужно число от 3 до 8. Повторите ввод: ";
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if ((i + j) % 5 == 0)
            {
                cout << "#\t";
                closed++;
            }
            else
            {
                cout << 100 * i + j << "\t";
                open++;
            }
        }
        cout << endl;
    }
    cout << "Закрытых ячеек: " << closed << endl;
    cout << "Доступных ячеек: " << open << endl;
}

/*
int main() {
    task4();
    return 0;
}
*/