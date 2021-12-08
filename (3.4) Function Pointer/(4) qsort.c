/*
	void qsort(void*base, size_t nitems, size_t size, int(*compar)(const void*,const void*))		prototip bildirim.

	qsort fonksiyonu turden bagimsiz olarak (generic pointer) quick sort islemi yapar. Standart bir fonksiyondur.stdlib.h baslik dosyasinda bulunur.
	1. parametre "base" siralanacak dizinin adresidir.
	2. parametre "nitems" siralama yapilacak dizinin boyutudur.
	3. parametre "size" dizideki bir elemanin sizeof degeri.
	4.parametresi function pointer ise call back.Quick sort algoritmasi yapilacak ancak bu parametrehangi turden oldugunu belirtir.
	Bu parametre dizinin art arda gelen iki elemanini kiyaslar.Ornegin 12 ve 13 var ilk sayi ikinciden buyukse pozitif deger (1) eger esitse (0) 
	eger ikinci buyukse negatif deger (-1) call back olarak donecek.Bu 4. parametreden gelen 1 ve 0'a gore qsort fonksiyonu siralama islemini yapacak.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define		SIZE		8

int cmp(const void* vp1, const void* vp2) {

	if ((*(const int*)vp1) > (*(const int*)vp2))
		return -1;
	if ((*(const int*)vp1) < (*(const int*)vp2))
		return 1;
	return 0;
}

int main() {

	int a[SIZE] = { 18,9,15,3,8,25,1,18 };

	qsort(a, SIZE, sizeof(int), &cmp);

	for (int i = 0; i < SIZE; i++)
		printf("%d\n", *(a + i));
}

