#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	"typedef" deyimiyle var olan veri tiplerine yeni adlar verilebilir veya biraz degisiklik yapilarak daha okunakli program yazilabilir.

	typedef float gercel;
	typedef int tam;
	typedef char *isaretci;
	typedef char dizi[81];

	gibi bildirimler yapilmis olsun. float'in diger adi gercel, int'in diger adi tam olarak bildirilmistir.
	Artik,gercel ve tamsayi degiskenler bildirilirken,gercel ve tam adlari kullanilabilir.
	typedef deyimi ile bir ture yeni ad verilirken eskileri de gecerli kalir.
	Ucuncusunde isaretci diye yeni bir veri tipi olusturulmustur.
	Artik,tipi karakter olan bir isaretci bildirilirken bu ad da kullanilabilir.
	Dorduncusunde NULL haric en fazla 80 karakteri olabilecek bir char turden dizi olusturulmustur.
	Bunlara gore asagidaki bildirimler gecerlidir ve yanlarinda aciklama olarak verilmis bildirimlerle aynidir.

	gercel	  f,ortalama;					float	f,ortalama;
	tam		  i,toplam=0;					int		i,toplam=0;
	isaretci  p,q;				     		char	*p,*q;
	dizi      mesaj,adres;					char	mesaj[81],adres[81];

	// typedef bildirimi yapilmasina ragmen int x = 10; float y = 15.5; gibi degiskenlerin tanimlanmasi da mumkundur.
*/


typedef float gercel;
typedef int tam;

int main() {

	tam sayi1;
	tam sayi2;
	gercel sonuc;

	printf("Sayi 1 : ");
	scanf("%d",&sayi1);
	printf("Sayi 2 : ");
	scanf("%d", &sayi2);

	sonuc = ((gercel)sayi1) / ((gercel)sayi2);

	printf("Ortalama = %.3f", sonuc);
}

