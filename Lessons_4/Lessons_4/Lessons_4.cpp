﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //Создаем переменную и проверяем циклом на "0"
    cout << "Введите число и нажмите Enter: " << endl;
    int num;
    cin >> num;
    while (num != 0) {
        cout << "Вы ввели: " << num << endl;
        cout << "Введите следущее число и нажмите Enter: " << endl;
        cin >> num;
    }
    // При выполнении условия программа закончила выполнение
    cout << "Вы ввели 0 и закончили выполнение программы" << endl;
    system("PAUSE");
    return 0;
}
// Задание 2. Напишите программу «Почемучка». 
// Программа должна постоянно задавать вопрос «Почему?» и 
// запрашивать у пользователя ответ до тех пор, 
// пока пользователь не ответит «Потому что».

//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
////Создаем переменную и проверяем циклом
//    string otvet;
//    while (otvet != "Потому что") {
//        cout << "Почему? " << endl;
//        getline(cin, otvet);
//       
//    }
//    // При выполнении условия программа закончила выполнение
//    cout << "Вы ввели правильный ответ и закончили выполнение программы" << endl;
//    system("PAUSE");
//    return 0;
//}
