#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"BIR TAM SAYININ BIR BITINI SET ETMEK" --------------------------

	// Bir tam sayinin bir bitini set etme islemi,o bitini "1" yapma islemidir.

	/*

	1000 ?011           Bu ornek bir sayi ve sayinin 3.biti set edilmek istensin 3.biti 1 yapilmak istensin.

	0000 0001           Bu sayi ise "Bitmask" adinda bir sayidir.1 biti haric tum bitleri sifirdir.Bu sayiya "Bitmask" denir ve degeri 1'dir.

	Daha sonra sayinin kacinci biti set edilmek isteniyorsa (3) o kadar bitmask sayisinin bitleri SOLA kaydirilir

	0000 1000           Yeni bitmask

	Daha sonra yeni bitmask sayisini,biti set edilmek istenen sayi ile "BITSEL VEYA"  "|" ile islemi yapilir.

	1000 ?011   |   0000 1000

	1000 1011           Sonuc olarak set edilmek istenen bit = 1 olmustur ve diger bitleri ayni kalmistir.
	Ve birde "?" olan bitin degerinin "0" veya "1" olmasi fark etmeyecektir.
	Sebebi ise "Bitsel Veya" ile islem yapildigi icin ve zaten yeni bitmask sayisinin 3. biti = 1 oldugu
	icin "?" olan bitin degerinin "0" veya "1" olmasi fark etmeksizin sonuc = 1 olacaktir.
	*/


	int x = 131;		// 0000	0000	0000	0000	0000	0000	1000	0011	 3. biti set edilmek istensin.
	pb(x);

	x |= (1 << 3);      // 1 sayisi bitmask sayisinin decimal karsiligidir.   x = x | (1<<3) ayni anlamdadir. 
	pb(x);

	// 139 =	 0000	0000	0000	0000	0000	0000	1000	1011	 

}
