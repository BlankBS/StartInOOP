#include <iostream>
using namespace std;

void Something(int *pa, int *pb, int *pc) {
	 (*pa) = 5;
	*pb = *pa;
	*pc = 7;
	cout << "pa= " << pa << endl;
	cout << "pb= " << pb << endl;
	cout << "pc= " << pc << endl;
}

int main() {
	int a, b, c;
	a = 1, b = 2, c = 3;


	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
	cout << '\n';

	Something(&a, &b, &c);
}