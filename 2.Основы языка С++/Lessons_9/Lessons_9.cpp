﻿// 1.	Написать консольное приложение, 
// которое будет выполнять функцию переводчика с английского языка на код Морзе.
// Программа должна принимать на вход строку.
// 2.	Результат работы программы - вывод на экран переведенного на код Морзе текста.
// Буквы в слове разделены пробелами, слова в строке - символом '' / ''.
// 3.	Программа должна уметь переводить в код морзе строчные и
//  заглавные буквы русского алфавита
// 4.	Реализовать возможность перевести несколько фраз за один раз 
// без необходимости перезапуска программы.
// 5.	Код программы должен состоять из функций, 
// выполняющих единственную и конкретную задачу.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

string getInput() {
    string input;
    cout << "Введите текст на английском языке и нажмите Enter: ";
    getline(cin, input);
    return input;
}
vector<string> splitString(const string& input) {
    vector<string> phrases;
    string phrase;
    stringstream ss(input);
    while (getline(ss, phrase)) {
        phrases.push_back(phrase);
    }
    return phrases;
}
unordered_map<char, string> morseCodes = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}, {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
    {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."},
    {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."},
    {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."},
    {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"},
    {'y', "-.--"}, {'z', "--.."},  {' ', "/"}
};
string toMorseCode(const string& phrase) {
    string morseCode;
    for (char c : phrase) {
        auto it = morseCodes.find(c);
        if (it != morseCodes.end()) {
            morseCode += it->second;
            morseCode += " ";
        }
    }
    return morseCode;
}
int main() {
    setlocale(LC_ALL, "Russian");
    string input = getInput();
    vector<string> phrases = splitString(input);
    for (const string& phrase : phrases) {
        string morseCode = toMorseCode(phrase);
        cout << morseCode << endl;
    }
    return 0;
}
