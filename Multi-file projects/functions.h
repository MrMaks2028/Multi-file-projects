#pragma once
#include <iostream>

int sum(int a, int b);

void fillArr(int a[], int len, int min, int max);

template <typename T> void showArr(T a[], int len) {
	std::cout << "[";
	for (int i = 0; i < len; i++)
		std::cout << a[i] << ", ";
	std::cout << "\b\b]\n";
}