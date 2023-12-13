//// Урок «Булевый тип данных и условия»
//// Задание 1
//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	// создаем и запрашиваем значения трех переменных
//	cout << "Введите три числа" << endl;;
//	int numA;
//	cin >> numA;
//	int numB;
//	cin >> numB;
//	int numC;
//	cin >> numC;
//	cout << "Принято!!!" << endl;
//	// проверяем на равность и выполняем сложение
//	if ((numA == numB) || (numA == numC) || (numB == numC))
//	{
//		numA += 5;
//		numB += 5;
//		numC += 5;
//		cout << "Есть равные числа!!!" << endl;
//		cout << numA << endl << numB << endl << numC << endl;
//	}
//	else {
//		cout << "Равных чисел нет." << endl;
//	}
//	system("PAUSE");
//	return 0;
//}
 
// Урок «Булевый тип данных и условия»
// Задание 2
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
// Задаем переменные
	int bal = 0;
	int otvet;
// Вопрос 1
	cout << "Что из ниже приведенного относится к фруктам? " << endl;
	cout << " 1. Редис" << endl;
	cout << " 2. Яблоки" << endl;
	cout << " 3. Картофель" << endl;

	cout << "Выберите один из вариантов и нажмите Enter" << endl;
	cout << "Номер : "; 
	cin >> otvet;
// Проверяем ответ
	if (otvet == 2) {
		bal +=5;
		cout << "Правильно!!" << endl;
	}
	else {
		if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
		else cout << "Не правильно!" << endl;
	}
// Вопрос 2
	cout << "Что из ниже приведенного относится к овощам?" << endl;
	cout << " 1. Груши" << endl;
	cout << " 2. Морковь" << endl;
	cout << " 3. Абрикосы" << endl;

	cout << "Выберите один из вариантов и нажмите Enter" << endl;
	cout << "Номер : ";
	cin >> otvet;
// Проверяем ответ
	if (otvet == 2) {
		bal += 5;
		cout << "Правильно!!" << endl;
	}
	else {
		if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
		else cout << "Не правильно!" << endl;
	}
// Вопрос 3
	cout << "Что из ниже приведенного не относится к овощам?" << endl;
	cout << " 1. Слива" << endl;
	cout << " 2. Свекла" << endl;
	cout << " 3. Лук" << endl;

	cout << "Выберите один из вариантов и нажмите Enter" << endl;
	cout << "Номер : ";
	cin >> otvet;
// Проверяем ответ
	if (otvet == 1) {
		bal += 5;
		cout << "Правильно!!" << endl;
	}
	else {
		if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
		else cout << "Неправильно!" << endl;
	}
// Выводим результат
	cout << "Ваш общий балл равен "  << bal << endl;
	system("PAUSE");
	return 0;
}


