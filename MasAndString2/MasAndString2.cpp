#include <iostream>
#include <string>

using namespace std;

void reversit() {
	setlocale(LC_CTYPE, "rus");
	int LengthOfMyLine;
	string Line;
	getline(cin, Line);
	LengthOfMyLine = Line.length();
	for (int i = LengthOfMyLine; i > 0; i--) {
		cout << Line[i];
	}
	cout << Line[0];
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	reversit();
}

/* *1. Напишите функцию reversit(), которая переворачивает строку (массив типа
	char). Используйте цикл for, который меняет местами первый и последний
	символы, затем следующие и т. д. до предпоследнего. Строка должна пере-
	даваться в функцию reversit() как аргумент.
Напишите программу для выполнения функции reversit(). Программа долж-
на принимать строку от пользователя, вызывать функцию reversit(), а за-
тем выводить полученный результат. Используйте метод ввода, который
позволяет использовать внутренние пробелы. Протестируйте программу
на примере фразы «Аргентина манит негра».
*/