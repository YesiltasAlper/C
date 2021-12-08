#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	#error komutu on islemci icin bir hata oldugunda alt konsolda bizim kendi olusturdugumuz 
	hata mesajini vermemizi saglar ve compiling'e gecmez cunku hata vardir.
*/


/*
#define		VERSION		10

int main() {

#if VERSION < 10
	printf("No error...");
#else
#error	ERROR

#endif // VERSION < 10

}
*/


// Pragma ise standart degildir.Ornegin A derleyicisi icin pragma'nin gorevi farkli B derleyicisi icin farkli.
// Her derleyici farkli ihtiyaclarina gore #pragma komutunu kullanabilir.
// On islemciye de boyle bir esneklik birakilmistir.

// https://docs.microsoft.com/tr-tr/cpp/preprocessor/pragma-directives-and-the-pragma-keyword?view=msvc-160

// Visual Studio icin pragmalar link de mevcuttur


