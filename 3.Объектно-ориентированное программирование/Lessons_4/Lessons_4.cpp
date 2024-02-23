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
    //Animal() {
    //    age = 0;
    //    name = "Unknown";
    //}
    // Конструктор с одним параметром
    //Animal(string animalName) : name(animalName) {
    //    age = 0;
    //}
    // Конструктор с двумя параметрами
    Animal(string animalName = "", int animalAge = 0) : name(animalName), age(animalAge) {}

    // Метод для сравнения возраста с числом
    bool compareAge(int targetAge) {
        return age == targetAge;
    }
    // Метод для сравнения возраста с другим животным
    bool compareAge(Animal a) {
        return age == a.age;
    }
};

int main(){
    setlocale(LC_ALL, "Rus");
    // Создание пяти объектов класса Animal с использованием различных конструкторов
    Animal unknownAnimal;
    Animal dog("Арчи");
    Animal cat("Милка", 5);
    Animal bird("Вася");
    Animal fish("Суши", 2);
    // Пример использования методов сравнения возраста
    if (dog.compareAge(3)) {
        cout << dog.name << " is 3 years old.n";
    }
    else {
        cout << dog.name << " is not 3 years old.n";
    }
    if (cat.compareAge(bird)) {
        cout << cat.name << " and " << bird.name << " are the same age.n";
    }
    else {
        cout << cat.name << " and " << bird.name << " are different ages.n";
    }
    return 0;
}
