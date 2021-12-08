#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

#define NULL ((char*)0)
#define NULL 0
#define NULL 0L

NULL POINTER aslinda bir pointer degil bir makrodur.Yukaridaki gibi 3 farkli tanimi vardir.Fakat 3 tanesinin de anlami NULL makrosunun degeri = 0 dir.
Bu derleyiciye birakilmis bir durumdur ve NULL makrosu derleyiciye gore goruldugu gibi 3 farkli sekilde tanimlanabilir.

NULL POINTER : Hicbir nesneyi isaret etmeyen gostermeyen nesneye NULL POINTER denir.

*/


/*
int main(){
	
	int* ptr = NULL;     // ptr pointer degiskeni bellekte hicbir yeri gostermez.         
	printf("%p", ptr);
}
*/


/*
int *ptr1;                       

int main(){
	
	int* ptr2 = NULL;	

	printf("ptr1 : %p\n", ptr1);            // Global alanda tanimlanmis ilk deger atamasi yapilmamis pointerlara derleyici tarafindan otomatik olarak NULL pointer atanir.
	printf("ptr2 : %p\n", ptr2);            // ptr2 NULL pointer.  
}
*/

// ---------------------------NULL POINTER KULLANIMLARI --------------------------


/*
int main(){
	
	int *ptr = NULL;              // ptr pointer degiskeni bellekte hicbir yeri gostermez.
	*ptr = 20;					  // Bu kodda ptr'in adresine dereference edilip oraya 20 degeri atanmaya calisilmistir.Error.
	printf("%d",*ptr);

	// Ancak bu kod Run time hatasi olusturur cunku NULL pointer'i dereference ettik.
}
*/


/*
int main(){
		
	int x = 20;
	int* ptr = NULL;			// Kodun burasinda ptr pointer degiskeni hayata NULL pointer ile geliyor.Bu durumda dereference etmek Runtime hatasi olusturur.
	ptr = &x;					// Sonrasinda ise x degiskeninin adresi ataniyor.
	printf("%d",*ptr);
}
*/
