#include <iostream>
using namespace std;
//n- "степень числа"
//p - показатель
void power(double n, int p)
{
    setlocale(LC_CTYPE, "rus");
    double linkN = n;
    for (int i = 1; i < p; i++) {
        n = linkN * n;
    }
    cout << n;
    if (p == NULL) {
        cout << n * n;
    }
}

int main()
{
    double degree;
    int index;
    
    cout << "enter degree= ";
    cin >> degree;
    cout << "enter index= ";
    cin >> index;
    power(degree, index);
}
/*Возведение числа n в степень р — это умножение числа n на себя р раз.
Напишите функцию с именем power(), которая в качестве аргументов при-
нимает значение типа double  для n и значение типа int для р и возвращает
значение типа double. Для аргумента, соответствующего степени числа, за-
дайте значение по умолчанию, равное 2, чтобы при отсутствии показателя
степени при вызове функции число n возводилось в квадрат. Напишите
функцию main(), которая запрашивает у пользователя ввод аргументов для
функции power(), и отобразите на экране результаты ее работы.
*/