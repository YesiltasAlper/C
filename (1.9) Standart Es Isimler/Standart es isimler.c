#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	_t ile bitenler ==>				size_t				time_t				clock_t				ptrdif_t

	Bazi tur isimleri turun kendisi degildir.O turun yerine gecen bir isimdir.Iste bunlar underscore t ile biten isimler.
	Bunlar standarttir ve bir tur bilgisi icerirler fakat turun kendisi degildir.
	size_t diye bir tur yok.Bu baska bir turun yerine gecmis bir standart es isim.Buna aslinda bir typedef bildirimi yapilmis.
	typedef unsigned int size_t bu sekilde yapilmis bir typedef bildirimidir.


	size_t				time_t				clock_t				ptrdif_t		Bunlar bu sekilde standart tur es isimleri ve bunlar bir typedef bildirimi aslinda.


	Neden buna ihtiyac duyulmus cunku ornegin int diye bir degisken tanimlanmis buna tam sayi turunde her sey atanabilir.
	Ancak bazen bu alani daraltmamiz gerekebilir.Ornegin yazi uzunlugunu da int e atayabiliriz
	Dizi uzunlugunu da int e atayabiliriz herhangi bir deger de atayabiliriz.
	Bu sorun olusturmasa da kodun daha rahat okunmasini saglamak amaciyla ve daha spesifik anlamlar yuklenebilmesi icin bu tarz turler olusturulmustur. 

	Bunlarin turu sistemden sisteme degisebilir.Ornegin size_t bizim sistemimizde unsigned int in typedef bildirimidir
	Ancak baska bir sisteminde unsigned long veya unsigned long long olabilir.Bunlar bu sekilde derleyiciye de birakilmis bir durumdur.
*/
	

int main() {

	/*
	int array[100];

	for (int i = 0; i < 100; ++i){
			array[i] = i;
	}

	size_t size = sizeof(array);
	printf("size = %zu\n", size);
		
	// Kullanim yerleri bunun gibi olabilir.size_t sonuc olarak unsigned int'in typedef bildirimi yapilmis hali 
	// oldugu icin negatif tam sayi degerinin olma ihtimalin olmadigi yerlerde kullanilir.
	*/
}
