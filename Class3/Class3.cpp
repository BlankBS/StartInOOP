#include <iostream>
using namespace std;

class Time {
public:
	int hours;
	int minutes;
	int seconds;
};

void skipList() {
	for (int i = 0; i <= 15; i++) {
		cout << endl;
	}
}

void Clock() {
	Time First;
	Time Second;
	Time Third;

	cout << "Enter a time: ";
	cin >> First.hours;
	cin >> Second.minutes;
	cin >> Third.seconds;
	cout << endl;
	cout << First.hours << ":" << Second.minutes << ":" << Third.seconds;
}

class forMain {
public:
	int FirstValue;
	int SecondValue;
	int SumValue;
};

int main()
{
	Clock();
	cout << endl;
	cout << endl;
	cout << endl;
	forMain first;
	forMain second;
	forMain third;

	cout << "Enter 2 nums: ";
	cin >> first.FirstValue;
	cin >> second.SecondValue;
	third.SumValue = first.FirstValue + second.SecondValue;
	cout << "sum= " << third.SumValue;

}
/*
Создайте класс с именем time, содержащий три поля типа int, предназна-
ченные для хранения часов, минут и секунд. Один из конструкторов клас-
са должен инициализировать поля нулевыми значениями, а другой конст-
руктор — заданным набором значений. Создайте метод класса, который
будет выводить значения полей на экран в формате 11:59:59, и метод,
складывающий значения двух объектов типа time, передаваемых в качест-
ве аргументов.
В функции main() следует создать два инициализированных объекта (по-
думайте, должны ли они быть константными) и один неинициализиро-
ванный объект. Затем сложите два инициализированных значения, а ре-
зультат присвойте третьему объекту и выведите его значение на экран.
Где возможно, сделайте методы константными.
*/