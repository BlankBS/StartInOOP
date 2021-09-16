#include <iostream>

using namespace std;

void Points() 
{
	setlocale(LC_CTYPE, "rus");
	int pointX, pointY;
	int secondPointX, secondPointY;

	cout << "Введите кординаты первой точки X: ";
	cin >> pointX;
	cout << "Введите кординаты первой точки Y: ";
	cin >> pointY;
	cout << "Введите кординаты второй точки X: ";
	cin >> secondPointX;
	cout << "Введите кординаты второй точки Y: ";
	cin >> secondPointY;

	cout << "Кординаты первой + второй точки: " << pointX + secondPointX << "." << pointY + secondPointY;
}

int main()
{
	Points();
	return 0;
	system("pause");
}
