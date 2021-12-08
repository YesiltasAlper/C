#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int ival) {
	printf("ival : %d\n", ival);
}

int main() {

	// --------------------------"BIR TAM SAYININ BIR BITINI GET ETMEK" --------------------------


	// Bir tam sayinin bir bitini get etme islemi,o bitin "1" mi yoksa "0" mi oldugunu test etme islemidir.

	/*

	0000 1010           Bu ornek bir sayi ve sayinin 3.biti get edilmek istensin

	0000 0001           Bu sayi ise "Bitmask" adinda bir sayidir.1 biti haric tum bitleri sifirdir.Bu sayiya "Bitmask" denir.

	Daha sonra sayinin kacinci biti get edilmek isteniyorsa (3) o kadar bitmask sayisinin bitleri SOLA kaydirilir

	0000 1000           Biti 3 kez sola kaydirilmis yeni bitmask

	Daha sonra biti kaydirilmis bitmask sayisini,get edilmek istenen sayi ile "BITSEL VE" islemi yapilir

	0000 1010 & 0000 1000

	0000 1000           Sayimizin 3. biti "1".          Sayimiz 0000 0010 olsaydi sonuc 0000 0000 olurdu ve sayinin 3. biti = "0" olurdu

	*/



	/*
	int x = 10;     // 0000 1010
	pb(x);

	if (x & (1 << 3))
	printf("X sayisinin 3. biti = 1 dir.");
	else
	printf("X sayisinin 3. biti = 0 dir.");
	*/



	/*
	int x = 7;     // 0000 0111
	pb(x);

	if (x & (1 << 3))
	printf("X sayisinin 3. biti = 1 dir.");
	else
	printf("X sayisinin 3. biti = 0 dir.");
	*/

}
