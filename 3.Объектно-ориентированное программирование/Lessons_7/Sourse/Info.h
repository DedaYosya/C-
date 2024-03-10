#pragma once
#include "Animal.h"
using namespace std;
// Создаем метод(функцию)
void info(const Animal& a) {
	cout << sizeof(a) << " байт" << endl;
}