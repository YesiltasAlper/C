#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		SIZE		5

int main() {

	

	// Biz pointer degiskenlerimizi birbirleri arasinda kiyaslayabiliriz.Fakat bundan bir fayda elde etmek istiyorsak ayni dizideki elemanlari kiyaslamaliyiz.

	// "<"				">"				"<="				">="				"=="				"!="		Operatorlerini kullanilabiliriz.


	
	//--------------------NORMAL YOL ILE EKRANA BASTIRMA--------------------


	/*
	int a[SIZE] = { 2,4,6,8,10 };
	int* p = a;
	int* ptr = a + 2;

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d \t (*&a[i]) = %d \t   *(a+i) = %d \t    &a[i] = %p \t   (a + i) = %p\n", i ,a[i],*&a[i],*(a+i), &a[i], (a + i));


	// Biz burada farkli sekillerde nasil dizinin degerini vb. gosterebiliriz diye kod yazdik.
	*/
	



	//--------------------POINTER ILE EKRANA BASTIRMA--------------------


	/*
	int a[SIZE] = { 2,4,6,8,10 };
	int* p = a;								// a = a[0]
	int* ptr_end = a + SIZE;				// a + SIZE = a[5]

	while (p < ptr_end) {					// a[0]'in adresinden a[5]'in adresine kadar

		printf("%d\n", *p);
		++p;
	}

	
	//-------------------------------VEYA BOYLEDE YAZILABILIR----------------------------------


	int a[SIZE] = { 2,4,6,8,10 };
	int* p = &a[0];
	int* ptr_end = &a[SIZE];

	while (p < ptr_end) {

		printf("%d\n", *p++);

	}

	*/
}
