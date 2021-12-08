#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #define NDEBUG				// Aktif edilirse assertionlar'i iptal eder.
#include <assert.h>				// Assertionlar <assert.h> kutuphanesindedir.

/*
	Bir kod debug modda derlenirse kodun disinda derleyici hata bulmaya yonelik kodlar da koyuyor.Arka planda biz onlari goremesek bile debug kodlari da vardir.
	Ancak kod release modda derlenirse sadece burada gorulen kaynak dosyaya giren kodlar vardir.Bir kodu debug ve release modda derlemenin arasindaki temel farklilik budur.
	Debug modda kaynak dosyanin disinda hata bulmaya yonelik kodlar da vardir.Release modda ise direkt kaynak dosya vardir.
	Debug modda hata bulmaya yonelik kodlari biz de yazabiliriz.Hata bulmaya yonelik kodlar release modunda calistirilamaz.
	Cunku hata bulmaya yonelik kodlari yazdiktan sonra eger release moduna alirsak bu kodlar zaten yok olacaktir.Bu sebeple hata bulmaya yonelik kodlar debug modda yazilir.

	Assertion,<Assert.h> kutuphanesinde bulunan bir function like makrodur.Bu function like makroya bir parametre verildiginde bu ifadenin dogrulugunu yanlisligini kontrol eden bir function like makrodur.
	Eger ifade dogruysa kod duzgun bir sekilde calisir eger yanlissa uyari verir.
	
	Dinamik ve Statik olmak uzere bunlar ikiye ayrilirlar.
*/


int main() {

	// ---------------------------------DINAMIK ASSERTION---------------------------------

	// Dinamik Assertion ==> Dinamik assertion'lar compile time'a yonelik degildir.Run time'a yoneliktir.Run time'da yazilan ifadenin dogrulugunu yanlisligini kontrol eder.
	// Eger dogruysa kod duzgun bir sekilde calisir ancak yanlissa abort fonksiyonuna cagri yapar ve programi sonlandirarak hatanin hangi satirda oldugunu soyler.



	////////////////////////
	///////*****ORNEK-1*****

	/*
	int x;
	printf("Sayi giriniz : ");
	scanf("%d", &x);

	assert(x == 20);
	*/

	// assert() fonksiyonu lojik-1 olursa bir hata vermez fakat lojik-0 hata verir.Assertionlar debug modunda calistirilmalidir.
	// Eger assertionlar devre disi birakilmak istenirse en yukaridaki "#define NDEBUG" kodu aktif edilir ve hata sorgulamasi yapilmaz.
	




	// ---------------------------------STATIC ASSERTION ---------------------------------

	// Static Assertion ==> Statik assertion'lar run time'a yonelik degildir.Compile time'a yoneliktir.
	// Compile time'da yazilan ifadenin dogrulugunu yanlisligini kontrol eder. C'nin 11 standartlari ile gelmistir.



	////////////////////////
	///////*****ORNEK-1*****

	/*
	static_assert(sizeof(int) == 4, "size of int isn't 4 bytes");
	*/

	// Yukaridaki kod derlendiginde hata gorulmemisse int turu sistemde 4 byte yer kaplar.
	// Eger bu yazdigimiz kodda int degisken tipinin kapladigi alan 4 byte olmasaydi
	// "size of int isn't 4 bytes" yazisini altta konsolda hata olarak bastirirdi.





	////////////////////////
	///////*****ORNEK-2*****

	/*
	static_assert(sizeof(int) == 10, "size of int isn't 4 bytes");
	*/

	// Bu sistem icin sizeof(int) = 4 byte oldugu icin yukarida kodda henuz derleme bile yapmadan kodun altini cizdi.
	// Derleyince yanina yazilan "size of int isn't 4 bytes" mesajini altta konsolda bastirdi.
	// Eger assertionlar devre disi birakilmak istenirse en yukaridaki "#define NDEBUG" kodu aktif edilir ve hata sorgulamasi yapilmaz.
}
