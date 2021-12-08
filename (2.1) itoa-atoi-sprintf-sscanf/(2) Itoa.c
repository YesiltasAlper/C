#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//------------------------------ITOA (Integer to Alphabetic)------------------------------

/*
	Oncelikle bu bir possix fonksiyonudur. Linux ve Unix gibi sistemlerde standart ama windows isletim sisteminde standart olmak zorunda degildir.

	char *itoa (int value,char *str, int base);			// possix fonksiyonu

	<stdlib.h> baslik dosyasinda tanimlidir ve ismi itoa ve 3 tane parametresi vardir.

	Bir tam sayidan bir yazi bir karakter bir string elde etmeye yarayan bir fonksiyondur.

	1. parametresi yaziya donusturulecek tam sayidir.Bir tam sayi alacak ve bunu yaziya donusturecek.
	2. parametresi bir adres bilgisidir.Donusturdugu yaziyi nereye kaydedeceginin adresi.
	3. parametresi hangi sayi sisteminde yapacak bu islemleri 2'lik 8'lik 10'luk 16'lik...
*/

int main() {

	/*

	// Girilen sayiyi binary olarak ekrana bastirir.

	int ival;
	char str[100];
	printf("bir tam sayi giriniz : ");
	scanf("%d", &ival);

	_itoa(ival, str, 2);			// Konsolda bu uyariyi verdi ve possix oldugu icin itoa'yi degil _itoa'yi kullandigini soyledi.
	printf("%s", str);
	*/

	
	/*
	// Girilen sayiyi octal olarak ekrana bastirir.

	int ival;
	char str[100];
	printf("bir tam sayi giriniz : ");
	scanf("%d", &ival);

	_itoa(ival, str, 8);
	printf("%s", str);
	*/


	/*
	
	// Girilen sayiyi decimal olarak ekrana bastirir.
	
	int ival;
	char str[100];
	printf("Bir tam sayi giriniz : ");
	scanf("%d", &ival);

	_itoa(ival, str, 10);
	printf("%s", str);
	*/


	/*
	
	// Girilen sayiyi hexadecimal olarak ekrana bastirir.

	int ival;
	char str[100];
	printf("bir tam sayi giriniz : ");
	scanf("%d", &ival);

	_itoa(ival, str, 16);			
	printf("%s", str);
	*/
}

