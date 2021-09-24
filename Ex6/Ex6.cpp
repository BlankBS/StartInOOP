#include <iostream>
using namespace std;

void Swap(int time, int sec) {
	time = time * 3600;
	sec = sec / 3600;
	swap(time, sec);
	cout << endl;
	cout << time << " " << sec;
}

int main()
{
	int a, b;
	puts("enter 2 nums: ");
	cin >> a >> b;
	Swap(a, b);
}
/*
9.	Переработайте программу из упражнения 8 так, чтобы функция swap()
принимала в качестве аргументов значения типа time (см. упражнение 6).
*/