#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int get_words(FILE* my_file) {

	int counter = 0;
	int ch;

	while ((ch = fgetc(my_file)) != EOF) {
		if (isspace(ch) != 0)				// Bosluk karakteri ise non-zero deger dondurur.Normal bir karakter ise 0 dondurur.
			counter++;						// isspace() fonksiyonu ctype kutuphanesinde bulunur.
	}

	return counter;
}

int main() {

	FILE* f = fopen("text.txt", "r");		// "text" adinda dosya onceden olusturulmus olmalidir.

	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
		return 1;
	}

	int count = get_words(f);

	printf("Dosyadaki kelime sayisi : %d", count+1);

	fclose(f);
}


