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


int main() {

	/*
	// ------------------------VOLATILE ------------------------

			Volatile keywordunu kullanmayinca programimiz bazi durumlarda calismiyor ve cesitli sIkintilara yol acabiliyor.

		Neden ihtiyac duyuyoruz? Cunku biz normalde bir degisken tanimladigimizda bu degiskenler RAM'de saklaniyor derleyici arka planda bir optimizasyon yapip bu degisken uzerindeki koda bakiyor ve bir degisIklik

		yapilmadigini goruyor ve RAM yerine islemcinin registerlarina atmayi tercih ederek daha rahat bu degiskene ulasmayi sagliyor.

		Derleyiciye biz optimizasyon yapma demedigimiz surece de arka planda boyle bir optimizasyon yapip RAM yerine islemcinin kendi registerlarina atiyor ve oraya kaydediyor.

		Aslinda iyi bir optimizasyon cunku RAM'e gidip onu kontrol etmektense islemciden ulasmasi daha basit.Ancak bazen sorun olusturabiliyor cunku bizim degiskenlerimiz program disi kaynaklar tarafindan degistirebilir olabilir.
		
		Boyle durumlarda "volatile" keywordune ihtiyac duyuyoruz cunku bizim program disi kaynaklar tarafindan eger bir degisken degistiriliyorsa burada "volatile" keywordunu kullanmamiz gerekebilir..

			Biz "volatile" keywordunu kullandigimizda derleyiciye bu degiskene optimizasyon yapma tutup islemcinin registerlarina atma bu degiskeni bu degisken RAM'de kalsin ben hep RAM'den ulasayim diyoruz.Cunku program disi kaynaklar

		tarafindan degistirilebilir.Eger volatile kullanmazsak kodda hata olmasa bile RAM'de degisim olacak ve derleyici optimizasyon yaptigi icin registerlara bakarak bunu fark edemeyecektir ve o degisken degismemis gibi olacaktir.

			Peki program disi kaynaklar tarafindan nerede degistirilebilir ornegin interruptlar kesmeler ornek verilebilir.Kesmeler mikrodenetleyiciye degisIk kaynaklar tarafindan gelen sinyaller sonucunda programin

		akisinin bir yerden baska bir yere sicramasi denilebilir.Interruptlarda bir kesmenin ne zaman olusacagi bilinmez.Bu yuzden optimizasyon yapilmamalidir ve degisken RAM'de tutulmalidir.

	*/

	int flag = 0;

	// Mesela burada butona basinca flag = 1 olacak ve iste bizim o bahsettigimiz durumun olmamasi icin "volatile" keywordunu kullanmamiz gerekli.Cunku bunu kullanmazsak derleyici bunu registerlara kaydedebilir.
	// butona basinca flag RAM'de 1 oldu ama islemci kendi registerlarina yazdigi icin oraya bakiyor RAM'e bakmiyor degisti degisken ama haberi yok ve hala flag = 0 gibi algilar.

	volatile int flag = 0;

	int volatile flag = 0;

	// Her iki yazim sekli de dogrudur syntax i bu sekildedir.
}
