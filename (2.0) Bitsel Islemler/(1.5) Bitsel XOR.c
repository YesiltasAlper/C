#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"^" BITSEL OZEL VEYA (X-OR) OPERATORU" --------------------------

	// "^" Bu operator "math"kutuphanesindeki us almaya yarayan "pow" fonksiyonu ile karistirilmamalidir.
	// C dilinde "^" operatoru ile bitsel XOR islemi yapilir.Us almak icin ise "math.h" kutuphanesini cagirip "pow" fonksiyonu kullanilmalidir.

	//      0^0 = 0                   0^1 = 1                     1^0 = 1                      0^0 = 0

	/*
	int x = 10;
	int y = 20;
	pb(x);          //  0000  0000  0000  0000  0000  0000  0000  1010
	pb(y);          //  0000  0000  0000  0000  0000  0000  0001  0100
	pb(x ^ y);      //  0000  0000  0000  0000  0000  0000  0001  1110  
	*/
}
