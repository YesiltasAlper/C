#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"BIR TAM SAYININ BIR BITINI CLEAR ETMEK" --------------------------


	// Bir tam sayinin bir bitini clear etme islemi,o bitini "0" yapma islemidir.



	/*
	1000 ?011           Bu ornek bir sayi ve sayinin 3.biti clear edilmek istensin 3.biti 0 yapilmak istensin.

	0000 0001           Bu sayi ise "Bitmask" adinda bir sayidir.1 biti haric tum bitleri sifirdir.Bu sayiya "Bitmask" denir.

	Daha sonra sayinin kacinci biti set edilmek isteniyorsa (3) o kadar bitmask sayisinin bitleri SOLA kaydirilir

	0000 1000           Biti 3 kez sola kaydirilmis bitmask

						Daha sonra biti 3 kez sola kaydirilmis bitmask sayisini "~" "Bitsel Degil" islemi yapilir

	1111 0111           Yeni bitmask 

	Daha sonra ise bu Yeni bitmask sayisini, biti clear edilmek istenen sayi ile "BITSEL VE" ile "&" islemi yapilir

	1000 ?011 & 1111 0111


	1000 0011           Sonuc ise clear edilmek istenen bit = 0 olmustur ve diger bitleri ayni kalmistir.
	Ve birde "?" olan bitin degerinin "0" veya "1" olmasi fark etmeyecektir.
	Sebebi ise "Bitsel Ve" ile islem yapildigi icin ve zaten yeni bitmask sayisinin 3. biti = 0 oldugu
	icin "?" olan bitin degerinin "0" veya "1" olmasi fark etmeksizin sonuc = 0 olacaktir.
	*/


	
	int x = 139;		  // 0000	0000	0000	0000	0000	0000	1000	1011	 3. biti clear edilmek istensin.
	pb(x);

	 x &= ~(1 << 3);      // 1 sayisi bitmask sayisinin decimal karsiligidir.   x = x & ~(1<<3) Ayni anlamdadir.

	 pb(x);
	 
	//	131 =	0000	0000	0000	0000	0000	0000	1000	0011
}
