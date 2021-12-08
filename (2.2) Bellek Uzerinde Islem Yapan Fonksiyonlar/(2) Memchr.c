#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	32

/*
memchr ==> Bir bellek blogunda bir karakter arar.								void* memchr(const void*pd,int ch,size_t nbytes);		    Prototip bildirim

Ilk parametre arama yapilacak olan bellegin adresidir.
Ikinci parametre aranacak karakterdir.
Ucuncu parametre ise kac byte boyunca aramanin yapilacagidir.

Karakteri bulmasi durumunda buldugu karakterin adresini dondurur.Bulamamasi durumunda NULL pointer dondurur.
*/


int main() {

	/*
	char str[SIZE] = "bugun nasilsin umarim iyisindir";
	char* ps = memchr(str, 'a', 32);										
																											
	if (ps)
		printf("Aranan karakter bellek blogunda bulundu ve en bastan %d indisli...", ps - str);
	else
		printf("Aranan karakter bulunamadi...");

	// str adresinden baslayarak (dizinin baslangic adresi) 'a' karakterini 32 byte boyunca (dizinin tamami) arar.
	*/



	/*
	char str[SIZE] = "bugun nasilsin umarim iyisindir";
	char* ps = memchr((str + 13), 'u', (SIZE - 13));

	if (ps)
		printf("Aranan karakter bellek blogunda bulundu ve en bastan %d indisli...", ps - str);
	else
		printf("Aranan karakter bulunamadi...");

	// (str+13) adresinden baslayarak 'u' karakterini 19 byte boyunca (dizinin sonuna kadar) arar.
	*/



	/*
	char str[SIZE] = "bugun nasilsin umarim iyisindir";
	char* ps = memchr((str + 24), 's', 2);

	if (ps)
		printf("Aranan karakter bellek blogunda bulundu ve en bastan %d indisli...", ps - str);
	else
		printf("Aranan karakter bulunamadi...");

	// (str+24) adresinden baslayarak 's' karakterini 2 byte boyunca arar.
	*/
}


