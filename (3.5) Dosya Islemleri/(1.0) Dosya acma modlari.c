#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
	Dosyalar binary ve text modunda acilabilir.Acilan binary ve text moduna gore dosyanin uzerinde farkli islemler yapilabilir.Okuma-Yazma-Sondan ekleme vb.
	
	Text modu, eger dosyanin formati yaziyla ilgili ve yazi bilgilerini saklamaya yonelik ise dosya acilis modu text modunda olmalidir.

	Binary mode ise yaziyla alakali olmayan resim muzik video dosyasi olabilir.
	
	Dosya fopen() ile acilirken dosyanin text modunda mi yoksa binary modunda mi acilacagi belirtilmelidir.

	Bir dosyaya erisim yapilirken,islev acisindan ayni ekranda oldugu gibi,yazilacaklarin hangi satir sutuna yapilacagini belirleyen imlece benzeyen,kayit isaretcisi (KI) kullanilir.
	
	Erisim KI'nin konumlandigi yere yapilir ve dosyaya erisim icin oncelikle fopen() fonksiyonu kullanilarak dosya acilmalidir.


	----------------------------------------------------------------------------DOSYA ACMA MODLARI VE ACIKLAMALARI----------------------------------------------------------------------------

																	TEXT												BINARY MODE

																	"r"														"rb"
																	"w"														"wb"
																	"a"														"ab"
																	"r+"													"rb+"
																	"w+"													"wb+"
																	"a+"													"ab+"

	DOSYA ACMA MODU									DOSYA VARSA YOKSA																		ISLEM															KI'nin KONUMU

	Read [Okumak]									Dosya varsa acilir yoksa acilmaz														Sadece OKUMA islemi												Dosya BASI				
	Write [Yazmak]									Dosya varsa sifirlanir (icerigi kaybolur) yoksa yeni dosya olusturur					Sadece YAZMA islemi												Dosya BASI			
	Append [Eklemek-Yazmak]							Dosya varsa acilir yoksa yeni dosya olusturulur											Sadece DOSYA SONUNA YAZMA islemi								Dosya SONU
	Read+ [Okumak]									Dosya varsa acilir yoksa acilmaz														OKUMA ve YAZMA islemi											Dosya BASI
	Write+ [Yazmak]									Dosya varsa sifirlanir (icerigi kaybolur) yoksa yeni dosya olusturulur					OKUMA ve YAZMA islemi											Dosya BASI
	Append+	[Eklemek-Yazmak]						Dosya varsa acilir yoksa yeni dosya olusturulur											OKUMA ve DOSYA SONUNA YAZMA islemi								Dosya SONU
*/


int main() {
	
}

