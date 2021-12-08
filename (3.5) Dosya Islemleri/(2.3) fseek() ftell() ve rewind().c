#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Bir dosya okuma veya yazma modunda acildiginda dosya konum gostericisi dosyanin en basindan itibaren "0" konumundan itibaren default olarak baslar ve o konumdan itibaren islem yapilacagini belirtir.
	Ancak bir dosya acildiginda her zaman dosyanin en basindan itibaren islem yapmak istenmeyebilir.Bu durumda file positioning'i ayarlanir ve bunun icin bazi fonksiyonlar vardir.
	Dosya konum gostericisi bu sayesinde ayarlanarak istenilen konuma alinabilir ve sondan baslayarak geri dogru da dosya okuma islemi gerceklestirilebilir.
*/


/*
	==============>>>> int fseek(FILE* stream,long int offset,int whence);	<<<<==============

	Dosya konum gostericisini ayarlar.

	===> Ilk parametresi
			"FILE* stream" hangi dosyanin konum gostericisi ayarlanmak isteniyorsa o dosyanin FILE* turunden degiskenidir.

	===> Ucuncu parametresi
			"int whence" eger dosya konum gostericisi bastan ayarlanmak isteniyorsa = 0 veya 'SEEK_SET' makrosu
			 Eger bulundugu konumda ayarlanmak isteniyorsa = 1 veya 'SEEK_CUR' makrosu
			 Eger en sonda konumlanmasi isteniyorsa = 2	veya 'SEEK_END' makrosu

	===> Ikinci parametresi
			Ucuncu parametrede secilene gore kac karakter hareket edilecegidir.

	Geri donus degeri ise basari durumunda '0'basarisizlik durumunda '0' disinda bir deger dondurur.




	===========================>>>> void rewind(FILE*stream);  <<<<=========================

	Sadece dosya konum gostericisini basa "0" a goturur default degere ayarlar.Baska bir islevi yoktur.

	fseek(f,0,0);	ve	rewind(f);

	ikisi de f degiskeninde bulunan adresteki dosyanin dosya konum gostericisini basa goturen koddur.




	===========================>>>> long int ftell(FILE*stream);  <<<<=========================

	===> Parametre olarak girilen adresteki dosyanin dosya konum gostericisinin nerede oldugunu long int ile geri donusuyle soyler.

	Ornegin "alper" stringi icin geri donus degeri 3 ise dosya konum gostericisi 'p' ile 'e' arasindadir 3 karakteri arkasinda birakmistir.

*/


/*
int main() {

	FILE* f = fopen("C:\\Users\\Admin\\Desktop\\example1.txt", "w");	// Yol verildi ve dosya masaustunde yazma modunda acildi.Dosya yoksa olusturulur
	if (!f) {
		fprintf(stderr, "%s", "Dosya acilamadi...");
		return 1;
	}

	printf("1-File Pointer Location : %d\n", ftell(f));					// ftell() fonksiyonu kullanilarak dosya konum gostericisinin yeri ogrenildi.
	int test1 = fputs("I am Alper.I am an engineer.\n", f);				// 30 karakterlik string yazildi ve bir alt satira gecildi
	printf("2-File Pointer Location : %d\n", ftell(f));					// Tekrar ftell() fonksiyonu kullanilarak dosya konum gostericisinin yeri ogrenildi.
	int test2 = fputs("How about you? What do you do?", f);

	if ((test1 || test2) == -1)
		printf("Yazma islemi basarisiz...");

	printf("3-File Pointer Location : %d\n", ftell(f));					// Tekrar ftell() fonksiyonu kullanilarak dosya konum gostericisinin yeri ogrenildi.
}
*/





int main() {


	FILE* f = fopen("C:\\Users\\Admin\\Desktop\\example1.txt", "r");			// Once yukaridaki kod calistirilmalidir ve yukaridaki kod masaustunde
	if (!f) {																	// example1 adinda txt uzantili dosya olusturacaktir.Asagidaki kodlarin
		fprintf(stderr, "%s", "Dosya acilamadi...");							// yorum satirlari example1'in icerigine gore yazilmistir.
		return 1;																// Dosya Konum Gostericisi : DKG olarak kisaltilmistir
	}


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 0, SEEK_SET);										// DKG'ni en basa al
	printf("2-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_SET oldugundan DKG basa alinir ve ikinci parametre 0 oldugundan 0 adim ilerlenir.
	*/


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 6, SEEK_SET);										// DKG'ni bastan itibaren 6 adim ilerle (0+6)
	printf("2-File Pointer Location : %d\n", ftell(f));			// Ucuncu parametre SEEK_SET oldugundan DKG'ni basa al ve ikinci parametre 6 oldugundan 6 adim ileri git (0+6).DKG 'A' le 'l' arasindadir.
	fseek(f,14,SEEK_SET);										// DKG'ni bastan itibaren 14 adim ilerle (0+14)
	printf("3-File Pointer Location : %d\n",ftell(f));			// Ucuncu parametre SEEK_SET oldugundan DKG'ni basa al ve ikinci parametre 14 oldugundan 14 adim ileri git (0+14).DKG 'a' ile 'm' arasindadir.
	fseek(f,-5,SEEK_CUR);										// DKG'ni bulundugu yerden itibaren 5 adim geriye gotur (14-5)
	printf("4-File Pointer Location : %d\n",ftell(f));			// Ucuncu parametre SEEK_CUR oldugundan DKG bulundugu yerden itibaren ve ikinci parametre -5 oldugundan 5 adim geri git (14-5).DKG 'e' le 'r' arasindadir.
	*/


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 0, SEEK_CUR);										// DKG'ni bulundugu yerden itibaren "0" adim ilerlesin.
	printf("2-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_CUR oldugundan SEEK_CUR bulundugu yerden itibaren ve ikinci parametre 0 oldugundan 0 adim ilerle
	*/


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 0, SEEK_SET);										// DKG'ni en basa al
	printf("2-File Pointer Location : %d\n", ftell(f));
	fseek(f, 17, SEEK_CUR);										// Bulundugun yerden 17 adim ileri git.
	printf("3-File Pointer Location : %d\n", ftell(f));			// Bulundugun yerden 17 adim ileri git (0+17) DKG 'a' ile 'n' arasindadir.
	fseek(f, -10, SEEK_CUR);									// Bulundugun yerden 10 adim geri git.
	printf("4-File Pointer Location : %d\n", ftell(f));			// Bulundugun yerden 10 adim geri git (17-10) DKG 'l' ile 'p' arasindadir.
	*/


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 0, SEEK_END);										// DKG'ni en sona al
	printf("2-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_END oldugundan DKG'ni en sona al ve ikinci parametre 0 oldugundan 0 adim ilerle
	*/


	/*
	printf("1-File Pointer Location : %d\n", ftell(f));			// DKG default sifir "0"
	fseek(f, 0, SEEK_END);										// DKG'ni en sona al
	printf("2-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_END oldugundan DKG'ni en sona al ve ikinci parametre 0 oldugundan 0 adim ilerle .DKG '?' isaretinin sonundadir.
	fseek(f, -15, SEEK_END);									// En sona git ve 15 adim geri gel
	printf("3-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_END oldugundan DKG'ni en sona al ve ikinci parametre -15 oldugundan 15 adim geri git (60-15). DKG 'W'ile 'h' arasindadir.
	fseek(f, 8, SEEK_CUR);										// Bulundugun yerden 8 adim ilerle (45+8). DKG 'y' ile 'o' arasindadir.
	printf("3-File Pointer Location : %d\n", ftell(f));		    // Ucuncu parametre SEEK_CUR oldugundan DKG bulundugun yerden itibaren ve ikinci parametre 7 oldugundan 7 adim ieri git (45+7).DKG 'y'ile 'o' arasindadir.
	*/
}


