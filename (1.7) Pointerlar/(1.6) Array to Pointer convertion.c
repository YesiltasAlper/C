#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ARRAY TO POINTER CONVERTION


/*
	int array[5] adinda bes elemanli int turden bir dizi olsun.Farz edelim ki dizinin baslangic adresi 1000 adresi olsun.Bu durumda

	&(a[0]) = 1000			&(a[1]) = 1004			&(a[2]) = 1008			&(a[3]) = 1012			&(a[4]) = 1016	 olur.

	Array to pointer convertion'da ise dizinin ilk elemaninin adresinin (ayni zamanda dizinin adresinin) pointer turden bir degiskende tutulmasi vardir.

	int *ptr = NULL;	int turden ptr adinda pointer degiskenimiz olsun.

	ptr = array;	kodunda ptr pointer degiskeni dizinin baslangic adresini tutar ve bu isleme array to pointer convertion denir.

	ptr  =  &(a[0])  =  &a  olur.

*/


/*
int main() {

	int array[5] = { 2,4,6,8,10 };
	int* ptr = array;

	printf("&(array[0]) : %p\n", &(array[0]));
	printf("&array : %p\n", &array);
	printf("ptr : %p\n", ptr);

	// Bu ifadelerin hepsi aynidir.
}
*/


/*
int main() {

	int array[] = { 2,4,6,8,10 };
	int* ptr = array;
	*ptr = 300;								// Dizinin ilk ogesi 300 yapildi
	printf("array[0] : %d", array[0]);
}
*/


/*
int main() {

	int array[] = { 2,4,6,8,10 };

	printf("array[2] before : %d\n", array[2]);

	int* ptr = &array[2];
	*ptr = 75;								// Dizinin 2 indisli 3. ogesi 75 yapildi

	printf("array[2] after : %d", array[2]);
}
*/


