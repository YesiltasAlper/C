#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	20

void sort(char* s);
int isanagram(char* s1, char* s2);

int main() {

	char* s1[SIZE];
	char* s2[SIZE];

	printf("Kelime giriniz : ");
	gets(s1);
	printf("Diger kelimeyi giriniz :");
	gets(s2);

	int result = isanagram(s1, s2);

	if (result)
		printf("enagram...\n");
	else
		printf("not enagram...\n");
}

void sort(char* s) {

	int len = strlen(s);
	char temp;

	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (s[i] < s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
}

int isanagram(char* s1, char* s2) {

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 != len2)
		return 0;

	sort(s1);
	sort(s2);

	for (int i = 0; i < len1; i++)
		if (s1[i] != s2[i])
			return 0;

	return 1;

}
