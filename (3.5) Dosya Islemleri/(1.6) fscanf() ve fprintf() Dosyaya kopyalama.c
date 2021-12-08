#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* f_source = fopen("school.txt", "r");

	if (!f_source) {
		printf("Kaynak Dosya Acma Basarisiz...");
		exit(EXIT_FAILURE);
	}

	FILE* f_dest = fopen("dest_school.txt", "w");

	if (!f_dest) {
		printf("Hedef Dosya Acma Basarisiz...");
		exit(EXIT_FAILURE);
	}

	char name[20];
	char city[20];
	int age;

	fprintf(f_dest, "%s\t %s\t %s\n", "ISIM", "YAS", "SEHIR");

	while (fscanf(f_source, "%s %d %s", name, &age, city) != EOF) {
		fprintf(f_dest, "%s\t %d\t %s\n", name, age, city);
	}

	fclose(f_source);
	fclose(f_dest);
}


/*
	"school.txt"dosyasi asagidaki icerige sahiptir.

	Alper	24	Denizli
	Ayse	22	Ankara
	Metin	23	Izmir
	Burcu	21	Kocaeli
*/
