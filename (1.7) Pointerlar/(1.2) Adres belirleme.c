#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Bir pointer degisken olusturup ilk deger atamasi yapilmazsa, bu pointer degisken bellek bolgesinde rastgele bir yeri gosterir ve bu da istenmeyen bir durumdur.
Bu sebeple pointer degiskenlerin initialize edilmesi her zaman iyi bir yontemdir.
Ancak bazen bu tarz nesneleri degil de bizim belirledigimiz adresi gostermesini isteyebiliriz.Direkt suradaki adresi goster diyebiliriz.

Dogrudan adres belirtebiliriz.
*/


/*
// ORNEGIN : Biz 16F8A adli bellek adresine ulasmak isteyelim.

int main(){
	
	char* cptr = (char*)0x16F8A;       // Bu bir pointer degisken ve turu char* fakat sagdaki degiskenin turu int.Tur uyusmazligi oldugu icin type cast (tur donusumu) yapilmalidir.
	printf("%p\n", cptr);
}
*/

