#include <stdio.h>

// Union'lar user defined turlerden birisidir.
// Structerslarda ogrendigimiz cogu sey burada gecerli ancak ozellikle bellek konusunda aralarinda farkliliklar var.
// Bu da unionlarin varlik nedenidir.Alt seviye bir aractir daha cok sistem programlama ve embedded kodlarda karsimiza cikar.



////////////////////
//*****ORNEK-1*****

/*
union Ports {

	int interPort;
	int timePort;
	int adcPort;
};

int main() {

	union Ports PicA;
	PicA.timePort = 2;

	// Syntax'i
}
*/



////////////////////
//*****ORNEK-2*****

/*
typedef union Ports {			// union tag (Ports) olmak zorunda degildir.syntax olarak structerslarla aynidir.

	int interPort;
	int timePort;
	int adcPort;
}Ports,*Uptr;

int main() {

	Ports PicA;

	Uptr ptr = &PicA;
	ptr->interPort = 20;

	printf("interPort : %d", ptr->interPort);
}
*/



/*
////////////////////
//*****ORNEK-3*****

#pragma pack(1)

typedef union {

	int timer1;			// 4
	int timer2;			// 4
	int adc;			// 4
	double gpio;		// 8
	char s2[12];		// 12
	int a[5];			// 20
}Udata;


typedef struct {

	int timer1;			// 4
	int timer2;			// 4
	int adc;			// 4
	double gpio;		// 8
	char s2[12];		// 12
	int a[5];			// 20
}Sdata;

int main() {

	printf("Union sizeof  : %zu\n", sizeof(Udata));		// Goruldugu uzere bir union ogesinin sizeof'u en buyuk ogesinin sizeof'u dur.Hepsinin toplami degildir.Structerslardan farki budur.
	printf("Struct sizeof : %zu", sizeof(Sdata));
}
*/



// ----------Neden Unionlarin toplam sizeof'u en buyuk ogesinin sizeof'u----------



////////////////////
//*****ORNEK-4*****

/*
#pragma pack(1)

typedef union Ports{

	int x, y;
	double dval;
	int k;
	char str[12];
}Ports;


int main() {

	Ports A;
	printf("%p\n", &A.x);
	printf("%p\n", &A.y);
	printf("%p\n", &A.dval);
	printf("%p\n", &A.k);
	printf("%p\n", &A.str);
	printf("%p\n", &A);

	// Her birisinin baslangic adresi ayni cikmistir.Union'lar ortak bellek bolgesini kullanirlar.
	// Bu yuzden bu degiskenlerin hepsini ayni anda kullanamayiz.Ornegin x'i kullaniyorsak y'yi kullanamayiz yani sadece birisini kullanabiliriz.
	// Bunlarin hepsi aslinda ayni anda var olmuyor hangisini kullaniyorsak o var oluyor.
}
*/



////////////////////
//*****ORNEK-5*****

/*
#pragma pack(1)

typedef union Ports{

	int x, y;
	double dval;
	int k;
	char str[12];
}Ports;


int main() {

	Ports A = { 78 };
	printf("%d\n", A.x);
	printf("%d\n", A.y);
	printf("%lf\n", A.dval);
	printf("%d\n", A.k);
	printf("%s\n", A.str);

	// Burada ilk once int geldigi icin 78 degerini aldi int'e gore yapti ve hepsi ayni adresleri kullandigindan diger int turden degiskenler de (x,y,k) degerleri 78 oldu.
	// Double olan degiskene deger atamadi cunku bellekte once int geldi.Char olan degiskene de 78'in ASCII karakterini atadi.
}
*/



/*
////////////////////
//*****ORNEK-6*****

#pragma pack(1)

typedef union Ports{

	double dval;
	int x, y;
	int k;
	char str[12];
}Ports;


int main() {

	Ports A = { 78 };
	printf("%d\n", A.x);
	printf("%d\n", A.y);
	printf("%lf\n", A.dval);
	printf("%d\n", A.k);
	printf("%s\n", A.str);

	// Burada da ilk once double geldigi icin 78'i double olarak aldi ve diger int'leri 0 yapti random deger de verebilirdi cop bir deger.
	// Char'i ekrana basmadi bile cunku 78.00000 degerinin karakter karsiligi yok.
	// Burada hangi deger atamasi yapmak istiyorsak ona gore ayarlamalar yapmamiz lazim.
}
*/



/*
////////////////////
//*****ORNEK-7*****

#pragma pack(1)

typedef union Ports{

	int x, y;
	double dval;
	int k;
	char str[12];
}Ports;


int main() {

	Ports A = { .dval = 78 };
	printf("%d\n", A.x);
	printf("%d\n", A.y);
	printf("%lf\n", A.dval);
	printf("%d\n", A.k);
	printf("%s\n", A.str);

	// Bu sekilde yukarida ayarlama yapmadan ilk deger atamasina hangi degiskene atama yapmak istedigimizi girerek de atama yapabiliriz.
}
*/



/*
////////////////////
//*****ORNEK-8*****

#pragma pack(1)

typedef union Ports{

	int x, y;
	double dval;
	int k;
	char str[12];
}Ports;


int main() {

	Ports A = { .dval = 78 , .x = 20 , .y = 30};
	printf("%d\n", A.x);
	printf("%d\n", A.y);
	printf("%lf\n", A.dval);
	printf("%d\n", A.k);
	printf("%s\n", A.str);

	// Bu sekilde olunca ise kod yukaridan asagi ve soldan saga yurutuldugu icin en son .y = 30 u aldi ve bu da int turden oldugundan bu islemleri yapti.
	// Union'lara ayni anda sadece bir tane deger verebiliyoruz.Ayni anda sadece bir tanesini kullanabildigimiz icin ayni anda farkli farkli degerler veremiyoruz.
	// Union'lar kullanilirken bir ogesi kullanilir ve kullanilan ogenin turune gore atama yapilir
	// Daha sonra diger ogelerini kullanirken yine ona gore atama yapilir ve diger degiskenler pasif hale getirilir.
}
*/



