#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

// strcat fonksiyonu baslangic adresini aldigi degiskeni istenilen degiskenin son adresinden itibaren kopyalar.

// 2 karakter dizisini birlestirir.		

// strcpy(string1,string2); seklindedir.

// char* strcat(char*dest,const char source*); Prototip bildirim.

// dest = "alper";	source = "yesiltas";	strcat sonrasi -->> dest = "alperyesiltas";


int main() {

	/*
	char S1[SIZE] = "mekatronik";
	char S2[SIZE] = "muhendisi";

	printf("*****Before*****\n");

	puts(S1);
	puts(S2);

	strcat(S1, S2);

	printf("*****After*****\n");

	puts(S1);
	puts(S2);
	*/


	/*
	char S1[SIZE] = "mekatronik";
	char S2[SIZE] = "muhendisi";

	printf("*****Before*****\n");

	puts(S1);
	puts(S2);

	strcat((strcat(S1, S2)),"yesiltas");

	printf("*****After*****\n");

	puts(S1);
	puts(S2);
	*/

}
