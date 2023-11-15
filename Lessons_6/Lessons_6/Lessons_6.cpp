// Тема «Строки»
// Задание 1. Маша в свободное время решила поиграть в игру "Найди слово в слове". 
// Например, она нашла слово "нос" в "носорог". 
// Она захотела написать программу, которая бы проверяла, 
// есть ли слово "сон" в вводимой пользователем строке. 
// Помогите ей справиться с этой задачей!

//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//// Создали переменную и ввод слова из терминала
//    string word;
//    cout << "Ищем слово 'сон' в слове!" << endl;
//    cout << "Напишите любое слово: " << endl;
//    getline (cin, word);
//
//// Проверяем на соответствие
//    if (word.find("сон") != -1) {
//        cout << "Слово 'сон' в слове " << word << " найдено!" << endl;
//    }
//    else {
//        cout << "Слово 'сон' в слове " << word << " не найдено!" << endl;
//    }
//    system("PAUSE");
//    return 0;
//}

// Задание 2. Костя и Паша ввели две строки. У них появилась идея, 
// чтобы строка Кости вставлялась в середину строки Паши. 
// После этого должна выводиться готовая скрещенная строка. 
// Напишите программу для решения этой задачи!

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

// Создаем две переменные и вводим значения из консоли
    string Kst;
    cout << "Вводит текст Костя" << endl;
    getline(cin, Kst);
    string Pash;
    cout << "Вводит текст Паша" << endl;
    getline(cin, Pash);

    Kst.insert(Kst.size() / 2, Pash);
    cout << "После скрещения получается слово" << endl;
    cout << Kst << endl;

    system("PAUSE");
    return 0;
}


