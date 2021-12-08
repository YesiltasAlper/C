#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		SIZE	150

int main() {

	char name[SIZE];
	printf("Cumle giriniz : ");
	gets(name);

	int rakam = 0, buyukharf = 0, kucukharf = 0, ozelkarakter = 0;

	for (int i = 0; name[i] != '\0'; i++) {

		if (name[i] >= 48 && name[i] <= 57) {
			rakam++;
			printf("Rakamlar : %c\n", name[i]);
		}

		else if (name[i] >= 65 && name[i] <= 90) {
			buyukharf++;
			printf("Buyuk harf : %c\n", name[i]);
		}

		else if (name[i] >= 97 && name[i] <= 122) {
			kucukharf++;
			printf("Kucuk harf : %c\n", name[i]);
		}

		else {
			ozelkarakter++;
			printf("Ozel karakter : %c\n", name[i]);
		}


	}

	printf("**********************************\n");
	printf("Rakam sayisi : %d\nBuyuk harf sayisi : %d\nKucuk harf sayisi : %d\nOzel karakter sayisi : %d\n", rakam, buyukharf, kucukharf, ozelkarakter);

}
s
