#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int func(int sayi) {

	if (sayi == 1 || sayi == 0)
		return 1;

	return sayi * func(sayi - 1);
}

int main() {

	int sayi;

	printf("Sayi : ");
	scanf("%d", &sayi);

	int sonuc = func(sayi);

	printf("%d! = %d", sayi, sonuc);
}


