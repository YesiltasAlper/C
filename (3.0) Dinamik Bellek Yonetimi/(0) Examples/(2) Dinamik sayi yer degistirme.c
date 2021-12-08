#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int s1, s2;

	printf("Sayi 1 : ");
	scanf("%d", &s1);
	printf("Sayi 2 : ");
	scanf("%d", &s2);

	int* ptr_s1 = (int*)malloc(1 * sizeof(int));
	int* ptr_s2 = (int*)malloc(1 * sizeof(int));

	if ((ptr_s1 == NULL) || (ptr_s2 == NULL))
		exit(EXIT_FAILURE);


	printf("------------------ILK ADRESLER ve DEGERLER----------------\n");

	*ptr_s1 = s1;
	*ptr_s2 = s2;

	printf("Sayi 1 Heap baslangic adresi : %p\tSayi 1 Degeri : %d\n", ptr_s1, *(ptr_s1));
	printf("Sayi 2 Heap baslangic adresi : %p\tSayi 2 Degeri : %d\n", ptr_s2, *(ptr_s2));

	printf("\n-------------------YER DEGISTIRME SONRASI-----------------\n");

	*ptr_s1 = s2;
	*ptr_s2 = s1;

	printf("Sayi 1 Heap baslangic adresi : %p\tSayi 1 Degeri : %d\n", ptr_s1, *(ptr_s1));
	printf("Sayi 2 Heap baslangic adresi : %p\tSayi 2 Degeri : %d\n", ptr_s2, *(ptr_s2));

	free(ptr_s1);
	free(ptr_s2);
}
