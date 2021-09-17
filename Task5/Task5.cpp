#include <iostream>
using namespace std;

struct Worker
{
	char lastName[30];
	char position[30];
	float wage;
};


int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 3;
	int i, b, counter = 0;
	Worker mas[size];
	for (i = 0; i < size; i++)
	{
		cout << "Введите фамилию " << i + 1 << "-ого работника: " << endl;
		cin >> mas[i].lastName;
		cout << "Должность: ";
		cin >> mas[i].position;
		cout << "Заробная плата: ";
		cin >> mas[i].wage;
	}
	return 0;
	system("pause");
}
