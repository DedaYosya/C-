#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    //setlocale(LC_ALL, "Rus");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    ifstream fin("quiz.txt");
    string s;
    getline(fin, s);
    cout << s << endl;
}