#include <iostream>

using namespace std;

/*
Создайте структуру с именем Volume, содержащую три поля типа Distance
из примера englstrc, для хранения трех измерений помещения. Определи-
те переменную типа Volume, инициализируйте ее, вычислите объем, зани-
маемый помещением, и выведите результат на экран. Для подсчета объема
переведите каждое из значений типа Distance в значение типа float, равное
соответствующей длине в футах и хранимое в отдельной переменной. За-
тем для вычисления объема следует перемножить три полученные веще-
ственные переменные.
*/
struct Volume {
	float length;
	float width;
	float height;
};

void Square() 
{
	setlocale(LC_CTYPE, "rus");
	float volume;
	const int size = 3;
	Volume mas[size];

	for (int i = 0; i < 1; i++) {
		cout << "Введите длинну, ширину и высоту: ";
		cin >> mas[i].length;
		cin >> mas[i].width;
		cin >> mas[i].height;
		volume = mas[i].height * mas[i].width * mas[i].length;
		cout << "S = " << volume;
	}
}

int main()
{
	Square();
	return 0;
	system("pause");
}