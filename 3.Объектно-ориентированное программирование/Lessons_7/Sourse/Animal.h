#pragma once
#include <iostream>
using namespace std;

// —оздаем класс и переменные
class Animal {
public:
    string name;
    int age;
    bool isAngry;
    // ќбъ€вл€ем конструкторы
    Animal(string name, int age, bool isAngry);
    Animal(string name, int age);
    Animal();
    // ќбъ€вл€ем методы(функции)
    void print();
    void voise();
    void printAge();
};