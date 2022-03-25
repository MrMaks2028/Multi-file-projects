#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	//Работа с functions.h
	/*int n, m;
	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	
	int a[10];
	fillArr(a, 10, 1, 100);
	cout << "Изначальный массив:\n";
	showArr(a, 10);*/

	//Работа с structures.h
	/*person SJ = {"See Jay", {1, 1, 1970}};
	showObj(SJ);*/

	//Работа с data.h
	cout << "Введите 2 числа: ";
	cin >> _X >> _Y;
	showXY();
	cout << _X << " + " << _Y << " = " << sum(_X, _Y) << endl;

	cout << "Введите радиус окружности: ";
	double r;
	cin >> r;
	cout << "Площадь окружности = " << _PI * r * r << endl;

	cout << "Изначальный массив:\n";
	fillArr(_A, 10, 10, 20);
	showArr(_A, 10);


	return 0;
}