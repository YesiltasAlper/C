#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	void *free(void *ptr);		Prototip bildirim.

	Malloc veya Calloc fonksiyonu ile dinamik bellek tahsilati yapildiktan sonra basarili olma durumunda heap'den bellegin baslangic adresiyle geri donuyordu.
	Bellek tahsilati sonrasi olusan bu nesne dinamik omurludur ve bu nesne kullanildiktan sonra heap'e manuel olarak geri verilmelidir.
	Stack yapisinda degiskenler statik veya otomatik omurludur ve stack yapisinda degiskenler otomatik olarak stack yapisina geri verilir ancak durum heap yapisinda boyle degildir.
	Heap yapisinda degiskenler dinamik omurludur ve manuel olarak geri verilmezlerse bellek sizintisi olusabilir.
	Bunun olmamasi icin free() fonksiyonu kullanilarak heap'den alinan bellek blogu heap'e geri verilir.

	free edilen bir bellek bloguna erismek runtime hatasidir.
	Bir bellek blogunun tamami tahsis edilebilirken yine tamami free edilebilir.Ornek olarak heap'de 100-50 byte'lik bellek bloklari bulunsun.
	Buradan 150 byte'lik bir alan tahsis edilemez.Free fonksiyonu icin de ayni mantik gecerlidir.Ornegin eger 100 byte'lik bellek tahsis edildiyse
	free fonksiyonu ile 100 byte geri verilir.100 byte'i parcalayarak heap'e iade etmek mumkun degildir.
*/

int main() {

	
	/*
	int* ptr = (int*)malloc(20);			// heap'den 20 byte'lik bellek blogu tahsis edildi ve baslangic adresi ptr degiskeninde tutuldu.
	if (ptr == NULL) {
		printf("Islem basarisiz...");
		exit(EXIT_FAILURE);
	}

	*ptr = 25;		
	free(ptr);			// ptr free edildi.

	// *ptr = 24;		// free edilmis bir bellege erismek runtime hatasidir.
	*/
	


	/*
	//	Free fonksiyonu da alinan bellegin yarisini iade edeyim gibi bir durum soz konusu degildir.Tamami iade edilir veya edilmez.

		int* ptr = (int*)malloc(20);
	if (ptr == NULL) {
		printf("Islem basarisiz...");
		exit(EXIT_FAILURE);
	}

	*ptr = 25;
	free(ptr);			// Bellek blogunun hepsi iade edilir.Parca parca iade edilemez.
	*/



	/*
	//	Free fonksiyonu da alinan bellegin yarisini iade edeyim gibi bir durum soz konusu degildir.Tamami iade edilir veya edilmez.

	int* ptr = (int*)malloc(20);
	if (ptr == NULL) {
		printf("Islem basarisiz...");
		exit(EXIT_FAILURE);
	}

	*ptr = 25;
	free(ptr);			// Bellek blogunun hepsi iade edilir.Parca parca iade edilemez.

	// free(ptr);		// free edilmis bir bellek blogunu tekrar free etmek undefined behaviour (tanimsiz davranis).	
	*/
}
