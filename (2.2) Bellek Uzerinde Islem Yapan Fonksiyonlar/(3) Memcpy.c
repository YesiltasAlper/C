#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE1	32
#define		SIZE2	6

/*
memcpy ==> Bir bellek blogunu bir yerden baska bir yere kopyaliyor.					void* memcpy(void* pdest, const void* psource, size_t nbytes);	  Prototip bildirim

Ilk parametre hedef adrestir kopyalama yapilacak degiskenin adresidir (destination)
Ikinci parametre kopyalanmak istenen degiskenin adrestir (source).
Ucuncu parametre ise kac byte source'dan kopyalama isleminin yapilacagidir.
*/


int main() {

	/*
	char source[SIZE1] = "bugun nasilsin umarim iyisindir";
	char dest[SIZE1];

	memcpy(dest, source, SIZE1);
	puts(source);
	puts(dest);

	// source degiskeninin baslangic adresinden itibaren 32 byte'i (tumu)
	// dest degiskenin baslangic adresinden itibaren baslanarak dest degiskenine kopyalanir.
	*/



	/*
	char source[SIZE1] = "bugun nasilsin umarim iyisindir";
	char dest[SIZE1] = "bugun nas";

	memcpy(dest+9, source+9, (SIZE1 - 20));
	puts(source);
	puts(dest);

	// source degiskeninin (source+9) adresinden itibaren (SIZE1 -20) = 12 byte'i
	// dest degiskenin (dest+9) adresinden itibaren baslanarak dest degiskenine kopyalanir.
	*/



	/*
	int source[SIZE2] = { 5,10,15,20,25,30 };
	int dest[SIZE2];

	memcpy(dest, source, SIZE2 * sizeof(int));

	for (int i = 0; i < SIZE2; i++)
		printf("source[%d] = %d\n", i, *(source + i));

	printf("**************\n");

	for (int i = 0; i < SIZE2; i++)
		printf("dest[%d] = %d\n", i, *(dest + i));

	// source degiskeninin baslangic adresinden itibaren 24 byte'i (tumu)
	// dest degiskenin baslangic adresinden itibaren baslanarak dest degiskenine kopyalanir.
	*/



	/*
	int source[SIZE2] = { 5,10,15,20,25,30 };
	int dest[SIZE2] = { 5,10 };

	memcpy((dest+2), (source+2), (SIZE2-2) * sizeof(int));

	for (int i = 0; i < SIZE2; i++)
		printf("source[%d] = %d\n", i, *(source + i));

	printf("**************\n");

	for (int i = 0; i < SIZE2; i++)
		printf("dest[%d] = %d\n", i, *(dest + i));

	// source degiskeninin (source+2) adresinden itibaren (SIZE2 -2)*(sizeof(int)) = 16 byte'i
	// dest degiskenin (dest+2) adresinden itibaren baslanarak dest degiskenine kopyalanir.
	*/
}


