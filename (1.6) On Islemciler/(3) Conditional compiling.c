#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define VERSION		10

// #undef komutu #define ile kullanilan makro sabitini siler.Ornegin 4.satirda #define VERSION 10 yaziyor
// ve 8. satirda #undef VERSION yazilirsa bu durumda 8.satirdan itibaren VERSION kullanilamaz demektir.
// 4 ile 8. satir aralarinda kullanilabilir demektir.undef undefined demektir ve tanimsiz yapar.

// ifndef ise ifdef'in tersidir.Eger tanimsiz degilse demektir (if not defined).
// Bunlar on islemci komutlaridir ve ornegin islemci pic16f877a ise su baslik dosyalari dahil edilsin 
// eger degilse diger baslik dosyalari dahil edilsin gibi kullanilabilir ve kod buna gore calisir.

int main() {
	
/*
#if VERSION > 5
	printf("VERSION : %d bu kod calisir", VERSION);
#else
	printf("VERSION : %d bu kod calisir", VERSION);
#endif // VERSION > 5
*/


/*
#if VERSION > 0 && VERSION < 5
	printf("VERSION : %d bu kod calisir", VERSION);
#elif VERSION >= 5 && VERSION < 10
	printf("VERSION : %d bu kod calisir", VERSION);
#elif VERSION >= 10 && VERSION < 15
	printf("VERSION : %d bu kod calisir", VERSION);
#endif
	printf("Nothing...");
*/


//*********************************************************************


/*
#define		PIC16F877A

#ifdef PIC16F877A
	printf("PIC16F877A is running...");
#else
	printf("PIC16F877 is running...");
#endif 
*/
}



