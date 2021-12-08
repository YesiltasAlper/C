#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

size_t strlen1(const char* p);
size_t strlen2(const char* p);
size_t strlen3(const char* p);
size_t strlen4(const char* p);

int main() {

	size_t length1 = strlen4("alper");
	size_t length2 = strlen4("alperr");
	size_t length3 = strlen4("alperrr");
	size_t length4 = strlen4("alperrrr");

	printf("length1 : %d\n", length1);
	printf("length2 : %d\n", length2);
	printf("length3 : %d\n", length3);
	printf("length4 : %d\n", length4);
}

size_t strlen1(const char* p) {

	size_t cnt = 0;

	for (int i = 0; *(p + i) != '\0'; i++) {
		cnt++;
	}

	return cnt;
}

size_t strlen2(const char* p) {

	size_t cnt = 0;

	for (int i = 0; p[i] != '\0'; i++) {
		cnt++;
	}

	return cnt;
}

size_t strlen3(const char* p) {

	size_t cnt = 0;


	while (p[cnt] != '\0') {

		cnt++;
	}

	return cnt;

}

size_t strlen4(const char* p) {

	const char* ps = p;

	while (*p != '\0') {

		++p;
	}

	return p - ps;
}
