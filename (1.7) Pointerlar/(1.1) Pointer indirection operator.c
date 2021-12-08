#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// INDIRECTION OPERATOR "*" ve AMPERSAND "&" ILE ILGILI POINTER ILISKISI ve KULLANIMI


/*
	Pointerlar,bellek alanindaki bir gozun ADRESININ saklandigi degiskendir.
	Pointerlara,verilerin kendisi degil de,o verilerin bellekte sakli oldugu bellek gozlerinin baslangic adresleri atanir.
	Pointerlar ayni zamanda bir degiskendir ve bu adresin saklanacagi ozel bir degiskendir.
	Bu tip degiskenlere YALNIZCA ADRESLER VEYA DIGER POINTER DEGISKENLER ATANABILIR.



	INDIRECTION OPERATOR VEYA DEREFERENCE OPERATOR "*"


	2. oncelik seviyesinde Unary bir operator ve yonu ise sagdan sola dogruydu.

	op1 * op2 = Carpma

	*op1 = Pointer

	2 amacla kullanilir -->>

	1- Pointerlarin bildirimini yaparken degiskenin pointer degisken oldugunu gostermek icin(Pointer Syntax).Bir degisken bildirilirken adinin onune "*" karakteri konulursa POINTER bildirimi yapilmis olur.

	2- Bir pointer degiskenin isaret ettigi bellek gozune erismek icin kullanilir. "*" indirection operatorun urettigi deger ise adresini aldigi nesnenin kendisidir.O adresde bulunan veridir.



ORNEK - 1 :


	int *p , n , *h;
	float *f;
	char *k;

	Bu kodun anlami p ve h adli degiskenler bir tam sayinin sakli oldugu bellek gozunun adresini tutacak olan pointer degiskenlerdir.

	n degiskeni ise bir tam sayi degiskendir.

	f degiskeni bir gercel sayinin, k adli degisken ise bir karakterin sakli oldugu bellek gozun adresini tutacaktir.



ORNEK - 2 :



	Bir pointer degiskenin onune "*" operatoru konulursa,o isaretcinin tuttugu adres ile degil de,isaret ettigi yerdeki veri ile ilgileniliyor demektir.

	int  *p , *m , k , j;
	k = 123;
	p = &k;
	m = &j;
	*m = 555;



	"&" KARAKTERI



	Daha once bit duzeyinde "VE" islemi yapan operator olarak kullanilmisti.Ancak pointer operator olarak bir degiskenin onune koyularak da kullanilir.

	1 amacla kullanilir :

	1- Isaretciye bir degiskenin adresini atamak icin "&" operatoru kullanilir.Anlami ise degiskenin degeri ile degil de bellekte bulundugu adresi ile ilgileniliyor anlamina gelir.

*/


/*
// ORNEK - 1 :

int main() {

	int t = 10;
	float f = 17.2;
	char kr = 'A';
	int* p = &t;			  // p pointer degiskenine int turunde t degiskeninin adresi atanmistir.10 sayisi hangi adresteyse o adres atanmistir.
	float* q = &f;			  // q pointer degiskenine float turunde f degiskeninin adresi atanmistir.17.2 sayisi hangi adresteyse o adres atanmistir.
	char* r = &kr;			  // r pointer degiskenine char turunde kr degiskeninin adresi atanmistir.'A' karakteri hangi adresteyse o adres atanmistir.

	printf("Adres t :  %p\n", &t);
	printf("Adres f :  %p\n", &f);
	printf("Adres kr : %p\n", &kr);
	printf("*******************\n");
	printf("p  : %p\n", p);
	printf("q  : %p\n", q);
	printf("kr : %p\n", r);
}
*/



/*
// ORNEK -2 :

int main() {


	int* p, n = 12, m = 0;
	m = n;
	p = &n;

	// p degiskeni turu tamsayi olan pointer degisken, n ve m tamsayi turden degiskenlerdir
	// Kod bu sekilde m = 12 olacaktir, ancak p'ye n degiskeninin bellekte bulundugu gozlerin baslangic adresi atanacaktir.

	printf("n  : %d\n", n);
	printf("m  : %d\n", m);
	printf("p  : %p\n", p);
	printf("&n : %p", &n);
}
*/



/*
// ORNEK -3 :

int main(){
	
	int *q , j = 5 , k = 0 ;
	q = &j;                            // "q" pointer degiskendir.
	*q = 122;                          // "*q" ifadesi ise q pointer degisken oldugu icin bu adresteki elemani gosterir.
	k = *q;

	printf("q : %p\n", q);
	printf("&j : %p\n", &j);

	printf("j : %d\n", j);
	printf("k : %d", k);
}
*/



/*
// ORNEK -4 :

int main(){
	
	int deg, * isaret;

	deg = 111;
	isaret = &deg;


	printf("Adres isaret : %p\n", isaret);
	printf("Deger isaret : %d\n", *isaret);
	printf("--------------------------------\n");
	printf("Adres deg    : %p\n", &deg);
	printf("Deger deg    : %d\n", deg);
}
 */                                                                            



/*
// ORNEK -5 :

int main() {

	int tut, * adr;

	tut = 888;
	adr = &tut;


	printf("Degiskenin adresi           : %p\n", &tut);
	printf("Degiskenin degeri           : %d\n\n", tut);
	printf("Pointer degeri (adres)      : %p\n", adr);
	printf("Pointer degeri              : %d\n\n", *adr);

	*adr = 444;

	printf("Degiskenin yeni degeri      : %d\n", tut);
	printf("Degiskenin adresi           : %p\n", &tut);
}
*/

                                                                                       

/*
// ORNEK -6 :

int main() {

	int x = 20, y = 40;
	int* iptr = &x;

	printf("&x = %p\n", &x);
	printf("iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);

	printf("*****************\n");

	printf("&iptr = %p\n", &iptr);

	printf("*****************\n");

	iptr = &y;

	printf("&y = %p\n", &y);
	printf("iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);

	printf("*****************\n");

	printf("&iptr = %p\n", &iptr);

}
*/

