#include <iostream>
using namespace std;

class date {
public: 
	int month;
	int day;
	int year;
};

void getdate() {
	date m, *pm;
	date d, *pd;
	date y, *py;
	cout << "Enter a date: ";
	for (int i = 0; i < 1; i++) {
		cin >> m.month;
		cin >> d.day;
		cin >> y.year;
	}
	cout << m.month << "/" << d.day << "/" << y.year;
}

int main()
{
	getdate();
}
/*5.	Взяв в качестве основы структуру из упражнения 5 главы 4, создайте
класс date. Его данные должны размещаться в трех полях типа int: month,
day и year. Метод класса getdate() должен принимать значение для объекта
в формате 12/31/02, а метод showdate() — выводить данные на экран.
*/