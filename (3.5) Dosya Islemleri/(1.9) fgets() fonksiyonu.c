#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	fgets() fonksiyonu dosyadan satir satir okuma yapar.

	char *fgets(char *_Buffer , int _MaxCount , FILE *_Stream);			Prototip bildirimi.

	1.parametre -->> Dosyadan okunan verilerin kaydedilecegi adres.
	2.parametre -->> Max byte sayisidir veya en buyuk boyuta sahip olan satirin byte sayisidir.
	3.parametre -->> Hangi dosyadan okuma yapilacaksa FILE* turunden degiskendir.

	Basarisizlik durumunda geriye NULL Pointer dondurur.
	Basari durumunda yazinin yazilacagi dizinin adresini dondurur.
*/



int main() {

	FILE* f = fopen("abc.txt", "r");		// Dosya okuma modunda acilmistir.Onceden olusturulmus olmalidir.
	if (!f) {
		printf("Dosya acilamadi...");
		return 1;
	}

	char a[9];


	/////////////////////////////
	/////*******ORNEK-1*********

	/*
	fgets(a, 6, f);
	printf("%s", a);
	fgets(a, 6, f);
	printf("%s", a);
	fgets(a, 6, f);
	printf("%s", a);
	
	// "a.txt" dosya icerigi --->>

	// merhaba
	// bugun
	// nasilsin


	// fgets fonksiyonu satir satir okuma yaptigi icin her satiri "a" degiskenine kaydeder ve sonraki satir geldigide icerigi sifirlar ve sadece yeni gelen satiri kaydeder.
	// Bu sebeple a degiskeninin sizeof'u en uzun satirin sizeof'u olmalidir.Ikinci parametre ise her satirdan kac byte okunacagini belirtir.En uzun satir "nasilsin" oldugu
	// icin ve 9 byte oldugu icin 2. parametre olarak da 9 byte girildi.
	*/
	

	/////////////////////////////
	/////*******ORNEK-2*********


	/*
	while (fgets(a, 9, f) != NULL) {
		printf("%s", a);
	}
	*/
}


