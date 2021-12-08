#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char array[100];
	char* pointer;

	printf("Lutfen bir karakter dizisi giriniz : ");
	gets_s(array,100);

	for (pointer = array; *pointer != '\0'; pointer++) {

	}
	printf("Dizimiz : %s ve %d karakterdir.", array, pointer - array);
}
