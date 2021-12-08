#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// void* realloc(void* block, size_t size);		Prototip bildirim.

/*
	Realloc fonksiyonu daha once malloc() veya calloc() fonksiyonu ile heap'den tahsis edilen bellegin alanini buyultmek veya kucultmek icin kullanilir.
	Yeniden alligment yaparak bellek guncelleme islemi yapar.

	Eger belllegi guncelleme islemi basarisiz ise geriye NULL pointer doner.Basarili ise bellegin baslangic adresi doner.
	Bellegin boyutunu arrttirma veya azaltma islemleri yapilabilir.Bu islemler yapilirken bellegin baslangic adresi degismeyecektir.
	Cunku ayni bellek blogu uzerinde islem yapilir.Ayni bellek blogunun kapasitesi arttirilir veya azaltilir.

	Ilk parametre void*block -->> Heap'den tahsis edilen bellek blogunun baslangic adresinin tutuldugu degiskendir.Guncellenmek istenen bellek blogunun baslangic adresi.
	Ikinci parametre size_t size -->>  Bellek blogunun olmasini istedigimiz byte kapasitesidir.

	Ornegin 50 byte'lik bir bellek blogu 70 byte olarak guncellenmek isteniyorsa size = 70 olmalidir.
*/

int main() {

	int size1, size2;
	printf("Dizi boyutunu giriniz : ");
	scanf("%d", &size1);

	int* ptr = (int*)malloc(size1 * sizeof(int));

	if (ptr == NULL) {
		printf("Basarisiz...");
		exit(EXIT_FAILURE);
	}

	printf("\n***************************************************\n");
	printf("Heap'den %d byte bellek tahsis edildi...\n", (size1 * sizeof(int)));
	printf("Atama oncesi degerler (Malloc garbage value) ==>> \n\n");

	for (int i = 0; i < size1; i++)
		printf("ptr[%d] : %d\n", i, *(ptr + i));

	printf("\nAtama sonrasi degerler ==>> \n\n");

	for (int i = 0; i < size1; i++) {
		*(ptr + i) = i * 2;
		printf("ptr[%d] : %d\n", i, *(ptr + i));
	}

	printf("\nBellek baslangic adresi (Realloc oncesi) = %p\n", ptr);

	printf("****************************************************\n");

	printf("\nRealloc ile guncellemek istediginiz deger (Onceki deger : %d) giriniz : ", size1);
	scanf("%d", &size2);

	ptr = realloc(ptr, size2 * sizeof(int));

	printf("\n*******************************************************************************\n");
	printf("Realloc ile guncelleme islemi sonrasi atama islemi oncesi degerler (Malloc garbage value) ==>> \n\n");

	for (int i = 0; i < size2; i++)
		printf("ptr[%d] : %d\n", i, *(ptr + i));

	printf("\nRealloc ile guncelleme islemi sonrasi atama islemi oncesi degerler ==>> \n\n");

	for (int i = 0; i < size2; i++) {
		*(ptr + i) = i * 5;
		printf("ptr[%d] : %d\n", i, *(ptr + i));
	}

	printf("\nBellek baslangic adresi (Realloc sonrasi) = %p\n", ptr);
	printf("*******************************************************************************\n");

	free(ptr);	
}

