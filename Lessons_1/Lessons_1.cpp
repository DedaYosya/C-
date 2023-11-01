#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// создаем переменные
	int intNumber = 5;
	short shNumber = 6;
	long lnNumber = 1415161718192021222;
	unsigned unNumber = 2122232430;
	float flNumber = 0.5678;
	double dbNumber = 7.67891011;
	char chNumber = 'g';
	string stNumber = "Привет";
	bool blNumber = true;
	// переписываем значение некоторых переменных
	cin >> intNumber;
	cin >> intNumber;
	cin >> shNumber;
	cin >> lnNumber;
	cin >> unNumber;
	// выводим на экран все значения переменных
	cout << intNumber << endl;
	cout << shNumber << endl;
	cout << lnNumber << endl;
	cout << unNumber << endl;
	cout << flNumber << endl;
	cout << dbNumber << endl;
	cout << chNumber << endl;
	cout << stNumber << endl;
	cout << blNumber << endl;
	return 0;
}


