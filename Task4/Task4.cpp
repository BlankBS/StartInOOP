#include <iostream>

using namespace std;

void massiv() 
{
	setlocale(LC_CTYPE, "rus");
	const int masSize = 3;
	float mas[masSize];
	
	cout << "Введите длинны сторон комнаты: ";

	float Volume=1;

	for (int i = 0; i < masSize; i++) {
		cin >> mas[i];
		Volume *= mas[i];
	}

	cout << "Объем вашей комнаты равен = " << Volume;
}

int main()
{
	massiv();
	return 0;
	system("pause");
}