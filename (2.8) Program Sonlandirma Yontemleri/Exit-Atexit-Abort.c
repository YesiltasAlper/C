#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>			// exit atexit abort fonksiyonlari bu kutuphanede tanimlidir.


/*
Bir C ve C++ programi 2 sekilde sonlandirilir;

	1-Normal Termination (Normal sekilde sonlandirma)		"exit"  fonksiyonuna yapilan cagriyla
	2-Abnormal Termination (Anormal sekilde sonlandirma)	"abort" fonksiyonuna yapilan cagriyla

*/


// ------------------------EXIT FONKSIYONU------------------------

/*

// void exit(int status);		0 ==> Basari ile sonlanmis (EXIT_SUCCESS)			1 ==> Basarisizlik ile sonlanmis (EXIT_FAILURE)			Prototip bildirim.

void f2() {

	printf("f2 cagrildi\n");
	exit(1);
}

void f1() {

	printf("f1 cagrildi\n");
	exit(0);
}

int main() {

	f2();
	f1();
	printf("Alper");
	exit(0);

	// Burada olan olay return statement ile karistirmamalidir.Return statement bulundugu fonksiyonu sonlandirir fakat exit ise direkt programi sonlandiriyor
	// Ancak kontrollu bir sekilde yapmasi gerekenleri yapip sonlandiriyor.
	// Program  mainin icinden geldi ve f2(); cagri yapti sonra ekrana f2 cagrildi yazdi ve daha sonra exit(1) i gordu ve direkt programi sonlandirdi(basarisizlik ile).
}
*/



// ------------------------ATEXIT FONKSIYONU------------------------



// int atexit(void(*func)(void));		0 ==> Basari ile sonlanmis (EXIT_SUCCESS)			1 ==> Basarisizlik ile sonlanmis (EXIT_FAILURE)			Prototip bildirimi ise bu sekildedir.

//	Biz taslaga exit fonksiyonu ile bir seyler kaydediyoruz ve atexit fonksiyonu ile programi sonlandirdigimizda exit fonksiyonu atexit fonksiyonuna cagri yapiyor.
//  Daha sonra atexit da yapilmasi gereken taslaktaki isleri isliyor ve exit ile fonksiyonu sonlandiriyor.
//	Bizim extradan fonksiyonu bitirmeden sunlari yap dediklerimizin haricinde yapmasi gerekenler ;

//		1- atexit isleviyle daha once kayit edilmis islevleri kayit edilmelerine gore ters sira icinde cagirir.
//		2- yazma amacli acilmis tum dosyalarin tampon alanlari (buffer) bosaltilir (flush etmek denir.)
//		3- Acik durumda olan tum dosyalar kapatilir.
//		4- tmpfile isleviyle acilmis olan tum dosyalari siler
//		5- Kontrolu programin calistirdigi sisteme basari durumunu ileten bir bilgiyle geri verir.



/*
void f2() {

	printf("f2 cagrildi\n");
}

void f1() {

	printf("f1 cagrildi\n");
}


int main() {

	atexit(f2);
	atexit(f1);
	printf("Alper\n");
	exit(EXIT_SUCCESS);


	// Goruldugu gibi ekranda ilk once "Alper" yazdi.Burada ilk once f2 ye cagri yapmadi cunku fonksiyon sonlanmadan orasi hayata gecmiyor.
	// Ilk once exit fonksiyonu gorulmeli.Ekrana ilk basta Alper i yazdi ve
	// daha sonra exit ile programi sonlandir dedi ama atexit da taslakta f2 var f1 var bunlari yapip programi sonlandiracak.
	// Programa ilk once f1 i cagir last in first out (stack) mantigi ile tersten ve sonra f2 yi cagir.
	// Bu sekilde olur ve ardindan program sonlandirildi.
}
*/



/*
void f2() {

	printf("f2 cagrildi\n");
}

void f1() {

	printf("f1 cagrildi\n");
}

int main() {

	exit(EXIT_SUCCESS);
	atexit(f2);
	atexit(f1);
	printf("Alper\n");


	// Peki program boyle olsaydi ne olurdu... Burada ilk once main de exit'i gordu daha sonra direkt fonksiyondan cikar.
	// Cunku atexit fonksiyonlari taslaga kaydedilmez bile program onlari gormez.
}
*/



/*
void f2() {

	printf("f2 cagrildi\n");
}

void f1() {

	printf("f1 cagrildi\n");
}

int main() {

	atexit(f2);
	atexit(f1);
	printf("Alper\n");
	return;

	// Bu da olur cunku zaten return fonksiyonunun icinde exit(0) oldugu icin burada ayni exit fonksiyonuna cagri yapmis gibi oluyoruz.
	// Hatta return; yazmasak da zaten program kendisi return koydugu icin onda da atext fonksiyonlari duzgun calisir.
}
*/



// ------------------------ABORT FONKSIYONU------------------------



/*
void f2() {

	printf("f2 cagrildi\n");
}

void f1() {

	printf("f1 cagrildi\n");
}

int main() {

	// Abort fonksiyonu direkt anormal bir sekilde programi sonlandirir.

	atexit(f2);
	atexit(f1);
	printf("Alper\n");
	abort();

	// Once atexit ile taslaga kaydetti sonra tekrar taslaga kaydetti.Daha sonra printf ile "Alper"i ekrana basti ve abort fonksiyonunu gordu ve programi sonlandirdi.
	// abort ile sonlandirdigini gosteren bir pencereyi gosterdi bu anormal sonlandirma.abort ile sonlandirinca taslaktakileri dahi silerek anormal sonlandirma yapti.
}
*/
