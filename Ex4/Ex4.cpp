#include <iostream>
using namespace std;

int Distance(int a, int b) {
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}
	int result;
	result = b - a;
	return result;
}

int main()
{
	cout << "enter 2 nums: ";
	int d1, d2, result; 
	cin >> d1 >> d2;
	result = Distance(d1, d2);
	return result;
}
/*Напишите функцию, принимающую в качестве аргументов два значения
типа Distance и возвращающую значение наибольшего из аргументов 
*/