#include <iostream>
using namespace std;

struct myPhone {
	int pMyFirst = 212;
	int pMySecond = 767;
	int pMyThird = 8900;
};

struct phone {
	int pFirst;
	int pSecond;
	int pThird;
};

void skipList() {
	for (int i = 0; i <= 3; i++) {
		cout << endl;
	}
}
void WorkWithMyNumber() {
	setlocale(LC_CTYPE, "rus");

	const int mySize = 3;
	myPhone mas[mySize];
	for (int i = 0; i < 1; i++) 
	{
		cout << "Мой номер (";
		cout << mas[i].pMyFirst;
		cout << ") ";
		cout << mas[i].pMySecond;
		cout << "-";
		cout << mas[i].pMyThird;
	}
};

void WorkWithNumber() {
/*
Введите код города, номер станции и номер абонента :
415 555 1212
Мой номер(212) 767 - 8900
Ваш номер(415) 555 - 1212*/

	setlocale(LC_CTYPE, "rus");

	const int size = 3;
	phone mas[size];
	for (int i = 0; i < 1; i++) {
		cout << "Введите код города, номер станции и номер абонента: " << endl;
		cin >> mas[i].pFirst; 
		cin >> mas[i].pSecond;
		cin >> mas[i].pThird;
		cout << "Ваш номер (" << mas[i].pFirst << ") ";
		cout << mas[i].pSecond << "-" << mas[i].pThird;
		cout << endl;
	}
}


void main()
{
	WorkWithNumber();
	WorkWithMyNumber();
	setlocale(LC_CTYPE, "rus");
}
/*Номер телефона, например (212) 767—8900, можно условно разделить на
		три части: код города (212), номер телефонной станции (767) и номер
		абонента (8900). Напишите программу с использованием структуры, поз-
		воляющую раздельно хранить эти три части телефонного номера. Назо-
		вите структуру phone. Создайте две структурные переменные типа phone.
		Инициализацию одной из них произведите сами, а значения для другой
		запросите с клавиатуры. Затем выведите содержимое обеих переменных
		на экран. Результат работы программы должен выглядеть приблизитель-
		но так:
Введите код города, номер станции и номер абонента:
415 555 1212
Мой номер (212) 767-8900
Ваш номер (415) 555-1212

*/