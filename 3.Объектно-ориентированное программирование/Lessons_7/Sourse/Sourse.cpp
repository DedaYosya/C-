﻿// 1.	В новый проект добавить файл Source.cpp. 
// Создать класс Animal добавить три поля, три метода и три конструктора. 
// В функции main создать пять объектов и для одного объекта вызвать все методы класса.
// 2.	Добавить в проект заголовочный файл Animal.h и перенести в него класс Animal.
// Добавить в файл Source.cpp строчку #include “Animal.h”.
// 4.	Добавить в проект заголовочный файл Info.h и написать в этом файле 
// функцию info(const Animal & a) внутри которого написать sizeof(a) 
// (Не забывайте что для работы с классом Animal в этот файл нужно подключить Animal.h).
// Добавить в файл с функцией main строчку #include “Info.h”.
// Вызвать метод info для каждого объекта класса Animal.
// Во всех заголовочных файлах используйте #pragma once чтобы избежать ошибок

#include "Animal.h"
#include "Info.h"

int main() {
    setlocale(LC_ALL, "Rus");

    // Запускаем логику
    // Создаем объекты класса
    Animal lev("Лёва", 6);
    Animal slon("Миша", 7);
    Animal jiraf("Кран", 4);
    Animal nosorog("Дима", 24);
    Animal krokodil("Гена", 27);

    // Вызов методов
    lev.print();
    lev.voise();
    lev.printAge();

    info(lev);
}