#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void dizi_olustur(int n, int* ptr);
void dizi_sirala(int n, int* ptr);
void dizi_kucuk(int n, int* ptr);
void dizi_buyuk(int n, int* ptr);

int main() {

	int n;

	printf("Kac tane sayi girmek istiyorsunuz : ");
	scanf("%d", &n);

	int* ptr = (int*)malloc(n * sizeof(int));

	dizi_olustur(n, ptr);
	dizi_sirala(n, ptr);
	dizi_kucuk(n, ptr);
	dizi_buyuk(n, ptr);
	printf("\n");

	free(ptr);
}

void dizi_olustur(int n, int* ptr) {

	srand(time(0));

	printf("\nOlusturulan Dizi ==>\n");

	for (int i = 0; i < n; i++) {
		*(ptr + i) = rand() % 25;
		printf("%d\t", *(ptr + i));
	}
}

void dizi_sirala(int n, int* ptr) {

	int memory;

	printf("\nSiralama ==> \n");

	for (int j = 0; j < n - 1; j++) {

		for (int i = 0; i < n - j - 1; i++) {

			if (ptr[i] > ptr[i + 1]) {

				memory = ptr[i];
				ptr[i] = ptr[i + 1];
				ptr[i + 1] = memory;
			}
		}

	}

	for (int i = 0; i < n; i++)
		printf("%d\t", ptr[i]);
}

void dizi_kucuk(int n, int* ptr) {

	int minest = *ptr;

	printf("\n");

	for (int i = 1; i < n; i++) {
		if (*(ptr + i) < minest) {
			minest = *(ptr + i);
		}
	}

	printf("\nMinest ==> %d", minest);
}


void dizi_buyuk(int n, int* ptr) {

	int maxest = *ptr;

	for (int i = 1; i < n; i++) {
		if (*(ptr + i) > maxest) {
			maxest = *(ptr + i);
		}
	}

	printf("\nMaxest ==> %d", maxest);
}
