#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	int n, m;

	printf("Kac adet sayi uretmek istiyorsunuz [1.Dizi] : ");
	scanf("%d", &n);
	printf("Kac adet sayi uretmek istiyorsunuz [2.Dizi] : ");
	scanf("%d", &m);

	int* ptr_1 = (int*)malloc(n * sizeof(int));
	int* ptr_2 = (int*)malloc(m * sizeof(int));
	int* ptr_3 = (int*)malloc((n + m) * sizeof(int));

	srand(time(0));

	printf("\nIlk dizi ==>\n");

	for (int i = 0; i < n; i++) {
		*(ptr_1 + i) = rand() % 25;
		printf("%4d", *(ptr_1 + i));
	}

	printf("\nIkinci dizi ==>\n");

	for (int i = 0; i < m; i++) {
		*(ptr_2 + i) = rand() % 25;
		printf("%4d", *(ptr_2 + i));
	}

	printf("\nBirlesim sonrasi ==>\n");

	for (int i = 0; i < n; i++)
		*(ptr_3 + i) = *(ptr_1 + i);

	for (int i = 0; i < m; i++)
		*(ptr_3 + i + n) = *(ptr_2 + i);

	for (int i = 0; i < (n + m); i++)
		printf("%4d", *(ptr_3 + i));

	printf("\n");

	free(ptr_1);
	free(ptr_2);
	free(ptr_3);
}
