#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	25

int main() {

	char name[SIZE];
	printf("Isim giriniz : ");
	scanf("%s", name);

	int len = strlen(name);

	for (int j = 0; j < (len / 2); j++) {
		char temp;

		temp = name[j];
		name[j] = name[len - 1 - j];
		name[len - 1 - j] = temp;
	}

	puts(name);
}
