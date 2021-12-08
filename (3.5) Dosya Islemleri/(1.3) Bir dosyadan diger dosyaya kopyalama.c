#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {

	FILE* source = fopen("source_file.txt", "r");	// read modunda.Onceden olusturulmus olmalidir.

	if (!source) {
		printf("Source basarisiz...");
		exit(EXIT_FAILURE);
	}

	FILE* dest = fopen("dest_file.txt", "w");

	if (!dest) {
		printf("Dest Basarisiz....");
		exit(EXIT_FAILURE);
	}

	int ch;

	while ((ch = fgetc(source)) != EOF) {

		fputc(ch, dest);
	}

	fclose(source);
	fclose(dest);
}

/*
	"source_file" dosyasi onceden olusturulmus olmalidir ve kopyalama yapilacagi icin icinde veriler olmalidir."source_file" sadece okuma islemi icin kullanilacaktir.

	"dest_file" dosyasi write modunda acildigi icin onceden olusturulmasa bile "dest_file" adinda dosya olusturulacaktir ve "source_file" dosyasinin icindeki veriler

	"dest_file" dosyasina kopyalanacaktir.
*/

