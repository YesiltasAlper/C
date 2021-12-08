#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ------------------------DECLARATION TYPES ------------------------

/*
	Declaration (Bildirim) derleyiciye bir ismi veya bir fonksiyonu tanitmaktir.

	Ornegin int x;	kodunu derleyici x isminde bir degisken oldugu ve turunun int oldugu seklinde yorumlar.

	double foo(int y,double z); Derleyici foo yu gordugunde bu bir fonksiyon ve iki tane parametresi var parametrelerin birisi int digeri double ve geri donus degeri double oldugunu anlar.

	Bu declarationlari bunlar disinda baska ek bilgiler de eklenerek derleyiciye tanitilabilir.Ornegin const int x = 5; gibi veya static y = 10; gibi...

	Declaration Specifiers (Bildirim Belirtecleri) ikiye ayrilirlar.

	1- Storage Class (Depolama Turleri) :   auto,static,extern,register

	2- Type Qualifiers (Tur Belirtecleri) : const,volatile,restrict
*/



/*
int main() {

	
	// ------------------------AUTO ------------------------

	// Bu keyword ile bir degisken tanimliyoruz ve tanimladagimiz bu degiskenler "OTOMATIK OMURLU" oluyor.

	auto int x = 10;
	int y = 15;

	// Zaten ikisi de otomatik omurludur. Biz local bolgede yerel alan da degisken tanimlayinca otomatik omurlu oluyor ve global alanda tanimlaninca statik omurlu oluyor.Kod burada main() icinde oldugu icin zaten
	// otomatik omurludur.Aslinda main() fonksiyonu icinde auto keywordunu kullanmanin anlami yoktur.
	// int y = 15; ifadesinin basina auto koymaya gerek yoktur cunku zaten otomatik omurludur.Ancak local alanda bulunan otomatik omurlu bir degiskeni statik omurlu yapabiliriz.Bu kez static keywordu kullaniliyordu.

	// Ayrica auto keywordu global alanda kullanamayiz mesela global alanda auto int x = 55; gibi bir sey syntax hatasidir.Bu demek oluyor ki statik omurlu bir degisken otomatik omurlu hale getirilemez ama tam tersi static keywordu ile olabilir.
	// Yine ayni sekilde global alanda fonksiyon tanimlarken ornegin void foo(auto int x); gibi bir prototip bildirim yapilamaz syntax hatasidir.


}
*/



/*
int main() {

	//  ------------------------REGISTER ------------------------

	// Eger bir degiskenin onune "register" keywordu getirilirse derleyici bunu islemcinin registerlarinda saklar.Ama derleyici bunu kesin yapacak diye bir sey yok biz derleyiciye boyle bir ricada bulunuyoruz.
	// Derleyici bakiyor bu eger onun icin iyiyse uygunsa onu register olarak acar.Ama bu da gunumuzde cok kullanilmiyor cunku derleyicilerin zaten kendi optimizasyonlari oldukca iyi oldugu icin
	// kendileri cok iyi register optimizasyonu yapiyorlar zaten bizim register keywordumuze cok gerek kalmiyor.Gerekli gordugunde zaten o degiskeni kendisi islemcinin registerina yaziyor.
	// Register keywordunu kullaninca gidip islemcinin registeriina yaziyor cunku bu buyuk bir avantaj islemci direkt registerdan kolayca ulasabiliyor o verilere hizli bir sekilde daha kolay erisiyor.
	// Normalde bilindigi uzere degiskenleri RAM'a yaziyor ama islemcinin kendi hafiza yoneticisi register oradan daha kolay erisim saglayabildigi icin registera yazmasi bizim acimizdan buyuk bir performans artisidir.

	register int x = 20;

	// Tabi burada x degiskenini derleyicinin registerina yazacak diye bir sey yok sadece rica da bulunduk yazabilir de yazmayabilir de.Bu turden bir pointer da tanimlayabiliriz.
	// Pointer degisken register olabilir.

	register int x = 20
	register int* ptr = &x;		// Bu yanlis kod error

	int x = 20;
	register int* ptr = &x;		// Bu dogru kod

	// Kendimizden emin olmadigimiz zaman bu keyword fazla kullanilmamali artik derleyiciler mukemmele yakin optimizasyon yaptiklarindan derleyicilere birakilmalidir.	
}
*/

