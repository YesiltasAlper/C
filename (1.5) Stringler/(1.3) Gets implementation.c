#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Prototip bildirim : int puts(const char* str);
// Prototip bildirim : char gets(char* str);

char* kaldirilan_gets(char* s);
char* visual_gets_s(char* s, int n);

int main() {

	/*
	char s1[20];
	printf("Name : ");
	kaldirilan_gets(s1);
	puts(s1);
	*/


	/*
	char s2[15];
	printf("Name : ");
	visual_gets_s(s2, 40);
	puts(s2);
	*/
}


char* kaldirilan_gets(char* s) {

	char ch;
	char* temp = s;

	while ((ch = getchar()) != '\n') {
		*s = ch;
		s++;
	}
	*s = '\0';
	return temp;
}


char* visual_gets_s(char* s, int n) {

	char ch;
	char* temp = s;
	int i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n) {
			s[i] = ch;
			s++;
		}
	}
	s[i] = '\0';
	return temp;
}

