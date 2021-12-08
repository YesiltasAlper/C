#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// "const" keywordu degisken isimlendirirken kullanilan bir keyworddur ve tur belirleyicilerden birisidir bu yuzden degiskenlerin onune gelir.


int main() {

	/*
	
	int x = 10;
	++x;							// 10 degeri ile initialize edilmis x degiskeni once 11 sonra 20 olur.
	x = 20;

	*/


	/*
	
	const int x = 10;				// "const" keywordu ile isimlendirilen degiskenler degistirilemezdir.Burada x degiskeni const edildigi degerden baska bir deger alamaz.Eger bir degiskenin degistirilememesini istiyorsak
	++x;							// Degistirilmesinin syntax hatasi olmasini istiyorsak o degiskenin degerini korumak istiyorsak o zaman o degiskeni "const" keywordu ile kullanmamiz gereklidir.
	x = 20;

	*/


	/*
	
	const int a[3] = { 2,10,64 };   // Syntax hatasidir. Diziyi const ettikten sonra herhangi bir dizi elemani degistirilemez.
	a[2] = 100;

	*/

	/*
	
	int n = 3;						// Syntax hatasi yoktur.x degiskeninin degeri n degiskeninin degeri ile const edilmistir.
	const int x = n;

	*/



	// ONEMLI ==>

	// const int x = 10;			// kodu ile 		int const x = 10;		kodu aynidir yani 2 farkli sekilde tanimlanabilir. Yer degistirme ozelligi vardir.

}

