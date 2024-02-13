#include <iostream>
using namespace std;

class Person {
	int age;
public:
	string name;
	double height;

	Person() {
		cout << "вызван Конструктор!" << endl;
		name = "Иван";
		height = 170;
		age = 17;

		cout << "Возраст: " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Person p1;

	cout << p1.name << endl;
}