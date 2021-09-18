#include <iostream>
using namespace std;

void power()
{
    setlocale(LC_CTYPE, "rus");
    float n;
    int p;
    cout << "Введите основание и показатель: ";
    cin >> n >> p;
    int n1;
    n1 = n;
    for (int i = 1; i < p; i++) {
        n*=n1;
    }
    cout << n;
}

int main()
{
    power();
}