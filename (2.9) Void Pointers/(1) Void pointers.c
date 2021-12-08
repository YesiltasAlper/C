#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Void pointers diger adiyla generic pointers turden bagimsizlardir.C'de turden bagimsiz olarak islem yapmamizi saglayan aractir.

int main() {

	/*
		int x = 20;
		short y = 30;
		char c = 'a';

		// int *ptr = &y;	Syntax hatasidir.Cunku int turden bir pointer int turden bir nesnenin adresini tutmalidir.
		// Fakat C esnek oldugu icin syntax hatasi vermiyor.Bunun kontrolu bizde olmalidir.
	*/



	/*
		int x = 20;
		short y = 30;
		char c = 'a';

		void *vptr = &x;

		printf("&x   : %p\n", &x);
		printf("vptr : %p\n", vptr);

		vptr = &y;

		printf("&y   : %p\n", &y);
		printf("vptr : %p\n", vptr);

		vptr = &c;

		printf("&c   : %p\n", &c);
		printf("vptr : %p\n", vptr);

		// vptr generic pointer degiskeni ilk once int turden degisken olan x in adresini tuttuktan sonra short turden degisken olan y nin adresini tutuyor.Turden bagimsizdir.
		// Void pointer olarak tanimlanmasaydi yanlis olurdu.Turden bagimsiz olarak turu ne olursa olsun bir nesnenin adresini gosterebilen pointerlara generic pointer denir.
		// Generic pointerlar tur fark etmeksiniz her turden nesnenin adresini tutabilir.
	*/



	/*
		int x = 2;
		void* vptr = &x;

		// *vptr = 100;			// ERROR

		// Void pointerlarda indirection operatorun operandi yapilmiyor.
		// Void pointerlarda bazi kisitlamalar vardir.Pointer aritmetigi de kullanilamaz.
		// Void pointerlarda indirection operatorun operandi syntax hatasi oldugu icin ekrana deger bastirmanin yolu da farklidir.

		printf("x : %d", *vptr);	// ERROR.
	*/



	/*
		int x = 2;
		void* vptr = &x;
		printf("x : %d\n", *(int*)vptr);

		// Indirection operatorun operandi yapildi fakat void pointer turden bagimsiz oldugu icin hangi turden nesneyi ekrana basilmak isteniyorsa o turden nesneye cast edilir.
	*/



	/*
		double a = 4.7;
		char x = 'f';

		void* vptr = &a;

		printf("a     : %.2f\n", a);
		printf("*vptr : %.2f\n", *(double*)vptr);
		printf("&a    : %p\n", &a);
		printf("vptr  : %p\n", vptr);

		vptr = &x;

		printf("****************\n");

		printf("x     : %c\n", x);
		printf("*vptr : %c\n", *(char*)vptr);
		printf("&x    : %p\n", &x);
		printf("vptr  : %p\n", vptr);
	*/


	
	/*
		// Void turu fonksiyonun geri donus degeri olarak kullanilabiliyor.Malloc Calloc da kullaniliyordu bunun gibi fonksiyonlar...
		// Void turden bir pointer olusturulabilir.
		// Void turden bir dizi veya bir degisken olusturulamaz.

		   void va[2] = { 4,5 };    // Syntax hatasi.

		   void x;					// Syntax hatasi.
	*/
	


	/*
	int a[3] = { 4,3,7 };

	void* vp = a;						// array to pointer convertion

	printf("Dizinin ilk elemani : %d\t", *(int*)vp);			

	printf("\n\n");

	for(int i = 0; i < 3; i++)
		printf("a[%d] = %d\t",i, *((int*)vp + i));		// Type cast islemi yapilarak pointer aritmetigi islemi yapilabilir.
	*/



	/*
		double a = 4.7;
		char x = 'f';

		void* vptr = &a;
		printf("sizeof(vptr) : %zu byte\n", sizeof(vptr));

		vptr = &x;
		printf("sizeof(vptr) : %zu byte", sizeof(vptr));

		// Sizeof'u vardir.int double veya hangi turden pointer olursa olsun bir pointer'in sistemde sizeof'u ne ise diger pointer turlerinde de aynidir.
		// Tum generic veya generic olmayan pointerlarin sizeof'u o sistemde kac ise diger tum hepsi aynidir.
	*/
}
