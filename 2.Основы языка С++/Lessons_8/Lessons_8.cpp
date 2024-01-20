// 1. Задача: 
// a.Написать программу, которая считывает имя пользователя из консоли
// b.Записать в файл строку, приветствующую пользователя по введенному имени
// c.Считать эту строку из файла и вывести её в консоль.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string name;
    cout << "Введите ваше имя: ";
    cin >> name;
    ofstream file("hello.txt");
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    file << "Привет, " << name << endl;
    file.close();
    ifstream inputFile("hello.txt");
    if (!inputFile.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    string greeting;
    getline(inputFile, greeting);
    cout << greeting << endl;
    inputFile.close();
    return 0;
}
