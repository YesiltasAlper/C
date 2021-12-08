#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

// int strlen(const char*); Prototip bildirim.

int main() {

	// strlen fonksiyonu adresini aldigi bir karakterin uzunlugunu bulur.

	/*
	char str[SIZE];
	printf("Enter any string : ");
	scanf("%s", str);

	int result = strlen(str);
	printf("%d", result);
	*/


	/*
	char str[SIZE];
	printf("Enter any string : ");
	scanf("%s", str);

	int result = strlen(str+2);
	printf("%d", result);

	// Burada pointer aritmetigi kullanilarak girilen stringin 2. indisinden itibaren al denmistir.
	// Ornegin tugce icin t = str[0]  u = str[1]  g = str[2]  c = str[3]  e = str[4] NULL = str[5] olur.
	// Burada kod str[2] den itibaren al seklinde yazilmistir.
	*/	

	
	/*
	char str[SIZE];
	printf("Enter any string : ");
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
		printf("%c ", str[i]);
	*/
}


