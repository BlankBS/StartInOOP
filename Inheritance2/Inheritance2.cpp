#include <iostream>
using namespace std;

class publication {
public:
	string name;
	float cost;

	void getdata() {
		cin >> name;
	}

	void putdata() {
		cout << name << '\n';
	}
};

class book : public publication
{
public:
	int pages;
};

class type : public publication {
public:
	float time;
};

class sales : public publication {
public:
	int mas[100];
};

int main()
{
	publication n;
	publication c;

	cout << "Enter name of book: ";
	n.getdata();
	cout << "Enter cost of book: ";
	c.getdata();

	book p;

	cout << "Enter amount pages of book: ";
	p.getdata();

	type t;

	cout << "Enter long time of book: ";
	t.getdata();

	sales m;

	cout << "Enter amount of money for one month: ";
	m.getdata();

	n.putdata();
	c.putdata();
	p.putdata();
	t.putdata();
	m.putdata();

	return 0;
}
/* *3. Начните с классов book, type и publication из упражнения 1. Добавьте базо-
вый класс sales, в котором содержится массив, состоящий из трех значе-
ний типа float, куда можно записать общую стоимость проданных книг за
последние три месяца. Включите в класс методы getdata() для получения
значений стоимости от пользователя и putdata() для вывода этих цифр.
Измените классы book и type так, чтобы они стали производными обоих
классов: publications и sales. Объекты классов book и type должны вводить
и выводить данные о продажах вместе с другими своими данными. Напи-
шите функцию main() для создания объектов классов book и type, чтобы
протестировать возможности ввода/вывода данных.
*/