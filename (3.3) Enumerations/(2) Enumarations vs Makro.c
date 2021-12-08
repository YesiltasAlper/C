#include <stdio.h>

//------------------ENUMARATION YERINE MAKRO KULLANILIRSA NE OLUR------------------

#define		DIRECTION		int
#define     NORTH			0
#define		SOUTH			1
#define		EAST			2
#define		WEST			3

int main() {

	typedef enum Direction { North, South, East, West }Direction;


	// 1. Farklilik ==> En ustteki kodlar on islemci kodudur ve derleyicinin tanidigi bir seyler degildir.
	// On Islemcinin tanidigi compile time dan once On Islemci program calisiyor ve "#" karakteriyle baslayan yapilar on islemciyi ilgilendiriyor.

	// 2. Farklilik ==> On Islemcinin scope'u yoktur yazildigi satirdan itibaren her yerde taninirken enumarationlarin scope'u vardir.

	// 3. Farklilik ==> Enum ile yazilmis olan daha az satirda halledilirken daha derli topludur.
	// Ornegin 30-40 tane on islemci kodu oldugunu dusunursek,yukaridaki 5 tane on islemci kodunun bir arada bir yapi oldugu anlasilamayabilir.

	Direction mydirection = 2;

	switch (mydirection) {

	case  0:
		printf("Kuzey Yonu...");
		break;
	case  1:
		printf("Guney Yonu...");
		break;
	case  2:
		printf("Dogu Yonu...");
		break;
	case  3:
		printf("Bati Yonu...");
		break;
	default:
		printf("Yanlis yon...");
	}

}

