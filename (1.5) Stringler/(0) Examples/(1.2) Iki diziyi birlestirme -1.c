#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE		5

// Iki ayri dizi array1 ve array2 olusturulur daha sonra array1 de birlestirilir.

int main() {

	int array1[SIZE*2], array2[SIZE];
	int* sayi1, * sayi2;
	int n = 0, m = 0;

	printf("Ilk dizimizin eleman sayisi (max 5) : ");
	scanf("%d", &n);

	for (sayi1 = array1; sayi1 < (array1 + n); sayi1++) {

		printf("array[%d] : ", sayi1 - array1);	
		scanf("%d", sayi1);
	}

	printf("Ikinci dizimizin eleman sayisi (max 5) : ");
	scanf("%d", &m);

	for (sayi2 = array2; sayi2 < (array2 + m); sayi2++) {

		printf("array[%d] : ", sayi2 - array2);						
		scanf("%d", sayi2);
	}

	printf("Ilk dizimiz : \n");

	for (int i = 0; i < n; i++)
		printf("%4d", *(array1 + i));

	printf("\n");

	printf("Ikinci dizimiz : \n");

	for (int i = 0; i < m; i++)
		printf("%4d", *(array2 + i));

	printf("\n");

	for (sayi1 = array1 + n, sayi2 = array2; sayi2 < array2 + m; sayi1++, sayi2++)
		*sayi1 = *sayi2;

	printf("Birlesme sonrasi : \n");

	for (int i = 0; i < n + m; i++)
		printf("%4d", *(array1 + i));

}

