#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"~" BITSEL DEGIL OPERATORU" --------------------------

	//      "operand1 ~ operand2" seklindedir.

	//      x =  1101 0010
	//      ~x = 0010 1101


	/*
	int x = 15;
	pb(x);              //   0000  0000  0000  0000  0000  0000  0000  1111     Sayi = 15
	pb(~x);             //   1111  1111  1111  1111  1111  1111  1111  0000     Sayi = -16  
	pb(~~x);            //   0000  0000  0000  0000  0000  0000  0000  1111     Sayi = 15         
	*/


	// DIKKAT  "~" BITSEL DEGIL OPERATORU" ile karistirilmamasi gereken operator "!" LOJIK DEGIL OPERATORU" dur.

	/*
	int x = 5;
	pb(x);                      // 0000  0000  0000  0000  0000  0000  0000  0101
	printf("~x : %d\n", ~x);
	printf("!x : %d\n", !x);
	
	// Cunku "0" sayisi girilmedigi surece tum sayilar lojik "1" dir. Yukaridaki islemde ayni anda
	// x = 5; oldugu icin x lojik "1" dir.
	// ~x bitsel degil			  1111  1111  1111  1111  1111  1111  1111  1010		 = -6
	// !x lojik degil			  x = 1		!x = 0
	*/
}
