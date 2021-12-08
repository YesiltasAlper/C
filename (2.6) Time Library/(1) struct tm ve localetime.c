#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

/*
	https://www.tutorialspoint.com/c_standard_library/time_h.htm    Kaynak olarak bu link'e goz atilabilir.

	Link'de gorulen _t ile biten degiskenler typedef bildirimleri yapilmis bir turun es ismidir.time_t ' nin aslinda typedef long long time_t; demektir.Ancak sistemden sisteme degisebilir bunun icin
	printf("%zu", sizeof(time_t));					printf("%zu", sizeof(long));					printf("%zu", sizeof(long long));			Bu 3 kodu kullanarak long long olduguna karar verilir.long veya long long dan birisinin typedef haliydi.

	time_t'nin tuttugu deger calendar time (takvim zamani) dir.Calendar time ise bir orjinden (referans noktasindan) simdiki zamana kadar gecen saniye sayisina denir.
	Calendar time genellikle 01.01.1970	00.00 tarihini referans almakla beraber standart degildir.

	Ayrica bir de "Broken Down Time" kavrami vardir.Bu kavram insanlarin kullanip anlayacagi tarih ve zaman bicimidir.Ornegin 12.05.2019	19:01	
	Calendar tsme'da gecen saniye sayisi,yil ay hafta gun saat dakika saniye'ye cevrilerek broken down time'a donusturulmustur.
	Broken down time'in degiskenleri ise struct tm'de tutulur.Ancak calendar time time_t'de tutulur.

	struct tm {
		int tm_sec;			 seconds,			range 0 to 59			Saniye olarak
		int tm_min;          minutes,		    range 0 to 59			Dakika olarak
		int tm_hour;         hours,				range 0 to 23			Saat olarak
		int tm_mday;         day of the month,  range 1 to 31			Ayin gunu 1 den 31 e kadar
		int tm_mon;          month,				range 0 to 11			Yilin aylari
		int tm_year;         The number of years since 1900				Referans noktasi 0 olarak degilde 1900 olarak ayarlanmis.Bu durum bilinerek ayarlama yapilmalidir.
		int tm_wday;         day of the week,	range 0 to 6			Haftanin gunleri	pazar = 0	pazartesi = 1	 sali = 2..... cumartesi = 6
		int tm_yday;         day in the year,	range 0 to 365			Yilin gunleri
		int tm_isdst;        daylight saving time						flag olarak kullanilabilir veya saatlerin bir saat ileri-geri alinmasi islemi icin vb.
	};

*/



int main() {

	/*
	localtime fonksiyonunu incelemek gerekirse fonksiyon time.h kutuphanesindedir.Ayrica bir donusum fonksiyonudur.Calendar time'i broken down time'a cevirir.

	struct tm *localtime(const time_t *timer)		Prototip bildirimi.
	*/


	
	time_t timer;
	time(&timer);		// Orijinden gecen saniye sayisi timer'a atabir.

	struct tm* p1 = localtime(&timer);
	struct tm* p2 = localtime(&timer);
	struct tm* p3 = localtime(&timer);

	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", p3);

	// Adresler aynidir.
	
}
