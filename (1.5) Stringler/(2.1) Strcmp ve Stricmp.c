#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define		SIZE	100

// int* strcmp(const char*str1,const char*str2);	Prototip bildirim.		-->> Buyuk kucuk harf duyarliligi vardir.
// int* stricmp(const char*str1,const char*str2);	Prototip bildirim.		-->> Buyuk kucuk harf duyarliligi yoktur onemsenmez.


//  strcmp fonksiyonu bir string ile diger bir stringi kiyaslamamizi saglar.Ornegin ABC ve abc stringleri olsun.
//	Bu kiyaslamayi ilk harften baslayarak 'A' ile 'a' yi kiyasliyor sonra bunlar esitse 'B' ile 'b' yi kiyasliyor esitse 'C' ile 'c' yi kiyaslar.
//  Tabi burada daha ilk bastan esitlik olmadigi icin ilkinde hangisi buyuk karar verir.
//	Birinci string > ikinci string ise [1], birinci string = ikinci string ise [0], birinci string < ikinci string ise [-1] geri dondurur.

//	Buyukluk kucukluk karsilastirilmasi ise 'A' nin ASCII kodu 65 ve 'a' nin 97 oldugu icin "abc" stringi "ABC" stringinden daha buyuk oldugu icin [-1] donecektir.
//	Tek karakter bile olsa "ABC" ile 'a' yi kiyaslasak yine ayni [-1] dondurur.Uzunluklarinin esit olmasina gerek yoktur.Baz alinan sey ASCII karakter kodudur.


int main() {

	/*
	char s1[SIZE] = "abc";
	char s2[SIZE] = "ABC";


	int result = strcmp(s1, s2);

	if (result > 0)
		printf("1. yazi daha buyuk...");

	else if (result < 0)
		printf("Ikinci yazi daha buyuk...");
	else
		printf("Yazilar esittir...");
	*/


	/*
	char s1[SIZE] = "abc";
	char s2[SIZE] = "ABC";

	int result = _stricmp(s1, s2);

	if (result > 0)
		printf("1. yazi daha buyuk...");

	else if (result < 0)
		printf("Ikinci yazi daha buyuk...");
	else
		printf("Yazilar esittir...");

	// Burada yani stricmp yazilarin buyukluk kucuklugune bakmiyor kucuk buyuk harf duyarliligi yoktur.
	// Eger yazilar ayniysa harfler farketmeksizin o zaman burada esit degerinin geri donduruyor.
	// Diger her seyi -1 0 1 dondurmesi falan aynidir.
	*/


	/*
	char s1[SIZE] = "abcd";
	char s2[SIZE] = "ABCs";

	int result = _stricmp(s1, s2);

	if (result > 0)
		printf("1. yazi daha buyuk...");

	else if (result < 0)
		printf("Ikinci yazi daha buyuk...");
	else
		printf("Yazilar esittir...");
	*/
}





