#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

// strchr fonksiyonu bir string in icinde bir karakter aramaya yarar.Ornegin "bugun hava cok guzel" string i icinde 'e' harfini aratmak istiyorsak bunu kullaniriz.
// char* strchr(const char*str,int ch); Prototip bildirim.
// Ikinci parametre, birinci parametrede soldan baslanarak aranacaktir.
// Eger varsa aramayi bitirir ve neredeyse oranin adresini dondurur.Yoksa NULL pointer dondurur.

// strrchr fonksiyonu strchr ile ayni isi yapar fakat bu islemi tersten baslayarak yapar.
// char* strrchr(const char*str,int ch); Prototip bildirim.
// Ikinci parametre, birinci parametrede sagdan baslanarak aranacaktir.
// Eger varsa aramayi bitirir ve neredeyse oranin adresini dondurur.Yoksa NULL pointer dondurur.


int main() {

	/*
	char str[SIZE] = "Senin adin nedir";
	char* p = strchr(str, 'N');

	if (p == NULL)
		printf("Aranan karakter bulunamadi...\n");
	else
		printf("Aranan karakter bulundu...\n");
	*/


	/*
	char str[SIZE] = "Senin adin nedir";
	char* p = strchr(str, 'e');

	if (p == NULL)
		printf("Aranan karakter bulunamadi...\n");

	else
		printf("Aradiginiz karakter var ve %d. indis",(p-str));

	// strchr kullanildigi icin soldan baslayarak saga dogru arama yapilir. 
	// "Senin" yazisinin icindeki 'e' yi bulur. Indis : 1
	*/

	
	/*
	char str[SIZE] = "Senin adin nedir";
	char* p = strrchr(str, 'e');

	if (p == NULL)
		printf("Aranan karakter bulunamadi...\n");

	else
		printf("Aradiginiz karakter var ve %d. indis", (p - str));

	// strrchr kullanildigi icin sagdan baslayarak sola dogru arama yapilir. 
	// Tersten arama yapar."nedir" yazisinin icindeki 'e' yi bulur. Indis : 12
	*/
}
