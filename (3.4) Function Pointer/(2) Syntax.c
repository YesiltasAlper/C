#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
void foo(int x, double y) {

}

int main() {

	void(*fptr)(int, double) = &foo;

	printf("fptr : %p\n", fptr);				
	printf("&foo : %p\n", &foo);				

	// void olmasinin sebebi foo adli fonksiyonun geri donus degeri void oldugu icindir.Eger foo fonksiyonunun geri donus degeri int olsaydi int(*fptr)(int, double) = &foo; olurdu.
	// Veya int* olsaydi int*(*fptr)(int, double) = &foo; seklinde olurdu.
	// geri donus sonrasi parantezdeki yildizin sebebi function pointer syntax'idir ve "fptr" ise function pointer'in ismidir.
	// int ve double parametrelerinin sebebi ise foo fonksiyonundaki turlerle ayni olmak zorundadir.
}
*/



/*
void foo(int x, double y) {

}

void f1(int x, double y) {

}

int main() {

	void(*fptr)(int, double) = &foo;
	printf("fptr : %p\n", fptr);
	printf("&foo : %p\n", &foo);

	fptr = &f1;							
	printf("\n");

	printf("fptr : %p\n", fptr);
	printf("&f1  : %p\n", &f1);

	// Kodda once fptr = &foo; iken sonrasinda baska bir function pointer degiskeni tanimlamaya gerek kalmadan
	// fptr = &f1; atandi.Bunun sebebi ise f1 ve foo fonksiyonlarinin parametreleri aynidir ve geridonus turu
	// aynidir.Eger boyle olmasaydi baska bir function pointer degiskeni tanimlanmaliydi.
}
*/



/*
int* f2(int* x, double y, long int a, const char* b) {

	static int z = 0;
	return &z;

	printf("&z = %p\n", &z);
}

int* f1(int x, double y) {
	
	static int z = 20;
	return &z;
}

int main() {

	int* (*fptr1)(int, double) = &f1;
	int* (*fptr2)(int*, double, long int, const char*) = &f2;

	printf("fptr1 = %p\n", fptr1);
	printf("&f1 = %p\n", &f1);

	printf("****************\n");

	printf("fptr2 = %p\n", fptr2);
	printf("&f2 = %p", &f2);
}
*/



/*
int main() {

	// Eger standart kutuphanede bulunan hazir fonksiyonlarin adreslerini tutmak istersek.

	void* (*fptr)(void*, const void*, size_t) = &memmove;	

	char* (*fptr2)(char*, const char*) = &strcpy;

	int(*fptr3)(const char*, const char*) = &strcmp;

	void* (*fptr4)(size_t) = &malloc;

	// Fonksiyonlarin prototip bildirimlerine bakilarak bunlara uygun function pointer syntax'i yazilir.
}
*/



/*
int main() {

	char* (*fptr2)(char*, const char*) = &strcpy;

	const char* source = "merhaba";
	char dest[8];

	fptr2(dest,source);

	printf("*****Strcpy sonrasi*****\n\n");

	printf("source = %s\n", source);
	printf("dest = %s\n", dest);
}
*/
