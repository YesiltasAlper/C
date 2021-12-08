#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

void ekle(int* dizi, int sirano, int sayi, int n);

int main() {

	int n, i, sirano, sayi;
	int dizi[25];

	start1:
	printf("Kac adet sayi girilecek (max 25) : ");
	scanf("%d", &n);
	if(n > 25)
	goto start1;

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		dizi[i] = rand() % 100;
		printf("array[%d] : %d\n", i, dizi[i]);
	}

	start2:
	printf("\n Eklenecek olan degerin sira numarasini giriniz (min 1 basa ekler max %d sona ekler) : ",n+1);
	scanf("%d", &sirano);
	if (sirano > n + 1 || sirano < 1)
		goto start2;

	printf("\n Eklenecek olan sayiyi giriniz : ");
	scanf("%d", &sayi);

	ekle(dizi, sirano, sayi, n);
}


void ekle(int* dizi, int sirano, int sayi, int n) {

	for (int i = n; i > sirano - 1; i--) {
		dizi[i] = dizi[i - 1];
	}
	dizi[sirano - 1] = sayi;

	printf("Son durum : \n");

	for (int i = 0; i < n + 1; i++)
		printf("array[%d] : %d\n", i, dizi[i]);
}

