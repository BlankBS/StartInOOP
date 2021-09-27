#include <iostream>
using namespace std;

class IntTest {
	public:

	int firstNum;
	int secondNum;
	int sum;
};

int main()
{
	IntTest First;
	IntTest Second;
	IntTest Sum;

	cin >> First.firstNum;
	cin >> Second.secondNum;
	Sum.sum = First.firstNum + Second.secondNum;
	cout << "sum= " << Sum.sum;
	
}
/*
Создайте класс Int, имитирующий стандартный тип int. Единственное
	поле этого класса должно иметь тип int. Создайте методы, которые будут
	устанавливать значение поля, равным нулю, инициализировать его целым
	значением, выводить значение поля на экран и складывать два значения
	типа Int.
Напишите программу, в которой будут созданы три объекта класса Int,
два из которых будут инициализированы. Сложите два инициализирован-
ных объекта, присвойте результат третьему, а затем отобразите результат
на экране.
*/