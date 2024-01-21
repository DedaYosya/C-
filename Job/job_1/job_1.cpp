// job_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i= 15;

/*    cin >> i;
    cout << i << endl*/;
    ofstream fout("e:\\file.txt");
    if (!fout) {
        cout << "Error!" << endl;
        return -1;
    }
    fout << i << endl;
}

