#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


char* strpbrk1(const char* p1, const char* p2);

int main() {

	char s1[20] = "busrayilmaz";
	char s2[] = "jk";

	char* presult = strpbrk1(s1, s2);

	if (presult == NULL)
		printf("Aranan karakter bulunamadi...");
	else
		printf("Aranan karakter bulundu...");
}

char* strpbrk1(const char* p1, const char* p2) {
	while (*p1 != '\0')
		if (strchr(p2, *p1++))
			return (char*)p1;

	return NULL;
}
