#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	//---------------------------ATOI (Alphabetic to Integer)---------------------------

	Bir yaziyi bir sayiya donusturur.

	int atoi(const char *p);

	Geri donus degeri int ismi de atoi.Bir tane bizden okuma amacli bir yazi aliyor bu yuzden const kullanilmis.

	<stdlib.h> baslik dosyasinda bulunuyor.
*/

int main() {

	//	Ornegin kullanici 7 haneli bir plaka kodu girecek.Ornegin 34KLM79 girdi diyelim biz sadece 34 ve 79 u alacagiz.

	char s1[100];
	printf("plaka giriniz : ");
	scanf("%s", s1);

	int value1 = atoi(s1);
	printf("%d", value1);


	// Bu kodda ornegin 34klm79 girince bunun hepsini s1 de tuttu.
	// Daha sonra atoi fonksiyonuna 34klm79 u gorunce 34 u aldi ve ilk non digit karakteri gorunce k yi gorunce almayi birakti.
	// Gerisini almak icin ise pointer aritmetigi kullanilmalidir.


	/*
	char s1[100];
	printf("plaka giriniz : ");
	scanf("%s", s1);

	int value1 = atoi(s1);
	int value2 = atoi(s1+5);
	printf("value1 = %d\n", value1);
	printf("value2 = %d\n", value2);
	*/
}
