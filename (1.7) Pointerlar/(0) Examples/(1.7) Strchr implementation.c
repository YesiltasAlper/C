#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* f1(const char* str, int ch);
char* f2(const char* str, int ch);
char* f3(const char* str, int ch);


int main() {

	char string[50] = { "Benim adim alper" };

	
	char* sonuc1 = f1(string, 'z');

	if (sonuc1 == NULL)
		printf("Harf yok ");
	else
		printf("Harf var ");

}


char* f1(const char* str, int ch) {

	while (*str != '\0' && *str != ch)
		str++;

	if (*str == ch)
		return (char*)str;
	else
		return NULL;
}

