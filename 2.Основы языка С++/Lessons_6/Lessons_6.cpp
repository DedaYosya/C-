// 1. Задача:
// a.Написать программу, которая позволяет пользователю 
// с помощью встроенной функции sort отсортировать вектор, 
// состоящий из 10 элементов, по возрастанию.
// b.Вывести отсортированный вектор в консоль

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    vector<int> arr = { 8, 4, 1, 5, 9, 7, 3, 6, 2, 10 };
//    // Сортировка элементов вектора
//    sort(arr.begin(), arr.end()); 
//    // Вывод отсортированных элементов вектора
//    for (int num : arr) {
//        cout << num << " "; 
//    }
//    cout << endl;
//    return 0;
//}

// 2. Задача:
// a.Создать и заполнить массив элементами с клавиатуры.
// b.Выполнить сортировку массива с помощью "сортировки пузырьком".
// c.Вывести на экран массив после сортировки.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Вводим размера массива
    int size;
    cout << "Введите размер массива и нажмите Enter: " << endl;
    cin >> size;
    // Вводим элементы массива
    int* arr = new int[size];
    cout << "Введите " << size << " элементов массива через пробел и нажмите Enter : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // Сортировка
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Вывод отсортированного массива
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("PAUSE");
    return 0;
}