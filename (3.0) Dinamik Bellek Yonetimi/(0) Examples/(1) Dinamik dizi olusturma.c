#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* make_array(size_t size, int init_val);

int main() {

	int n, m;
	printf("Dizi boyutu giriniz : ");
	scanf("%d", &n);

	printf("Initialize value : ");
	scanf("%d", &m);

	int* x = make_array(n, m);

	printf("\n");

	for (int i = 0; i < n; i++)
		printf("array[%d] = %d\n", i, *(x + i));

	free(x);
}

int* make_array(size_t size, int init_val) {

	int* ptr = (int*)malloc(size * sizeof(int));

	if (ptr == NULL) {
		printf("Basarisiz...");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < size; i++)
		*(ptr + i) = init_val;

	return ptr;
}
