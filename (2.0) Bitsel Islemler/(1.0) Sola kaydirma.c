#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(unsigned int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"<<" BITSEL SOLA KAYDIRMA OPERATORU" --------------------------
	
	//    "operand1 << operand2" seklindedir.     
	//    Besleme sagdandir ve besleme daima "0" sayisi ile         

	/*
	unsigned int ival = 15;
	pb(ival);          // 0000  0000  0000  0000  0000  0000  0000  1111
	pb(ival << 1);     // 0000  0000  0000  0000  0000  0000  0001  1110
	pb(ival << 2);     // 0000  0000  0000  0000  0000  0000  0011  1100
	pb(ival << 27);
	*/

	//--------------------------------------------------------------------------------------

	// Bitsel sola kaydirma operatorlerinde sayimizin degeri ornegin 1 olsun.
	// Biz eger sayimizi 1 kez sola kaydirirsak sayimizin yeni degeri 1 * 2^n  olacaktir.
	// n : kaydirma sayisi olarak tanimlanir.

	/*
	unsigned int ival = 1;
	pb(ival);          // 0000  0000  0000  0000  0000  0000  0000  0001
	pb(ival << 1);     // 0000  0000  0000  0000  0000  0000  0000  0010        1 * 2^1 = 2
	pb(ival << 2);     // 0000  0000  0000  0000  0000  0000  0000  0100        1 * 2^2 = 4
	pb(ival << 3);     // 0000  0000  0000  0000  0000  0000  0000  1000        1 * 2^3 = 8
	*/


	/*
	unsigned int ival = 10;
	pb(ival);          // 0000  0000  0000  0000  0000  0000  0000  1010
	pb(ival << 1);     // 0000  0000  0000  0000  0000  0000  0001  0100        10 * 2^1 = 20
	pb(ival << 2);     // 0000  0000  0000  0000  0000  0000  0010  1000        10 * 2^2 = 40
	pb(ival << 3);     // 0000  0000  0000  0000  0000  0000  0101  0000        10 * 2^3 = 80
	*/


	/*
	unsigned int ival = 10;
	pb(ival);                  // 0000  0000  0000  0000  0000  0000  0000  1010
	pb(ival << 1);             // 0000  0000  0000  0000  0000  0000  0001  0100        10 * 2^1 = 20
	*/
}


/*
Unsigned int 4 byte oldugu icin 32 bit olarak yazdik.
Eger biz turumuzu "unsigned int" sectiysek verecegimiz sayi negatif olamaz.
Birde bu turun toplam bit sayisindan fazla olamaz.En fazla 31 kez kaydirabiliriz.
*/
