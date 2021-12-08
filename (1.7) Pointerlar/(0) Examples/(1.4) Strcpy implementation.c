#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* f1(char* dest, const char* source);
char* f2(char* dest, const char* source);
char* f3(char* dest, const char* source);

int main() {

	char dest[25];
	char source[25] = "alper";

	f1(dest, source);
	puts(dest);

	// f2(dest, source);
	// puts(dest);

	// f3(dest, source);
	// puts(dest);
}


char* f1(char* dest, const char* source) {

	size_t i;

	for (i = 0; source[i] != '\0'; i++) {

		dest[i] = source[i];
	}

	dest[i] = '\0';

	return dest;
}


char* f2(char* dest, const char* source) {

	const char* p = dest;

	int i = 0;

	while ((dest[i] = source[i]) != '\0')
		++i;
	return p;
}


char* f3(char* dest, const char* source) {

	int i = 0;

	while (1) {

		dest[i] = source[i];
		i++;

		if (source[i] == '\0') {
			dest[i] = '\0';
			break;
		}
	}

	return dest;
}
