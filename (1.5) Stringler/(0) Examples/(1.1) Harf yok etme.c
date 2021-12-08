#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char array[40];
	char eleme = NULL;
	char* p = NULL;

	printf("Lutfen bir karakter dizisi giriniz : ");
	gets_s(array,40);
	printf("Lutfen elemek istediginiz harfi giriniz : ");
	scanf("%c", &eleme);

	for (p = array; *p != '\0'; p++) {

		if (*p == eleme)
			strcpy(p, p + 1);
	}

	printf("Son hali : %s", array);
}
