#include <iostream>
#include <string>

using namespace std;

struct Members {
	string name;
	string post;
	float age;
	float wage;
};

void getdata() {
	Members Name;
	Members Post;
	Members Age;
	Members Wage;
	int amount;
	cout << "Input amount of workers: ";
	cin >> amount;
	puts("Input information about workers");
	for (int i = 0; i < amount; i++) {
		cout << i+1 << " name: ";
		cin >> Name.name;
		cout << "post: ";
		cin >> Post.post;
		cout << "age: ";
		cin >> Age.age;
		cout << "wage: ";
		cin >> Wage.wage;
		cout << '\n';
	}
}

int main() {
	getdata();
}
/* *2. Создайте класс employee, который содержит имя (объект класса string) и но-
мер (типа long) служащего. Включите в него метод getdata(), предназна-
ченный для получения данных от пользователя и помещения их в объект,
и метод putdata(), для вывода данных. Предполагаем, что имя не может иметь
внутренних пробелов.
Напишите функцию main(), использующую этот класс. Вам нужно будет
создать массив типа employee, а затем предложить пользователю ввести
данные до 100 служащих. Наконец, вам нужно будет вывести данные всех
служащих.
*/