#include <iostream>
using namespace std;

void skipList() {
	for (int i = 0; i <= 3; i++) {
		cout << endl;
	}
}

void WorkWithNumber() {

	setlocale(LC_CTYPE, "rus");
	int firstPart;
	cout << "Введите код города(***): ";
	cin >> firstPart;
	cout << endl;
	if (firstPart <= 99 || firstPart >= 1000 || !cin) {
		while (firstPart <= 99 || firstPart >= 1000) {
			cout << "Введите правильное число(100-999): ";
			cin >> firstPart;
			if (!cin)
			{
				cin.clear();
				while (cin.get() != '\n');
			}
		}
	}


	int secondPart;
	cout << "Введите номер станции(***): ";
	cin >> secondPart;
	cout << endl;
	if (secondPart <= 99 || secondPart >= 1000 || !cin) {
		while (secondPart <= 99 || secondPart >= 1000) {
			cout << "Введите правильное число(100-999): ";
			cin >> secondPart;
			if (!cin)
			{
				cin.clear();
				while (cin.get() != '\n');
			}
		}
	}

	int thirdPart;
	cout << "Введите номер абонента(****): ";
	cin >> thirdPart;
	cout << endl;
	if (thirdPart <= 999 || thirdPart >= 10000 || !cin) {
		while (thirdPart <= 999 || thirdPart >= 10000) {
			cout << "Введите правильное число(1000-9999): ";
			cin >> thirdPart;
			if (!cin)
			{
				cin.clear();
				while (cin.get() != '\n');
			}
		}
	}

	skipList();

	cout << "Мой номер (212) 767-8900" << endl;
	cout << "Ваш номер (" << firstPart << ")" << " " << secondPart << "-" << thirdPart;
}

void main()
{
	WorkWithNumber();
	setlocale(LC_CTYPE, "rus");
}
/*
Введите код города, номер станции и номер абонента:
415 555 1212
Мой номер (212) 767-8900
Ваш номер (415) 555-1212
*/