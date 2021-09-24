#include <iostream>
using namespace std;

void time_to_secs(long time){
	cout << "time in secs= " << time * 3600 << endl;
}

void secs_to_time(long time) {
	cout << "time in hours= " << time / 3600 << endl;
}

int main()
{
	long a, b;
	cout << "enter first time= ";
	cin >> a;
	cout << "enter second time= ";
	cin >> b;
	time_to_secs(a);
	secs_to_time(b);
	return 0;
}

/*6.	Модифицируйте программу, описанную в упражнении 11 главы 4 «Струк-
туры», складывающую два структурных значения типа time. Теперь про-
грамма должна включать в себя две функции. Первая, time_to_secs(), при-
нимает в качестве аргумента значение типа time и возвращает эквивалентное
значение в секундах типа long. Вторая, secs_to_time(), в качестве аргумента
принимает число секунд, имеющее тип long, а возвращает эквивалентное
значение типа time.
*/
/*
* Я не перестраивал, просто написал свою прогу
*/