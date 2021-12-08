#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>


void kayitsil(int* A, int sira, int elemansayisi) {

	for (int i = sira - 1; i < elemansayisi - 1; i++)
		*(A + i) = *(A + i + 1);

	printf("Kayit silme sonrasi durum : \n");

	for (int i = 0; i < elemansayisi - 1; i++)
		printf("array[%d] : %d\n",i, *(A + i));
}


int main() {

	int n, i, sirano;
	int dizi[25];

	start1:
	printf("Kac adet sayi girilecek (max 25): ");
	scanf("%d", &n);
	if (n > 25)
		goto start1;

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		dizi[i] = rand() % 100;
		printf("dizi[%d] : %d\n", i, dizi[i]);
	}

	start2:
	printf("\n Silinecek olan degerin sira numarasini giriniz (1 den baslar) : ");
	scanf("%d", &sirano);
	if (sirano < 1 || sirano > n)
		goto start2;

	kayitsil(dizi, sirano, n);
}
