#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3 farkli sekilde kullanimi vardir ;

	1-	int *const ptr;			// ptr is a constant pointer to int				Burada "*" dan sonra kullanilmis
	2-	int const *ptr;			// ptr is a pointer to constant int				Burada "*" dan once kullanilmis		
	3-	int const *const ptr													Burada her ikisinde de kullanilmis

	// ONEMLI ==>

	const int x = 10;		kodu ile 		int const x = 10;		kodu aynidir yani 2 farkli sekilde tanimlanabilir. Yer degistirme ozelligi vardir. Buna gore ;

	1. madde ==>	 --------------				Farkli sekilde tanimlanamaz.
	2. madde ==>	const int * ptr;			Seklinde de tanimlanabilir.
	3. madde ==>	const int *const ptr		Seklinde de tanimlanabilir.
*/


int main() {

	// ------------ 1 - [int *const ptr] yapisi ------------
	
	// Bu yapida const keywordu ptr'dan once geldigi icin ptr pointerinin tuttugu adres degistirilemez.



	/*
	int x = 20 , y = 30;				// Burada syntax hatasi vardir.Sebebi ise "*" dan sonra const ptr yazildigi icin sabit bir pointerdir.
	int* const ptr = &x;				// Tuttugu adres degistirilemez.Once x'in adresini tutup sonra y'nin adresini tutamaz.	
	ptr = &y;							
	*/

	/*
	int x = 20, y = 40;						//	Bu kodda ptr pointer degiskeninin tuttugu adres degistirilmemistir.Hep x'in adresini tutmustur.
	int* const ptr = &x;					// Ancak ptr pointer degiskeninin gosterdigi deger degistirilmis.Syntax hatasi yoktur.
	printf("*ptr before : %d\n", *ptr);
	*ptr = 30;
	printf("*ptr after  : %d\n", *ptr);
	*/



	// ------------ 2-	[int const *ptr] veya [const int * ptr] yapisi ------------

	// Bu yapida const keywordu *ptr'dan once geldigi icin ptr pointerinin isaret ettigi yerdeki deger degistirilemez.



	/*
	int x = 20, y = 30;						// Syntax hatasidir.Cunku ptr degiskeni sadece x'i gosterebilir.
	int const* ptr = &x;
	*ptr = y;
	*/

	/*
	int x = 20, y = 30;						
	int const* ptr = &x;
	printf("ptr before (x'in adresi) : %p\n", ptr);		// Bu kodda syntax hatasi yoktur.Cunku const ifadesi ile sadece ptr pointer
	ptr = &y;											// degiskeninin gosterdigi yer const edilmistir.Adres const edilmemistir.
	printf("ptr after  (y'nin adresi) : %p\n", ptr);
	*/



	// ------------ 3-	[int const *const ptr] veya [const int *const ptr] yapisi ------------

	// Bu yapida const keywordu hem *ptr'dan hem de ptr'dan once geldigi icin hem gosterdigi yer hem de tuttugu adres degistirilemez.



	/*
	int x = 20, y = 30;						// Syntax hatasidir.Cunku ptr degiskeni sadece x'i gosterebilir.
	int const *const ptr = &x;
	*ptr = y;
	*/

	/*
	int x = 20, y = 30;
	int const *const ptr = &x;
	printf("ptr before (x'in adresi) : %p\n", ptr);		// Syntax hatasidir.Cunku ptr degiskeni sadece x'in adresini tutabilir.
	ptr = &y;											
	printf("ptr after  (y'nin adresi) : %p\n", ptr);
	*/

}

