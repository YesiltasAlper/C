#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// void *calloc(size_t nitems,size_t size);		Prototip bildirim.

/*
	Calloc() fonksiyonu da malloc() fonksiyonu gibi dinamik bellek tahsilati yapmamizi sagliyor.
	
	Farki ise malloc() fonksiyonu bir bellek tahsilati yaptiginda bellek blogundaki byte'lar garbage value olarak hayata geliyor.
	Calloc fonksiyonunda ise  bu bellek blogundaki byte'lar sifir '0' olarak clear edilmis bir sekilde hayata gelecek.

	Bellek tahsilati basarili ise bellek blogunun baslangic adresini verecek.
	Calloc fonksiyonununda geri donus degeri mallocda oldugu gibi basarisiz olma durumunda NULL.

	Parametreleri ise ==>>

	Ornegin int a[5] olsun.
	Bu durumda ilk parametre eleman sayisidir
	Ikinci parametre ise bir elemanin sizeof degeri sizeof(int).
	int veri turunun 4 byte oldugunu dusunursek a[5] icin 5 x 4 = 20 byte bellek tahsilati yapilacaktir.

*/


/*
int main() {

	int size;
	printf("Dizi boyutu : ");
	scanf("%d", &size);

	int* array = (int *)calloc(size, sizeof(int));

	if (array == NULL) {
		printf("Basarisiz...");
		exit(EXIT_FAILURE);
	}

	printf("\n// Ilk deger\n");

	for (int i = 0; i < size; i++)
		printf("arrray[%d] = %d\n", i, *(array + i));	// Clear edilmis bir sekilde hayata geldi.

	printf("\n\n");

	printf("// Atama sonrasi\n");

	for (int i = 0; i < size; i++) {
		*(array + i) = i + 4;
		printf("arrray[%d] = %d\n", i, *(array + i));	
	}

	printf("\n");

	free(array);						
}
*/
