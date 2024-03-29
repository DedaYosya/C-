﻿// . Задача:
// a.Создать словарь - список покупок.
// Каждый элемент должен содержать в себе название продукта / вещи и количество, 
// которое надо приобрести.
// Что ты выберешь для ключа, а что - для значения и почему ?
// b.Заполнить словарь 5 - ю элементами.
// c.Вывести на экран все пары ключ - значение, 
// затем добавить два элемента и повторно вывести всё на экран.

//

#include <iostream>
#include <map>
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем словарь
    map<string, int> shopList;

    // Добавляем элементы в словарь
    shopList["яблоки"] = 5;
    shopList["персики"] = 7;
    shopList["апельсины"] = 3;
    shopList["вишня"] = 15;
    shopList["картошка"] = 30;

    cout << "Список покупок: " << endl;
    cout << "---------------------------------------" << endl;
    // Выводим все пары ключ-значение на экран
    for (auto elem : shopList) {
        cout << "Продукт: " << elem.first << " - Количество: " << elem.second << endl;
     }

    // Добавляем два элемента в словарь
    shopList["соль"] = 1;
    shopList["сахар"] = 1;
    
    // Выводим все пары ключ-значение на экран снова
    cout << " " << endl;
    cout << "Добавили два продукта в список покупок:" <<  endl;
    cout << "---------------------------------------" << endl;
    for ( auto elem : shopList) {
        cout << "Продукт: " << elem.first << " - Количество: " << elem.second << endl;
    }
    system("PAUSE");
    return 0;
}
