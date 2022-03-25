#include "functions.h"
#include <stdlib.h>
#include <time.h>

int sum(int a, int b) {
	return a + b;
}

void fillArr(int a[], int len, int min, int max){
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		a[i] = rand() % (max - min) + min;
}

