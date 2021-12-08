#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"|" BITSEL VEYA OPERATORU" --------------------------

	//      "operand1 | operand2" seklindedir.    

	//      0 | 0 = 0                1 | 0 = 1               0 | 1 = 1              1 | 1 = 1


	/*
	int x = 12;
	int y = 23;
	pb(x);              //   0000  0000  0000  0000  0000  0000  0000  1100             Sayi = 12
	pb(y);              //   0000  0000  0000  0000  0000  0000  0001  0111             Sayi = 23
	pb(x | y);          //   0000  0000  0000  0000  0000  0000  0001  1111             Sayi = 31 
	*/


	/*
	// DIKKAT  "|" BITSEL VEYA OPERATORU" ile karistirilmamasi gereken operator "||" LOJIK VEYA OPERATORU" dur.

	int x = -4;
	int y = -9;
	printf("LOJIK VEYA SONUCU = %d", x || y);

	// Cunku "0" sayisi girilmedigi surece tum sayilar lojik "1" dir. Yukaridaki islemde ayni anda
	// x = 0    ve     y = 0 olmadigi surece ekran goruntusu "1" olacaktir.
	*/
}
