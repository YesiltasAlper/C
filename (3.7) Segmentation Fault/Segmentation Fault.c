#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	Segmentation Fault hatasinin tanimi var olmayan bir bellek bloguna erismeye valisildiginda olusan hatadir.Asagidaki durumlarin hepsinde bu vardir.

	Ornegin free edilmis bir degiskene erismeye calistigimizda veya sadece okuma amacli kullanilan bir bellek bolgesine yazmaya calistigimizda vb. bu hatayi aliriz.
*/





// ***************** DURUM 1 ==>>	NULL POINTER'A ERISMEYE CALISMAK ******************************

/*
int main() {

	int* p = NULL;
	*p = 1;
	printf("%d", *p);

	// NULL pointer olan bir bellege erismek segmentation fault hatasidir.NULL pointer hicbir seyi isaret etmeyen pointer demektir.
	// Bir pointer'a atanacak adres yoksa NULL kullaniriz.
	// Kodda *p diyerek adresini bilmedigimiz bir bellege erismeye calisip 1 atanmis.
	// Kod calistirilirsa segmentation fault sebebiyle run-time hatasi olusur.
	// Asagidaki kod yukaridaki kodun duzeltilmis halidir.
}
*/


/*
int main() {

	int x = 0;
	int* p = &x;
	*p = 1;

	printf("x  : %d\n", x);
	printf("*p : %d\n", *p);
}
*/





// ***************** DURUM 2 ==>>	WILD POINTER DURUMU ******************************

// Bir pointer initialize edilmemis bir sekilde tanimlanmissa (NULL pointerla bile) bu pointera "wild pointer" denir.

/*
int main(){

	int* ptr;			// ptr wild pointerdir.
	int x = 10;

	*ptr = x;

	printf("*ptr = %d\n", *ptr);
	printf("x : %d\n", x);

	// Kodda ptr herhangi bir adresi gostermedigi icin adresine erisilerek x degeri atanmistir.
	// Bu bir segmentation fault hatasidir.Kodun dogrusu asagidadir.
}
*/


/*
int main() {

	int* ptr;			// ptr wild pointerdir.
	int x = 10;

	ptr = &x;			// ptr artik wild pointer degildir.
	*ptr = x;

	printf("*ptr : %d\n", *ptr);
	printf("x    : %d\n", x);

	// Kodda ptr herhangi bir adresi gostermedigi icin adresine erisilerek x degeri atanmistir.
	// Bu bir segmentation fault hatasidir.
}
*/





// ***************** DURUM 3 ==>> DANGLING POINTER DURUMU **************************

// Bir pointerin isaret ettigi adres artik yoksa o pointer'a "dangling pointer" denir.

/*
int* foo() {
	int x = 15;
	return &x;
}

int main() {

	int* ptr = foo();

	// Bu durumda foo(); fonksiyonuna cagri yapildiginda x degiskeninin adresiyle geri donse de
	// x degiskeni otomatik omurlu oldugu icin foo(); fonksiyonundan cikis yapilinca x degiskeninin
	// adresi RAM'den silinecektir ve ptr degiskeninde RAM'de olmayan bir adres tutulacaktir.
	// Kodun dogrusu asagidadir.
}
*/


/*
int* foo() {
	static int x = 15;
	return &x;
}

int main() {

	int* ptr = foo();

	// x static omurlu oldugu icin program sonlanincaya kadar RAM'den silinmeyecektir.
	// veya static keyword kullanilmadan direkt int x = 15; kodu global alanda tanimlanabilir.
	// bu durumda yine x degiskeni statik omurlu olacaktir.
}
*/

//**********DANGLING POINTER ORNEK - 2*************

/*
int main() {

	int* p;
	{
		int c = 10;
		p = &c;
	}

	// Kodda 136 ve 139. satirlar arasindan sonra c degiskeninin hayati sonlanacaktir
	// ve RAM'den silinecektir.93.satirda p degiskeni c degiskeninin adresini tutarken
	// 139.satirdan sonra c degiskeni RAM'den silinecegi icin p degiskeninde yine bir adres
	// kalmayacaktir.Kodun dogrusu asagidadir.
}
*/


/*
int main() {

	int* p;
	{
		static int c = 10;
		p = &c;
	}

	// Veya static keywordu ile birlikte 153 ve 156. satirlar arasindaki scope silinerek
	// segmentation fault hatasi onlenebilir.
}
*/





/*
// ***************** DURUM 4 ==>> SADECE OKUNABILIR BIR BELLEGE YAZMAYA CALISMAK **************************

int main() {

	char *str = "foo";
	*str = 'b';

	// Bu kod segmentation fault hatasi olusturur cunku karakter dizileri degistirilemezdir ve const tanimlanmalidir.
	// const tanimlaninca yukaridaki kod syntax hatasina donusur ve kod guvenligi arttirilir.

	// Kodun dogrusu const char *str = "foo";	str bu sekilde tanimlanmalidir.Bu durumda
	// *str = 'b';	kodu syntax hatasi olur.
}
*/





/*
// ***************** DURUM 5 ==>> FREE EDILEN BELLEK ALANINA ERISMEYE CALISMAK **************************

int main() {

	int a[] = { 2,4,6 };
	int* ptr = (int*)malloc(3 * sizeof(int));
	ptr = a;
	*ptr = 20;

	free(ptr);

	*ptr = 50;

	// Heap'den tahsis edilen bellek free edildikten sonra *ptr = 50;	koduyla heap'den alinan bellege erismeye calisildi ve
	// tekrar dizinin ilk elemanini 50 atandi.Ancak ptr degiskeni free(ptr);	kodundan sonra herhangi bir adresi gostermedigi
	// icin		*ptr = 50;		kodu segmentation fault hatasi olusturur.

	// Kodun dogrusu ise	*ptr = 50;	kodunu silerek free edilmis bir bellek alanina tekrar erismeye calismamaktir.
}
*/

