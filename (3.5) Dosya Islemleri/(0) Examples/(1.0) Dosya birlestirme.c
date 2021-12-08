#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char file_address1[150];

	printf("Kaynak Dosya Adresi-1 : ");
	scanf("%s", &file_address1);						// Onceden olusturulmus olan 1. dosyanin adresi girilmelidir.

	FILE* f_source1 = fopen(file_address1, "r");

	if (!f_source1) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}


	char file_address2[150];


	printf("Kaynak Dosya Adresi-2 : ");
	scanf("%s", &file_address2);

	FILE* f_source2 = fopen(file_address2, "r");		// Onceden olusturulmus olan 2. dosyanin adresi girilmelidir.

	if (!f_source2) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}


	char file_combine[150];


	printf("Birlesim Dosya Adresi : ");
	scanf("%s", &file_combine);

	FILE* f_combine = fopen(file_combine, "w");			// Dosya nereye olusturulmak isteniyorsa veya neredeyse o adres girilmelidir.

	if (!f_combine) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}


	int ch1;


	while ((ch1 = fgetc(f_source1)) != EOF) {

		fputc(ch1, f_combine);
	}


	int ch2;


	while ((ch2 = fgetc(f_source2)) != EOF) {

		fputc(ch2, f_combine);
	}

	int x1 = fclose(f_source1);
	int x2 = fclose(f_source2);
	int x3 = fclose(f_combine);

	if (x1 == x2 == x3 == 0)
		printf("Birlestirme islemi tamam ve dosyalar kapatildi...\n");
	else
		printf("Dosyalar kapatilamadi...\n");
}

/*
	Ornek olarak windows isletim sistemi icin ==>>

	1.kaynak dosya masustunde "file1" isimli olsun.Bu durumda konsolda "Kaynak Dosya Adresi-1" olarak
	"C:\\Users\\Admin\\Desktop\\file1.txt"	girilmelidir.

	2.kaynak dosya masustunde "file2" isimli olsun.Bu durumda konsolda "Kaynak Dosya Adresi-2" olarak
	"C:\\Users\\Admin\\Desktop\\file2.txt"	girilmelidir.

	Birlesim dosyasi masaustunde "combine" isimli olsun.Bu durumda konsolda "Birlesim Dosya Adresi" olarak
	"C:\\Users\\Admin\\Desktop\\combine.txt"	girilmelidir.
*/
