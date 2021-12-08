#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void second_maxest(int* array, int size, int* second_max_array) {

	int temp;

	for (int i = 0; i < size; i++) {
		for (int j = (i + 1); j < size; j++) {
			if (array[j] > array[i]) {
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	*second_max_array = array[1];
}

int main() {

	int a[] = { 4,7,5,9,14,8,12,3,10,11 };
	int second_max;
	int size_array = sizeof(a) / a[0];

	second_maxest(a, size_array, &second_max);

	printf("Second max array value : %d", second_max);
}

