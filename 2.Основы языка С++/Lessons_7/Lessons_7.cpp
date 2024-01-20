// 1. Задача:
// Напиши функцию, которая принимает в качестве параметров вектор целых чисел и 
// целое число.Функция должна искать это число в заданном массиве.
// Алгоритм поиска может быть любым.
// В функции main предоставь пользователю возможность заполнить вектор и выбрать, 
// какое число он хочет искать.
// c.Выведи результат поиска на экран.

//

#include <iostream>
#include <vector>
using namespace std;
// Функция для поиска числа в векторе
bool searchNumber(const vector<int>& vec, int number) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == number) {
            return true;  // Число найдено
        }
    }
    return false; // Число не найдено
}

int main() {
    setlocale(LC_ALL, "Russian");

    vector<int> vec;
    int size, number;

    cout << "Введите размер вектора: ";
    cin >> size;
    cout << "Введите элементы вектора: ";

    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    cout << "Введите число для поиска: ";
    cin >> number;

    // Вызов функции поиска числа
    bool result = searchNumber(vec, number);

    if (result) {
        cout << "Число найдено в векторе." << endl;
    }
    else {
        cout << "Число не найдено в векторе." << endl;
    }
    return 0;
}
