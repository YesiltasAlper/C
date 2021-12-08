#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* f1(char* dest, const char* source);
char* f2(char* dest, const char* source);
char* f3(char* dest, const char* source);


int main() {

	char s1[25] = "alper";
	char s2[25] = "yesiltas";

	f1(s1, s2);
	puts(s1);

	// f2(s1, s2);
	// puts(s1);

	// f3(s1, s2);
	// puts(s1);
}


char* f1(char* dest, const char* source) {

	size_t i, j;

	for (i = 0; dest[i] != '\0'; ++i) {
	}

	for (j = 0; source[j] != '\0'; ++j) {
		dest[i + j] = source[j];
	}

	dest[i + j] = '\0';

	return dest;
}


char* f2(char* dest, const char* source) {

	char* p = dest;

	while (*p)	// ali \0
		++p;

	while (*p++ = *source++)
		;

	return p;
}

char* f3(char* dest, const char* source) {

	strcpy(dest + strlen(dest), source);

	return dest;
}
