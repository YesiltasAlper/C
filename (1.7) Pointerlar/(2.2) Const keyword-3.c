#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ORNEK -1 ======>>>


/*
void f(int*const ptr) {

	int i = 15;
	ptr = &i;
}


int main() {

	int x = 20;
	f(&x);

	// Syntax hatasidir.Cunku ptr degiskeni sadece x'in adresini tutabilir.
}
*/


// ORNEK -2 ======>>>


/*
void f(const int* ptr) {

	int i = 15;
	ptr = &i;
}


int main() {

	int x = 20;
	f(&x);

	// Syntax hatasi yoktur.Cunku ptr degiskeni sadece x'in degerini gosterebilir.
	// ptr degiskenin tuttugu adres degistirebilir.
}
*/




// DIZILERLE KULLANIMINA ORNEK ==>


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi yoktur.
	int* ptr = a;
	printf("*(ptr + 2) before : %d\n", *(ptr + 2));
	*(ptr + 2) = 20;
	printf("*(ptr + 2) after : %d\n", *(ptr + 2));
}
*/


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi yoktur.Cunku ptr degiskeninin
	int* const ptr = a;					// tuttugu adres degistirilmemistir.
	*(ptr + 2) = 20;
}
*/


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi vardir.Cunku dizi degerleri
	int const* ptr = a;					// degistirilemez.
	*(ptr + 2) = 20;
}
*/


// --------------------------------------------------------------------------------


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi yoktur
	int* ptr = a;
	*(ptr + 2) = 20;
}
*/


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi yoktur.Cunku const edilen
	int const* ptr = a;					// gosterdigi degerdir adres degildir.
	ptr = a + 1;
}
*/


/*
int main() {

	int a[] = { 5,10,15,20 };			// Syntax hatasi vardir.Cunku dizinin
	int* const ptr = a;					// herhangi bir elemaninin degeri degistirilemez.
	ptr = a + 1;
}
*/


