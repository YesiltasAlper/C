#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void get_words(FILE* my_file, int* counter) {

	int ch;

	if ((ch = fgetc(my_file)) == EOF) {
		printf("Dosya bos...");
	}

	else {

		while ((ch = fgetc(my_file)) != EOF) {

			if (ch == '\n')
				(*counter)++;
		}

		(*counter)++;
	}
}

int main() {

	FILE* f = fopen("text.txt", "r");		// "text" adinda dosya onceden olusturulmus olmalidir.

	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
		return 1;
	}

	int counter = 0;

	get_words(f, &counter);

	printf("Dosyadaki satir sayisi : %d", counter);

	fclose(f);
}


