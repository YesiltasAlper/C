#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char cumle[150];
	int i, j, sayac = 0;

	printf("Cumle giriniz : ");
	gets_s(cumle,150);

	printf("\n\n\n");

	for (i = 0; cumle[i]; i++) {

		printf("%c", cumle[i]);

		if (cumle[i] == 32) {

			printf("\n");
			sayac++;

			for (j = 0; j < sayac; j++) {
				printf("\t");
			}

		}

	}

}
