#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void *malloc(size_t size);		Prototip bildirim.

	Malloc fonksiyonu dinamik bellek tahsilati yapmamizi saglayan standart bir fonksiyondur.<stdlib.h> baslik dosyasinda bulunur.
	Prototip bildirimde size_t kullanilmasinin sebebi bir bellek kapasitesini temsil ettigi icin size_t es isim kullanilmistir.
	Parametre olarak "size" degerine 100 gecilirse heap'den 100 byte'lik bir bellek kapasitesi tahsis edilmek istendigi anlamindadir.Ancak basarisiz olma ihtimali de vardir.

	Malloc basarili olma durumunda heap alanindan istenilen kadar byte bellek verir ve bu bellegin baslangic adresiyle geri doner.
	Eger initialize edilmezse garbage value ile otomatik olarak initialize edilir.
	Basarisiz olma durumunda geriye null pointer dondurur.

	Basarisiz olmasinin dolayli yoldan sebepleri olabilecegi gibi direkt olarak 2 yoldan basarisiz olma durumu soylenebilir ==>

	1 ==> Heap alaninin kapasitesi ornegin 500 byte dir.Eger 500 byte'dan daha fazla bellek tahsil etmek istenirse bu istek basarisiz olur.

	2 ==> Heap kapasitesi ornegin 500 byte ve heap de 400 byte'lik bir bos alan olsun.
	Ve bu 400 byte ise heap alaninda 200-100-50-50 byte'lar seklinde siralanmis olsun.

	malloc fonksiyonu ile 250 byte tahsis edilmek istensin.Bu durumda heap de o kadar byte alan olmasina ragmen yine basarisiz olacaktir.
	Cunku bu bellek 200-100-50-50 byte'lar seklinde yerlesmistir ve parca parca bellek tahsilati yapilamaz.
	Heap'in bir bolumunden 200 byte diger bir kismindan 50 byte bellek parca parca verilemez.
	Bu istenen bir seydir cunku bellek blogunu tek parca halinde verdiginden ve baslangic adresi ile geri dondugu icin
	bellek adresleri de ardisIk oldugundan pointer aritmetigi ile bunlara tek tek erisilebilir.
*/

int main() {

	/*
	int*ptr = (int *) malloc(20);		// type cast
	if (ptr == NULL) {
		printf("Bellekten alan tahsis edilemedi...");
		exit(EXIT_FAILURE);				// tahsis basarisizsa kod direkt sonlansin...
	}
	printf("Bellekten alan tahsisi basarili...");

	// 20 byte heap den tahsil edildi ama belleklerde cop degerler garbage value var.
	
	free(ptr);
	*/


	
	/*
	int* ptr = (int*)malloc(20);
	if (ptr == NULL) {
		printf("Bellekten alan tahsis edilemedi...");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", *ptr);		
	*ptr = 30;					
	printf("%d", *ptr);

	// malloc ile 20 byte bellek tahsis edildi ve her birisi 4 byte (int) olacak sekilde 4 lu 4 lu ayrildi. 
	// Ornegin 1000-1004-1008-1012-1016 her birisi 4 byte olmak uzere bellekler geldi.
	
	free(ptr);
	*/



	/*
	int* ptr = (int*)malloc(20);
	if (ptr == NULL) {
		printf("Bellekten alan tahsis edilemedi...");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", *ptr);		
	*ptr = 30;					
	*(ptr + 1) = 45;
	ptr[3] = 55;				
	printf("%d %d %d", *ptr,*(ptr + 1),*(ptr + 3));
	
	free(ptr);
	*/



	/*
	int* ptr = (int*)malloc(20);
	if (ptr == NULL) {
		printf("Bellekten alan tahsis edilemedi...");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < 5; i++) {		//		20 (Toplam bellek size) / 4 (sizeof int) = 5
		*(ptr + i) = i + 10;
		printf("ptr[%d] = %d\n", i, *(ptr + i));
	}
	
	free(ptr);
	*/
}

