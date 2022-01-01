#include <iostream>
#include <string>
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

class type : public publication
{
public: 
	float time;

};



int main(){

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

	n.putdata();
	c.putdata();
	p.putdata();
	t.putdata();
	
	return 0;
}
/* *1.	Представьте себе издательскую компанию, которая торгует книгами и
	аудио-записями этих книг. Создайте класс publication, в котором хранятся
	название (строка) и цена (типа float) книги. От этого класса наследуются
	еще два класса: book, который содержит информацию о количестве страниц
	в книге (типа int), и type, который содержит время записи книги в минутах
	(тип float). В каждом из этих трех классов должен быть метод getdata(),
	через который можно получать данные от пользователя с клавиатуры,
	и putdata(), предназначенный для вывода этих данных.
	Напишите функцию main() программы для проверки классов book и type.
	Создайте их объекты в программе и запросите пользователя ввести и вы-
	вести данные с использованием методов getdata() и putdata().
*/