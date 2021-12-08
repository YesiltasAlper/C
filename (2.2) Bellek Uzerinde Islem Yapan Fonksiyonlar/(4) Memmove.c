#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
memmove ==> Bir bellek blogunu bir yerden baska bir yere tasiyor.				void* memmove(void* pdest, const void* psource, size_t nbytes);	  Prototip bildirim

Bellek blogunu bir yerden bir yere tasir.

Ilk parametresi Ikinci parametredeki verilerin tanisacagi bellegin adresi.
Ikinci parametresi ilk parametreye tasinacak olan bellegin adresi.
Ucuncu parametresi tasinacak byte sayisi


Memmove fonksiyonu eger kesisen bir bellek blogu varsa yani ust uste gelme durumu varsa orada kullanilmasi onerilen bir fonksiyondur.
Boyle bir durumda strcpy veya memcpy fonksiyonu kullanmak runtime hatalarina sebep olabilir. Belki istenen tepki de alinabilir ama bu
her zaman dogru tepki vermeyebilir.Kesisen veya kesismeyen bellek blogu fark etmeksizin memmove fonksiyonu kullanilabilse de
kesismeyen bellek bloklarinda memcpy fonksiyonunun kullanilmasi onerilir.
*/

int main() {

	char name[10] = "alper";
	memmove(name + 2, name, strlen(name) +1);		// +1 sebebi null karakter.char olayinda hepsi zaten 1 byte oldugu icin sizeof u onun uzunlugu + null karakter
	puts(name);

	// name dizisindeki "alper" string'ini tamamini ( strlen(name) +1 = 6 byte)
	// name dizisindeki "alper" stringinin (alper+2) baslangic adresinden itibaren tasir.
}
