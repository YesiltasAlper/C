#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	FILE* f = fopen("text.txt", "r");		// "text" adinda dosya onceden olusturulmus olmalidir.

	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
		return 1;
	}

	int counter = 0;

	while (fgetc(f) != EOF) {
		counter++;
	}

	printf("Toplam karakter sayisi : %d", counter);

	fclose(f);
}
