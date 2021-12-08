#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Array of string elemanlari string olan bir array idi.Aslinda bu bahsettigimiz stringler bir adres belirtiyordu.Cift tirnak icerisinde yazdigimiz ifadeler stringdi.
// Aslinda bunlar birer adrestir.Biz de bunlari adres tutan bir dizide sakliyorduk.Aslinda array of string ayni zamanda array of pointer.Cunku onlar ozunde bir adres.
// Dizinin elemanlari adres tutuyor.

int main() {
	
	/*
	int a = 20, b = 30, c = 40;
	int* array[] = { &a,&b,&c };

	for (int i = 0; i < 3; i++) 
		printf("%d\t", *(array[i]));
	*/


	/*
	int a = 20, b = 30, c = 40;

	const int* array[] = { &a,&b,&c };

	*array[0] = 100;			// Bu durumda hata olur cunku sola const koymak elemanlarin degerlerini degistiremeyiz demektir.	
								// Burada 20 degeri 100 yapilmaya calisildi.Syntax error
	*/


	/*
	int a = 20, b = 30, c = 40;

	int*const array[] = { &a,&b,&c };

	printf("*****BEFORE*******\n");

	for (int i = 0; i < 3; i++)
		printf("%d\t", *(array[i]));

	*array[0] = 100;			// Bu durumda hata olmaz cunku saga const koymak demek elemanlarin adresini degistiremeyiz demektir. 
	
	printf("\n*****AFTER*******\n");

	for (int i = 0; i < 3; i++)
		printf("%d\t", *(array[i]));
	*/
}
