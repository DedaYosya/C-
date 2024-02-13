// Lessons_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct Animal {
	string name; // название
	int age;     // возраст
	double weight; // вес
	
};

int main() {
	setlocale(LC_ALL, "Rus");
	Animal a1;
	a1.name = "Слон";
	a1.age = 70;
	a1.weight = 200,6;

	Animal  a2;
	a2.name = "Лев";
	a2.age = 16;
	a2.weight = 90,1;
	

	cout << a1.name << endl;
	cout << a2.name << endl;
}
