#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Prototip bildirim : int puts(const char* str);
// Prototip bildirim : char gets(char* str);


void puts1(const char* s);
void puts2(const char* s);

int main() {

	puts1("alper");
	puts2("yesiltas");
}


void puts1(const char* s) {

	while (*s != '\0') {
		putchar(*s);
		s++;
	}
	putchar('\n');
}

void puts2(const char* s) {

	for (int i = 0; s[i] != '\0'; i++)
		putchar(*(s + i));
	putchar('\n');
}




