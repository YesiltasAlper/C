#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void getMaxCountValinArray(const int* array, size_t size, int* max_repetadValue, int* maxCount) {

	*maxCount = 0;
	int counter = 0;
	int i, j;

	for (i = 0; i < size; i++) {
		counter = 1;
		for (j = (i + 1); j < size; j++) {

			if (array[i] == array[j])
				counter++;
			if (counter > *maxCount) {
				*maxCount = counter;
				*max_repetadValue = array[j];
			}

		}
	}
}

int main() {

	int a[] = { 5,3,4,1,2,1,9,3,4,2,3,8,3,10 };
	int max_repetad_Val, maxCount;

	getMaxCountValinArray(a, 14, &max_repetad_Val, &maxCount);

	printf("Max Count : %d\nMax Repeated Value : %d", maxCount, max_repetad_Val);
}

