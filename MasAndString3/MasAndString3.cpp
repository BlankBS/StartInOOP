#include <iostream>

using namespace std;

void maxInt() {
	const int masSize = 10;
	int mas[masSize];
	int max=0, iMax;
	cout << "Enter 10 nums\n";
	for (int i = 0; i < masSize; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < masSize; i++) {
		if (mas[i] > max) {
			max = mas[i];
			iMax = i;
		}
	}
	cout << "\nMax num: " << max;
	cout << "\nIndex: " << iMax;
}

int main()
{
	maxInt();
}	
/*
4. Начните с программы, которая позволяет пользователю вводить целые чис-
ла, а затем сохранять их в массиве типа int. Напишите функцию maxint(),
которая, обрабатывая элементы массива один за другим, находит наиболь-
ший. Функция должна принимать в качестве аргумента адрес массива и
количество элементов в нем, а возвращать индекс наибольшего элемента.
Программа должна вызвать эту функцию, а затем вывести наибольший
элемент и его индекс. (Смотрите программу SALES этой главы.)
*/