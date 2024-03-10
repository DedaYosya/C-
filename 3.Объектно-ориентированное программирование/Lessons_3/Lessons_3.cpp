// 1.	Создать класс Animal. 
// Добавить в класс приватное поле возраст(int) и публичное  поле название(string) животного. 
// Создать конструктор для инициализации этих полей. 
// Создать три объекта класса Animal в функции main.
// 2.	Создать метод print(), который выводит на экран название и возраст животного.
// Вызвать этот метод для всех объектов в функции main.
// 3.	Создать метод birthday(int number), 
// который добавляет к возрасту животного число number и вызывает метод print
//


//#include <iostream>
//#include <string>
//using namespace std;
//
//// Создаем класс
//class Animal {
//    int age; // приватный
//public:
//    string name; // публичный
//
//    // Конструктор
//    Animal(string name, int age) {
//        this->name = name;
//        this->age = age;
//    }
//
//    // Гетеер для возраста
//    int get_print() {
//        return age;
//    }
//
//    // Сеттер добавления к возрасту
//     int set_birthday(int number) {
//         age += number;
//         get_print();
//        return age;
//    }
//};
//int main() {
//    setlocale(LC_ALL, "Rus");
//    
//    // Объявляем класс
//    Animal a1("Слон", 70);
//    Animal a2("Лев", 35);
//    Animal a3("Носорог", 78);
//    // Выводим в консоль
//    cout << "Животное: " << a1.name << " / Возраст: " << a1.get_print() << endl;
//    cout << "Животное: " << a2.name << " / Возраст: " << a2.get_print() << endl;
//    cout << "Животное: " << a3.name << " / Возраст: " << a3.get_print() << endl;
//    cout << "-- Возраст после добавления" << endl;
//    cout << "Животное: " << a1.name << " / Возраст: " << a1.set_birthday(10) << endl;
//    cout << "Животное: " << a2.name << " / Возраст: " << a2.set_birthday(10) << endl;
//    cout << "Животное: " << a3.name << " / Возраст: " << a3.set_birthday(10) << endl;
//    system("PAUSE");
//    return 0;
//}

// так сделано у куратора

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

    // Гетеер для возраста
    void print() {
        cout << "Имя: " << this->name <<
            "\tВозраст: " << this->age << endl;
    }

    // Сеттер добавления к возрасту
    void birthday(int number) {
        this->age += number;
        this->print();
    }
};
int main() {
    setlocale(LC_ALL, "Rus");

    // Объявляем класс
    Animal cat("Мурка", 4);
    Animal dog("Шарик", 2);
    Animal rat("Рататуй", 5);
    
    // Выводим в консоль
    cat.print();
    dog.print();
    rat.print();
    cout << "-- Возраст после добавления" << endl;
    cat.birthday(10);
}