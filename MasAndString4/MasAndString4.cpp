#include <iostream>

using namespace std;

class fraction {

};

void fraction() {
	const int masSize = 10;
	float mas[masSize];
	float sumOfNums = 0;
	cout << "Enter 10 nums\n";
	for (int i = 0; i < masSize; i++) {
		cin >> mas[i];
		sumOfNums += mas[i];
	}
	cout << sumOfNums / 10;
}

int main()
{
	fraction();
}
/*5.	Начните с класса fraction из упражнений 11 и 12 главы 6. Напишите
функцию main(), которая получает случайные дробные числа от пользова-
теля, сохраняет их в массиве типа fraction, вычисляет среднее значение и
выводит результат.
*/