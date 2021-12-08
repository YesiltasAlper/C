#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
	isAtBegin() ve isAtEnd() adinda iki fonksiyon yazilacaktir.
	Ornegin "batman" stringi var ve "man" stringi aratilacaktir.

	Bu durumda isAtBegin fonksiyonuna cagri yapinca basta olmadigi icin 0 degeri dondurecektir.
	Ancak isAtEnd fonksiyonuna cagri yapinca sonda oldugu icin 1 degeri dondurecek.
*/


// --------------------COZUM YOLU - 1 --------------------------


/*
int isAtBegin(const char* string1, const char* string2) {

	if (strlen(string2) > strlen(string1))
		return 0;

	int sayac = 0;

	for (int i = 0; i < strlen(string2); i++) {
		if (*(string1 + i) == *(string2 + i)) {
			sayac++;
		}
	}

	if (sayac == strlen(string2))
		return 1;
	else
		return 0;
}

int isAtEnd(const char* string1, const char* string2) {

	if (strlen(string2) > strlen(string1))
		return 0;

	int sayac = 0;

	int fark = strlen(string1) - strlen(string2);

	for (int i = 0; i < strlen(string2); i++) {
		if (*(string1 + fark + i) == *(string2 + i)) {
			sayac++;
		}
	}

	if (sayac == strlen(string2))
		return 1;
	else
		return 0;
}

int main() {

	int result_begin = 0;
	int result_end = 0;

	result_begin = isAtBegin("spider", "spi");

	if (result_begin)
		printf("It is at the begin...\n");
	else
		printf("It is not at the begin...\n");

	result_end = isAtEnd("spider", "er");

	if (result_end)
		printf("It is at the end...\n");
	else
		printf("It is not at the end...\n");
}
*/



// --------------------COZUM YOLU - 2 --------------------------



/*
int isAtBegin(const char* s1, const char* s2) {
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len2 > len1)
		return 0;
	if (strncmp(s1, s2, len2) == 0)	
		return 1;					

	return 0;
}

int isAtEnd(const char* s1, const char* s2) {
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len2 > len1)
		return 0;
	if (strcmp(s1+len1-len2, s2) == 0)
		return 1;

	return 0;
}

int main() {
	int result_begin = 0;
	int result_end = 0;

	result_begin = isAtBegin("spider", "spi");

	if (result_begin)
		printf("It is at the begin...\n");
	else
		printf("It is not at the begin...\n");

	result_end = isAtEnd("spider", "er");

	if (result_end)
		printf("It is at the end...\n");
	else
		printf("It is not at the end...\n");
}
*/
