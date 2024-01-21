// 1. Задача: 
// a.Написать программу, которая считывает имя пользователя из консоли
// b.Записать в файл строку, приветствующую пользователя по введенному имени
// c.Считать эту строку из файла и вывести её в консоль.

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// создали переменную
    string name;
	// вводим имя
    cout << "Введите ваше имя: ";
    cin >> name;
	    // Запись в файл
		ofstream out;
		out.open("hello.txt");
		if (out.is_open()) {
			out << name;
		}
		else cout << "Error!";
		out.close();
		// чтение из файла и вывод в консоль
		ifstream in("hello.txt");
		if (in.is_open()) {
			while (getline(in, name)) {
				cout << "Привет, " << name << endl;
			}
		}
		in.close();
		system("PAUSE");
		return 0;

	}
