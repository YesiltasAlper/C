#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #pragma pack(1)


/*
		Structers bir "user defined" turdur.User defined turler 3'e ayrilir.

		Bunlar ==> STRUCTERS		UNIONS		ENUMARATIONS			
*/


/*
	// Syntax

	struct ad{
			tip1	uye1;
			tip2	uye2;
			.
			.		(Diger uyeler)
			.
			tipN	uyeN;
	} degisken_adlari;
*/


/*
	struct Student{
		char name[9];
		char sname[9];
		int no;
	}s1,s2;

	// Burada s1 ve s2 nesnesi de struct student turunden bir nesnedir.s1 ve s2 nesnesinin char name[9] adli bir degiskeni char sname [9] adli bir degiskeni ve int no; adli bir degiskeni vardir.
	// s1 ve s2 nesnesi ayni zamanda global degiskenlerdir.Scope kurallari s1 ve s2 icin gecerlidir.


int main() {

	printf("%zu", sizeof(s1));	

	// Sonuc 24 cikti ancak beklenen ve olmasi gereken 9 + 9 + 4 = 22 idi.Burada sizeof'un 22 yerine 24 cikma sebebi byte alligment'dir.
	// Bu konu ileride detayli bir sekilde yazildi ancak sebebini su an detaya inmeden anlatmak gerekirse
	// Derleyici bu degiskenleri bellege yerlestirirken kendi kelime uzunlugunun katlarina gore yerlestiriyor ve bu yuzden farkli sekilde cikiyor ve arada bosluklar olusuyor.
	// Bunu engellemek icin byte alligment duzgun yapilsin istiyorsak " #pragma pack(1) " yukarida kullanmaliyiz.Boylece 22 byte da kalacaktir.
}
*/
