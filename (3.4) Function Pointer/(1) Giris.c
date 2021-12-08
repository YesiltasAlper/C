#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


/*
void foo(int x, double y) {

}

int main() {

	// Function pointerlar fonksiyonlarin adresini tutan pointerlardir.
	// Fonksiyonlarinda bir adresi vardir ve bir fonksiyonun adresi de o fonksiyonun cagrilmasini saglayan bilgileri icerir.

	printf("%p\n", &foo);		
}
*/



/*
void foo(int x, double y) {

}

int main() {

	printf("&memmove : %p\n", &memmove);		// Standart fonksiyonlarin da bir adresi vardir.
	printf("&strcpy  : %p\n", &strcpy);			// Standart fonksiyonlarin da bir adresi vardir.
}
*/



/*
void foo(int x, double y) {

}

int main() {

	printf("%p\n",&foo);
	printf("%p\n",foo);

	// Array to Pointer Convertion'da dizinin adi pointer degiskene atandiginda pointer degisken dizinin ilk elemaninin ve dizinin adresini tutuyordu.
	// Benzer bi yapi burada da var buna da function to pointer convertion denebilir.
	// '&' operatorunu kullanmadigimizda da bu function to pointer olabiliyor.Her ikisi de dogru olmakla birlikte '&foo' daha cok kullanilir.
}
*/
