#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int func(int sayi1, int sayi2) {

	if (sayi1 == 0 || sayi2 == 0)
		return 0;

	else if (sayi1 == 1)
		return sayi2;

	return sayi2 + func(sayi1 - 1, sayi2);

}

int main() {

	int sayi1, sayi2;

	printf("Sayi 1 : ");
	scanf("%d", &sayi1);

	printf("Sayi 2 : ");
	scanf("%d", &sayi2);

	int sonuc = func(sayi1, sayi2);

	printf("%d", sonuc);
}

