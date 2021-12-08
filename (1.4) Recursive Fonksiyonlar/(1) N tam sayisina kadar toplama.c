#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int func1(int x) {

	if (x == 0)
		return 0;

	else if (x == 1) {
		return 1;
	}

	return x + func1(x - 1);
}

int main() {

	int sayi;

	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);

	int sonuc = func1(sayi);

	printf("%d", sonuc);
}
