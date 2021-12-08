#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char cumle[100];
	printf("Bir cumle giriniz : ");
	gets_s(cumle,100);

	for (int i = 0; i < strlen(cumle); i++) {

		for (int j = 0; j <= i; j++) {

			printf("%c", cumle[j]);
		}
		printf("\n");
	}
}

