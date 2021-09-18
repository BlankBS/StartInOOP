#include <iostream>
using namespace std;

/*
4.	Создайте структуру с именем employee, содержащую два поля: номер со-
трудника типа int и величину его пособия в долларах типа float. Запроси-
те с клавиатуры данные о трех сотрудниках, сохраните их в трех струк-
турных переменных типа employee и выведите информацию о каждом из
сотрудников на экран.
*/
struct employee
{
	int position;
	float wage;
};

void Worker() {
	setlocale(LC_ALL, "Russian");
	const int size = 3;
	employee mas[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Введите номер сотрудника: ";
		cin >> mas[i].position;
		cout << "Введите его оклад: ";
		cin >> mas[i].wage;
	}

		cout << "№ \t $" << endl;
	for (int i = 0; i < size; i++) {
		cout << mas[i].position << "\t" << mas[i].wage << endl;
	}

}

int main()
{
	Worker();
	return 0;
	system("pause");
}
