#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	int k = 0, i, space = 0;
	char cumle[100];

	printf("Bir cumle giriniz : ");
	gets_s(cumle,100);

	for (i = 0; i < strlen(cumle); i++) {

		printf("%c", cumle[i]);
		k++;
		if (cumle[i] == 32) {
			++space;
		}

	}

	printf("\ncumleniz toplamda %d harftir. ", k);
	printf("\n");
	printf("cumlenizde %d tane bosluk karakteri vardir.", space);
}
