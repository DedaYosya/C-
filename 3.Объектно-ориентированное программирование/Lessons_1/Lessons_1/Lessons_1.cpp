// 1.	Создать структуру Animal. 
// Добавить в структуру следующие поля, характеризующие животное: возраст(int), название(string) и вес(double). 
// 2.	В функции main создать пять объектов Animal, вывести на экран только названия животных
// 3.	В функции main изменить вес одного из животных.Вывести на экран вес “до” и “после” изменения.


//#include <iostream>
//using namespace std;
//
//// создаем структуру
//struct Animal {
//	string name; // название
//	int age;     // возраст
//	double weight; // вес
//	
//};
//
//int main() {
//	setlocale(LC_ALL, "Rus");
//
//	// Создаем объекты
//	Animal a1;
//	a1.name = "Слон";
//	a1.age = 70;
//	a1.weight = 200;
//
//	Animal a2;
//	a2.name = "Лев";
//	a2.age = 16;
//	a2.weight = 90;
//	
//	Animal a3;
//	a3.name = "Носорог";
//	a3.age = 34;
//	a3.weight = 206;
//
//	Animal a4;
//	a4.name = "Верблюд";
//	a4.age = 35;
//	a4.weight = 107;
//
//	Animal a5;
//	a5.name = "Кенгуру";
//	a5.age = 10;
//	a5.weight = 79;
//
//	// Выводим данные в терминал
//	cout << "Все животные: " << endl;
//	cout << endl;
//	cout << a1.name << endl;
//	cout << a2.name << endl;
//	cout << a3.name << endl;
//	cout << a4.name << endl;
//	cout << a5.name << endl;
//	cout << endl;
//	cout << a1.name << " весил до еды " << a1.weight << " кг. " << endl; 
//	a1.weight = 220;
//	cout << a1.name << " весил после еды " << a1.weight << " кг. " << endl;
//}


// так сделано у куратора

#include <iostream>
using namespace std;

// создаем структуру
struct Animal {
	string name; // название
	int age;     // возраст
	double weight; // вес

};

int main() {
	setlocale(LC_ALL, "Rus");
	Animal cat;
	Animal dog;
	Animal a1;
	Animal a2;
	Animal a3;
	cat.name = "Мурка";
	dog.name = "Шарик";
	a1.name = "Беляш";
	a2.name = "Шишка";
	a3.name = "Вася";
	cout << cat.name << endl;
	cout << dog.name << endl;
	cout << a1.name << endl;
	cout << a2.name << endl;
	cout << a3.name << endl;

	cat.weight = 3.2;
	cout << "Вес кошки 'до' :" << cat.weight << endl;
	cat.weight = 4.2;
	cout << "Вес кошки 'после' :" << cat.weight << endl;
}