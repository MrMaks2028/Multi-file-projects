#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	//������ � functions.h
	/*int n, m;
	cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	
	int a[10];
	fillArr(a, 10, 1, 100);
	cout << "����������� ������:\n";
	showArr(a, 10);*/

	//������ � structures.h
	/*person SJ = {"See Jay", {1, 1, 1970}};
	showObj(SJ);*/

	//������ � data.h
	cout << "������� 2 �����: ";
	cin >> _X >> _Y;
	showXY();
	cout << _X << " + " << _Y << " = " << sum(_X, _Y) << endl;

	cout << "������� ������ ����������: ";
	double r;
	cin >> r;
	cout << "������� ���������� = " << _PI * r * r << endl;

	cout << "����������� ������:\n";
	fillArr(_A, 10, 10, 20);
	showArr(_A, 10);


	return 0;
}