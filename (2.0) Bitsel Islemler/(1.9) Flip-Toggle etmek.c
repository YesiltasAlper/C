#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"FLIP A BIT / TOGGLE A BIT" --------------------------


	// Bir tam sayinin bir bitini flip etme veya toggle etme islemi es anlamlidir ve bir tam sayinin belli bir bitini degistirme islemi olarak tanimlanir.

	// Ornek olarak bir tam sayinin 3. biti = 1 ise "0" yapar veya 3. biti = 0 ise "1" yapar.


	/*
	1000 1001           Bu ornek bir sayi ve sayinin 3. biti Flip veya Toggle edilmek istensin

	0000 0001           Bu sayi ise "Bitmask" adinda bir sayidir.1 biti haric tum bitleri sifirdir.Bu sayiya "Bitmask" denir.

	Daha sonra sayinin kacinci biti Toggle edilmek isteniyorsa (3) o kadar bitmask sayisinin bitleri SOLA kaydirilir

	0000 1000           Biti 3 kez sola kaydirilmis yeni bitmask

	Daha sonra biti kaydirilmis bitmask sayisini,toggle edilmek istenen sayi ile "BITSEL OZEL VEYA [XOR]  "^" islemi yapilir

	XOR  "^"     0 ^ 0 = 0          0 ^ 1 = 1           1 ^ 0 = 1               1 ^ 1 = 0		XOR Dogruluk Tablosu

	1000 1001 ^ 0000 1000

	1000 0001           3.biti Toggle edildi.

	*/


	/*
	int x = 137;        // 1000  1001      
	pb(x);
	x ^= (1 << 3);      // 0000  0001 = Bitmask sayisidir. 1 ise bu sayinin decimal karsiligidir.          x ^= (1 << 3) ifadesi    x  =  x ^ (1 << 3)   islemi ile ayni anlamdadir.
	printf("\n");
	pb(x);              // 1000  0001	-->> 129
	*/


	/*
	int x = 129;        // 1000  0001     
	pb(x);
	x ^= (1 << 3);      // 0000  0001 = Bitmask sayisidir. 1 ise bu sayinin decimal karsiligidir.           x ^= (1 << 3) ifadesi    x  =  x ^ (1 << 3)   islemi ile ayni anlamdadir.
	printf("\n");
	pb(x);              // 1000  1001	-->> 137   
	*/
}
