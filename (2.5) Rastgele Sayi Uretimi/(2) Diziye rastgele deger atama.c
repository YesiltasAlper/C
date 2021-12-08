#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define			SIZE		15

void random_array(int* ptr, size_t size) {

	srand((unsigned int)time(0));

	for (int i = 0; i < size; i++)
		*ptr++ = rand() % 200;
}


int main() {
	int a[SIZE];
	random_array(a, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, *(a + i));

}

