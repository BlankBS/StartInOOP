#include <iostream>
using namespace std;

/*
4.	Создайте структуру с именем employee, содержащую два поля: номер со-
трудника типа int и величину его пособия в долларах типа float. Запроси-
те с клавиатуры данные о трех сотрудниках, сохраните их в трех струк-
турных переменных типа employee и выведите информацию о каждом из
сотрудников на экран.
*/
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
