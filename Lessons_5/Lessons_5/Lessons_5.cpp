// Темa «Цикл “for”»
// Задание 1. Вывести на экран ряд чисел от 1 000 000 до 2 000 000.

#include <iostream>
using namespace std;

int main() {
	// Создаем цикл с выводом в консоль
	for (int i = 1000000; i <= 2000000; i+=1000) {
		cout << i << " ";
	}
	system("PAUSE");
	return 0;
	
}

// Задание 2. Напишите программу, которая выведет таблицу умножения на 7.

#include <iostream>
using namespace std;

int main() {
	// Создаем цикл с умножением переменной на 7 и выводом в консоль
	for (int i = 1; i <= 10; i++) {
		cout << i * 7 << endl;
	}
	system("PAUSE");
	return 0;	
}