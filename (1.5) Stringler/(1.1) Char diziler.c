#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/*

	// Normal ASCII Tablosu icin

	for (int i = 0; i < 128; ++i)
		printf("%d	%c\n", i, i);
	*/


	
	/*
	// Genisletimis ASCII Tablosu icin

	for (int i = 0; i < 256; ++i)
		printf("%d	%c\n", i, i);
	*/



	/*
	// Bir karakterin ASCII kod numarasini ogrenmek icin

	for (int i = 0; i < 1; ++i)
		printf("%d %c\n", 'A','A' );
	*/



	/*
	char name[20];
	printf("Isim Soyisim giriniz : ");
	scanf("%s", name);						
	printf("%s", name);

	// Goruldugu gibi scanf fonksiyonu ornegin Alper Yesiltas girince bosluktan sonrasini almadi.
	*/



	/*
	char name[20];
	char surname[30];
	printf("isim soyisim giriniz : ");
	scanf("%s", name);
	scanf("%s", surname);
	printf("%s %s", name, surname);

	// Ekranda ornegin Alper Yesiltas yazinca ilk scanf'de Alper'i alacak daha sonra bosluk karakteri gordugunden name'e bunu kaydedecek.
	// Ama buffer'da zaten Yesiltas duruyor bunun icin tekrardan sormayip onu da ikinci scanf'de surname'e aliyor.
	// Ama sadece Alper yazip enter'a basarsak bu sefer bosluk gormedigi icin hala soruyor cunku buffer dolu degil.
	// Buffer da bos yer oldugundan dolayi bir giris daha istiyor.
	*/

}
