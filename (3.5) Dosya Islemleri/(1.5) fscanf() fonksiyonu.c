#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	fscanf() fonksiyonu scanf fonksiyonunun dosya versiyonudur.

	scanf() fonksiyonu girdiyi standart input (klavye) den aliyorsa fscanf() fonksiyonu da girdiyi formatli bir dosyadan alir dosyadan formatli okuma islemi yapar.

	int fscanf(FILE*const__Stream,const char*const__Format,..);				Prototip bildirim.

	Ilk parametresi FILE*turunden dosyanin ismidir.
	Ikinci parametresi dosyadaki verilerin format turu
	Ucuncu parametresi ise formata uygun bir seyler.

	int ile geri donus degeri ise set ettigi alan sayisidir.
*/

int main() {

	FILE* f = fopen("school.txt", "r");
	char name[20];
	char city[20];
	int age;

	if (!f) {
		printf("Dosya Acma Basarisiz...");
		exit(EXIT_FAILURE);
	}

	printf("ISIM        YAS         SEHIR\n\n");

	while (fscanf(f, "%s %d %s", name, &age, city) != EOF) {
		printf("%s	    %d          %s\n", name, age, city);
	}

	fclose(f);
}


/*
	"school.txt"dosyasi asagidaki icerige sahiptir.

	Alper	24	Denizli
	Ayse	22	Ankara
	Metin	23	Izmir
	Burcu	21	Kocaeli
*/

