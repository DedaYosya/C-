// 1.	Создать класс Animal.Добавить в класс приватное поле возраст(int) 
// и публичное  поле название(string) животного.
// 2.	Создать три конструктора для этого класса :
// -без параметров()
// - с одним параметром(string name)
// - с двумя параметрами(string name, int age)
// В функции main создать пять объектов класса Animal.
// 3.	Создать два метода compareAge(метод должен возвращать true или false)
// - c параметром int age(сравнить возраст животного с числом)
// - с параметром Animal a(сравнить возраст двух животных между собой)

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    int age;
public:
    string name;

    // Конструктор без параметров
    Animal() {}

    // Конструктор с одним параметром
    Animal(string animalName) : name(animalName) {}
        // this->name = animalName; }  можно так написать код
    Animal(int animalAge) : age(animalAge) {}
    
    // Конструктор с двумя параметрами
    Animal(string animalName, int animalAge){
        this->name = animalName;
        this->age = animalAge;
    }
    // Animal(string animalName = "", int animalAge = 0) : name(animalName), age(animalAge) {}   
    // можно так сократить код для "без параметров" и с "двумя параметрами" если валидное значение

    // Гетеер для возраста
    int get_print() {
        return age;
    }
    // Метод сравнения возраста с числом
    bool compareAge(int num) {
        return age >= num;
    }
    // Метод сравнения возраста одного животного с возрастом другого животного
    bool compareAge(const Animal& a) {
        get_print();
        return age >= a.age;
    }
};

int main(){
    setlocale(LC_ALL, "Rus");

    // Создание объектов класса Animal
    Animal wolf;
    Animal dog("Арчи");
    Animal cat("Милка", 10);
    Animal parrot("Кеша", 5);
    Animal mouse("Микки", 7);
    Animal (4);

    // Сравнение возраста с числом
    if (cat.compareAge(9)) {
        cout << cat.name << " старше заданного числа 9" << endl;
        cout << cat.name << " " << cat.get_print() << " лет " << endl;
    }
    else {
        cout << cat.name << " младше заданного числа 9" << endl;
        cout << cat.name << " " << cat.get_print() << " лет " << endl;
    }

    // Сравнение возраста с возрастом
    if (mouse.compareAge(parrot)) {
        cout << "-------------------------------" << endl;
        cout << mouse.name << " старше " << parrot.name << endl;
        cout << mouse.name << " " << mouse.get_print() << " лет " << endl;
        cout << parrot.name << " " << parrot.get_print() << " лет " << endl;
    }
    else {
        cout << mouse.name << " младше " << parrot.name << endl;
        cout << mouse.name << " " << mouse.get_print() << " лет " << endl;
        cout << parrot.name << " " << parrot.get_print() << " лет " << endl;
    }
    system("PAUSE");
    return 0;
}
