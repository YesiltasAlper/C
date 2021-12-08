#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

// strcpy fonksiyonu adresini aldigi bir karakteri diger bir degiskenin adresine kopyalar.		

// strcpy(string1,string2); seklindedir.

// char* strcpy(char*dest,const char source*); Prototip bildirim.

// Source = kaynak  ve  dest = destination = hedef. Burada birisinin const digerinin const olmama sebebi
// ornegin alper yazisini bir yere kopyalayacaksak sonucta alper yazisi (source) degismez ama digeri (dest) degisir.

int main() {

	/*
	char s1[SIZE] = "tugce";
	char s2[SIZE] = "berna";

	printf("*****Before*****\n");

	puts(s1);
	puts(s2);

	strcpy(s1, s2);		// s2 s1'e kopyalanmistir.

	printf("*****After*****\n");

	puts(s1);
	puts(s2);
	*/
	
	
	/*
	char s1[SIZE] = "tugce";
	char s2[SIZE] = "berna";
	char s3[SIZE] = "fatma";

	printf("*****Before*****\n");

	puts(s1);
	puts(s2);
	puts(s3);

	strcpy(s2,strcpy(s1,"zeynep"));  

	printf("*****After*****\n");

	puts(s1);
	puts(s2);
	puts(s3);
	*/
}
