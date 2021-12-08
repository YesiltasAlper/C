#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		SIZE		3

//	Ornegin			  a[0]		a[1] 		a[2] 		a[3] 		a[4]
//						3		  5			  2			  1			  15
// Maxest bulalim ==> maxest = a[0] ; oldugunu farz edelim.
// maxest a[1] den buyuk mu ? HAYIR o zaman maxest = a[1] olur.

int main() {

	//--------------MAXEST NUMBER OF ARRAY--------------

	/*
	srand((unsigned int)time(NULL));

	int a[SIZE];
	int index = 0;

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 15;

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	int maxest = a[0];							// Burada dizinin ilk elemanini en buyuk secilir

	for (int i = 1; i < SIZE; i++)				// i = 1 olmasinin nedeni a[0] dizisini kendisiyle tekrar kiyaslamamak icindir.
		if (a[i] > maxest) {

			maxest = a[i];
			index = i;
		}
	printf("Maxest Array a[%d] : %d ", index, maxest);
	*/


	// ---------------MINEST NUMBER OF ARRAY--------------


	/*
	srand((unsigned int )time(NULL));

	int a[SIZE];
	int index = 0;

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 15;

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	int minest = a[0];							// Burada dizinin ilk elemanini en kucuk secilir

	for (int i = 1; i < SIZE; i++)				// i = 1 olmasinin nedeni a[0] dizisini kendisiyle tekrar kiyaslamamak icindir.
		if (a[i] < minest) {

			minest = a[i];
			index = i;
		}
	printf("Minest Array a[%d] : %d ", index, minest);
	*/
}
