#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	===========================>>>> int fgetpos(FILE*stream,fpost_t *position);	 <<<<=========================

	===========================>>>> int fsetpos(FILE*stream,const fpost_t *position);	<<<<==================

	fgetpos() fonksiyonu dosya konum gostericisinin konumunu "fpos_t" turunden degiskene atanmasini saglar.
	fsetpos() fonksiyonu fgetpos(); ile "fpos_t" degiskeninde tutulmus dosya gostericisinin konumu istenen konuma ayarlar.

	fgetpos(); fonksiyonunun
		1.parametresi ===> FILE* turunden dosyanin adresini tutan degiskendir.
		2.parametresi ==>>	Dosya konum gostericisinin atanacagi yuklenecegi fpos_t degiskendir.


	fsetpos(); fonksiyonunun
		1.parametresi ===> FILE* turunden dosyanin adresini tutan degiskendir.
		2.parametresi ==>> Dosya konum gostericisinin ayarlanacagi fpos_t degiskendir.

	Her ikifonksiyon da basari durumunda 0, aksi takdirde sifir olmayan bir deger geri dondurulur.
*/

int main() {

	fpos_t position = 0;
	FILE* f = fopen("C:\\Users\\Admin\\Desktop\\person.txt", "w+");		// Masaustunde "person" isminde dosya olusturur.

	if (!f) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}

	fgetpos(f, &position);
	printf("%d\n", ftell(f));

	
	fputs("merhaba bugun nasilsin...\n", f);
	printf("%d\n", ftell(f));

	
	position = 10;

	fsetpos(f, &position);
	printf("%d\n", ftell(f));
	
}


/*
	-------------------------------------------------------------------------DOSYA ACMA MODLARI VE ACIKLAMALARI---------------------------------------------------------------------

																TEXT												BINARY MODE
																"r+"													"rb+"
																"w+"													"wb+"

	DOSYA ACMA MODU							DOSYA VARSA YOKSA																ISLEM									KI'nin KONUMU

	Read+ [Okumak]							Dosya varsa acilir yoksa acilmaz												OKUMA ve YAZMA islemi					Dosya BASI
	Write+ [Yazmak]							Dosya varsa sifirlanir (icerigi kaybolur) yoksa yeni dosya olusturulur			OKUMA ve YAZMA islemi					Dosya BASI
*/

