#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// "++" ve "--" operatorlerini pointerlarda pointer degiskenin degerini artirmak azaltmak veya gosterdigi yerdeki (isaret ettigi yerdeki) degiskenin degerini 1 artirip azaltmak icin kullanacagiz.


"[]"									// 1.oncelik seviyesine sahip ve soldan saga

"&"		"*"		"++"	"--"			// 2.oncelik seviyelerine sahip ve sagdan sola

*/


int main() {

	/*
	char c = 'A';
	char* cptr = &c;
	printf("%p\n", cptr);
	++cptr;
	printf("%p\n",cptr);

	// Her arttirmada adres sizeof(char) kadar artti.
	*/



	/*
	int a = 25;
	int* iptr = &a;
	printf("%p\n", iptr);
	--iptr;
	printf("%p\n", iptr);

	// Her azaltmada adres sizeof(int) kadar azaldi.
	*/



	/*
	int a = 25;
	int* iptr = &a;
	printf("*iptr = %d\n", *iptr);
	(*iptr)++;
	printf("New *iptr = %d\n", *iptr);

	// Once indirection operatoru yapilir 25 olur ve 1 arttilir.
	*/



	/*
	int x = 20;
	int* ptr = &x;
	int p[] = { 3,6,9 };
	ptr = p + 1;
	*(ptr++);							// Once bir arttir (int oldugu icin adresi 4 byte artirir her bir arttirmada) ve daha sonra icerigine erisir.
	printf("%d", *ptr);
	*/



	/*
	int x = 20;
	int* ptr = &x;
	int p[] = { 3,6,9 };
	ptr = p + 1;
	++* ptr;							// Once icerigine erisir (*ptr = 6 gosterdigi yer) ve daha sonra bir arttir.
	printf("%d", *ptr);
	*/
}

