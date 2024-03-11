#include <iostream>
#include <string>
using namespace std;

class Animal {

public:
    virtual void speak() {
        cout << "???" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Мяу" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() {
        cout << "Гав" << endl;
    }
};
class Cow : public Animal {
public:
    void speak() {
        cout << "Муу" << endl;
    }
};

class Human : public Animal {
public:
    void speak() {
        cout << "а когда перерыв?" << endl;
    }
};

class Programmer : public Animal {
public:
    void speak() {
        cout << "а когда dedline?" << endl;
    }
};

void animal_speak(Animal& a) {
    a.speak();
}

int main() {
    setlocale(LC_ALL, "Rus");

    Animal* animal = new Animal();
    Animal* cat = new Cat();
    Animal* dog = new Dog();
    Animal* cow = new Cow();
    Animal* human = new Human();
    Animal* programmer = new Programmer();

    animal->speak();
    cat->speak();
    dog->speak();
    cow->speak();
    human->speak();
    programmer->speak();

    cout << "_________________" << endl;
    Cat c;
    animal_speak(c);
}

