#include "Animal.h"

// Реализация методов
// Создаем конструктор 
Animal::Animal(string name, int age, bool isAngry) {
    this->name = name;
    this->age = age;
    this->isAngry = isAngry;
}
// Создаем конструктор 
Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}
// Создаем конструктор 
Animal::Animal() {}

// Создаем метод 
void Animal::print() {
    cout << "Имя: " << endl << this->name << endl <<
        "Возраст: " << endl << this->age << endl;
}
// Создаем метод 
void Animal::voise() {
    cout << "Ррррр" << endl;
}
// Создаем метод 
void Animal::printAge() {
    cout << "Возраст: " << endl << this->age << endl;
}