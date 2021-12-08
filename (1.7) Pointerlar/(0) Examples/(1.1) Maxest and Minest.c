#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define		SIZE		10

void maxest_and_minest(int* array, int len) {

	int* ptrminest = NULL;
	int* ptrmaxest = NULL;

	int* maxest = NULL;
	int* minest = NULL;

	minest = maxest = array;

	for (int i = 1; i < len; i++) {

		if (array[i] > *(maxest)) {
			maxest = &array[i];
		}

		ptrmaxest = maxest;

		if (array[i] < *(minest)) {
			minest = &array[i];
		}

		ptrminest = minest;
	}

	printf("maxest = %d\nminest = %d", *(ptrmaxest), *(ptrminest));
}


int main() {

	int array[SIZE] = { 600,10,9,15,20,30,40,100,550,20 };
	maxest_and_minest(array, SIZE);
}
