#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_characters_in_file(FILE* my_file, char* small_count, char* big_count, int* total_small, int* total_big) {

	int ch;

	while ((ch = fgetc(my_file)) != EOF) {

		for (int i = 0; i < 26; i++) {

			if ((ch == i + 65) && isalpha(ch) != 0) {
				(big_count[i])++;
				(*total_big)++;
			}

			if ((ch == i + 97) && isalpha(ch) != 0) {
				(small_count[i])++;
				(*total_small)++;
			}

		}
	}
}

// isalpha() fonksiyonu ch'nin alphanumeric karakter olup olmadigini kontrol eder.Ctype kutuphanesinde bulunur.
// Alphanumeric karakter,Rakamlar, Kucuk Harfler ve Buyuk Harfler kumesidir.

int main() {

	FILE* f = fopen("text.txt", "r");		// "text" adinda dosya onceden olusturulmus olmalidir.

	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
		return 1;
	}

	int total_small_character = 0;
	int total_big_character = 0;
	char small_character_count[26] = { 0 };
	char big_character_count[26] = { 0 };


	find_characters_in_file(f, small_character_count, big_character_count, &total_small_character, &total_big_character);

	printf("*****KUCUK KARAKTERLER*****\n\n");

	for (int i = 0; i < 26; i++)
		if (small_character_count[i] > 0)
			printf("%c ==>> %d tane\n", i + 97, small_character_count[i]);

	printf("Toplam kucuk karakter sayisi : %d\n", total_small_character);

	printf("\n*****BUYUK KARAKTERLER*****\n\n");

	for (int i = 0; i < 26; i++)
		if (big_character_count[i] > 0)
			printf("%c ==>> %d tane\n", i + 65, big_character_count[i]);

	printf("Toplam buyuk karakter sayisi : %d\n", total_big_character);

	fclose(f);
}
