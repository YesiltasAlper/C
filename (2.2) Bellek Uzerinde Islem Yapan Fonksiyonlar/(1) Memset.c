#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
//  memset ==> Bir bellek blogunu set eder.									    	void* memset(void* str,int c,size_t nbytes);	Prototip bildirim.

Geri donus degeri void* dir ve aldigi yazinin adresiyle geri doner.
Ilk parametresi set edecegi bellek blogunun adresidir.
Turden bagimsiz oldugu icin int-char-double... her turden bellek blogu set edilebilir.
Ikinci parametresi ise her bellek bloguna yazilacak tam sayi degeridir.Bellek blogu farkli degerlerle set edilemez.
Son parametresi kac byte set edilecegidir.
*/


int main() {

	/*
	char str[100] = "merhaba bugun nasilsin umarim iyisindir";

	memset(str, '!', 12);		// str'nin baslangic adresinden baslayarak 12 byte boyunca '!' ile set eder.
	puts(str);

	memset(str + 12, '!', 5);	// (str+12) adresinden baslayarak 5 byte boyunca '!' ile set eder.
	puts(str);

	*/



	/*
	int a[20];

	for (int i = 0; i < 10; i++)
		printf("a[%d] = %d\n",i, a[i]);		

	memset(a, 0, 10*sizeof(int));		// Dizinin baslangic adresinden baslayarak (10 * sizeof(int) = 40 byte) 
										// boyunca (dizinin tamami) 0 ile set et.Clear etme islemi.

	printf("*****************\n");

	for (int i = 0; i < 10; i++)
		printf("a[%d] = %d\n", i, a[i]);

	*/



	/*
	char array[] = "nasilsin";

	printf("array = %s\n", array);

	memset((array + 2), 'A', (sizeof(array) - 4));	

	printf("array = %s\n", array);
	*/
}

