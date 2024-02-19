// 1.	Создать класс Animal. 
// Добавить в класс приватное поле возраст(int) и публичное  поле название(string) животного. 
// Создать конструктор для инициализации этих полей. 
// Создать три объекта класса Animal в функции main.
// 2.	Создать метод print(), который выводит на экран название и возраст животного.
// Вызвать этот метод для всех объектов в функции main.
// 3.	Создать метод birthday(int number), 
// который добавляет к возрасту животного число number и вызывает метод print
//


#include <iostream>
#include <string>
using namespace std;

// Создаем класс
class Animal {
    int age; // приватный
public:
    string name; // публичный

    // Конструктор
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Метод для возраста
    int print() {
        return age;
    }

    // Метод добавления к возрасту
     int birthday(int number) {
         age += number;
        print();
        return age;
    }
};
int main() {
    setlocale(LC_ALL, "Rus");
    
    // Объявляем класс
    Animal a1("Слон", 70);
    Animal a2("Лев", 35);
    Animal a3("Носорог", 78);
    // Выводим в консоль
    cout << "Животное: " << a1.name << " / Возраст: " << a1.print() << endl;
    cout << "Животное: " << a2.name << " / Возраст: " << a2.print() << endl;
    cout << "Животное: " << a3.name << " / Возраст: " << a3.print() << endl;
    cout << "-- Возраст после добавления" << endl;
    cout << "Животное: " << a1.name << " / Возраст: " << a1.birthday(10) << endl;
    cout << "Животное: " << a2.name << " / Возраст: " << a2.birthday(10) << endl;
    cout << "Животное: " << a3.name << " / Возраст: " << a3.birthday(10) << endl;
    system("PAUSE");
    return 0;
}