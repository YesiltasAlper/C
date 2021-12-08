#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

int main() {

	char sentence[SIZE];
	printf("Cumle : ");
	gets_s(sentence,100);

	int length = strlen(sentence);

	for (int j = 0; j < length; j++) {

		if (sentence[j] >= 65 && sentence[j] <= 90) 			// Buyuk harftir

			sentence[j] = (sentence[j] + 32);					// Kucuk yapildi


		else if (sentence[j] >= 97 && sentence[j] <= 122)		// Kucuk harftir

			sentence[j] = (sentence[j] - 32);					// Buyuk yapildi

	}

	puts(sentence);
}
