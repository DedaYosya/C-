// job_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//int main()
//{
//    int i= 15;
//    string s = "hello";
//    double pi = 3.14;
//    vector<int> v{ 1, 5, 7, 4, -2, 9 };
//
///*    cin >> i;
//    cout << i << endl*/;
//    ofstream fout("file.txt");
//    if (!fout) {
//        cout << "Error!" << endl;
//        return -1;
//    }
//    fout << i << endl;
//    fout << s << endl;
//    fout << pi << endl;
//    for (auto elem : v) {
//        fout << elem << " ";
//    }
//    fout.close();
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//	ifstream fin("file.txt");
//	string s;
//	while (getline(fin, s)) {
//
//
//		cout << s << endl;
//	}
//	fin.close();
//
//}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream fin("file.txt");
	string s;
	if (!fin) {
		cout << "Error!" << endl;
		return -1;
	}
	while (fin) {
		fin >> s;
		cout << s << endl;
	}
	fin.close();

}