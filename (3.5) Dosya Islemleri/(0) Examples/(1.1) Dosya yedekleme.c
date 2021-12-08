#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char file_source[150];

	printf("Kaynak Dosya Adresi : ");
	scanf("%s", &file_source);

	FILE* f_source = fopen(file_source, "r");

	if (!f_source) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}


	char file_copy[150];


	printf("Kopyalanacak Dosya Adresi : ");
	scanf("%s", &file_copy);

	FILE* f_dest = fopen(file_copy, "w");

	if (!f_dest) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}


	int ch;


	while ((ch = fgetc(f_source)) != EOF) {

		fputc(ch, f_dest);
	}
	
	fclose(f_source);
	fclose(f_dest);
}


/*
	Ornek olarak windows isletim sistemi icin ==>>

	Kaynak dosya masustunde "source" isimli olsun.Bu durumda konsolda "Kaynak Dosya Adresi" olarak
	"C:\\Users\\Admin\\Desktop\\source.txt"		girilmelidir.

	Kopyalama dosyasi masaustunde "dest" isimli olsun.Bu durumda konsolda "Kopyalanacak Dosya Adresi" olarak
	"C:\\Users\\Admin\\Desktop\\dest.txt"	girilmelidir.
*/
