#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// function pointer kodlarini okumak zor oldugu gibi yazana da bazi konularda sorun olusturabiliyor ve hata yapildiginda duzeltilmesi zor olabiliyor.
// Ayrica tanimlamalar surekli kullanilacaksa function pointerin syntaxi uzun oldugu icin sadelestirme yapmak gerekebiliyor.
// Bu tarz hatalardan kacinmak ve kodu sadelestirmek icin typedef bildirimi kullanilabilir.



/*
int main() {
	
	// char* (*fptr2)(char*, const char*) = &strcpy;		 Bu kod icin typedef bildirimi yapmak gerekirse

	typedef char* (*fptr)(char*, const char*);

	// Ancak typedef bildirimlerinin scope'u vardir ve su an sadece int main() icerisinde taninabilir.

	fptr f1 = &strcpy;

	// f1 nesnesi olusturuldu ve strcpy adresini tutuyor.
	// f1 nesnesi sadece geri donusu char* ve parametreleri char*, const char* olan bir fonksiyonun adresini tutabilir.		
	
	const char* source = "merhaba";
	char dest[8];

	f1(dest,source);

	printf("*****Strcpy sonrasi*****\n\n");

	printf("source = %s\n", source);
	printf("dest = %s\n", dest);
	
}
*/



/*
typedef void* (*fptr1)(void*, const void*, size_t);		// memmove'a ait prototip bildirimin function pointeri
typedef char* (*fptr2)(char*, const char*);				// strcpy'e ait prototip bildirimin function pointeri

// void foo(void* (*fptr1)(void*, const void*, size_t), char* (*fptr2)(char*, const char*), int x, double y);		 // Boyle yazilmasi yerine

void foo(fptr1 f1, fptr2 f2, int x, double y);																		 // Boyle yazilabilir daha sade.

int main() {

	fptr1 f1 = &memmove;
	fptr2 f2 = &strcpy;

	// foo(f1, f2, 10, 15.1);
}
*/



//****************FUNCTION POINTER ARRAYS****************

/*
// Anlami elemanlari function pointer olan dizi demektir.

void func0(int a) {
	printf("a = %d ve func0 cagrildi...\n",a);
}
void func1(int b) {
	printf("b = %d ve func1 cagrildi...\n",b);
}
void func2(int c) {
	printf("c = %d ve func2 cagrildi...",c);
}

typedef void(*fptr)(int);

int main() {

	fptr fpa[] = { &func0,&func1,&func2 };	
	for (int i = 0; i < 3; i++)
		fpa[i](i+2);

	printf("\n");

	// fpa,elemanlari fonksiyon adresi olan bir dizidir.fpa sadece geri donus degeri void olan ve bir int turden parametresi olan fonksiyonlarin adresini tutabilir.
	//	Bu yapilara jump table denir.Jump table da dizinin index numarasi ile function pointerlara erilir.
}
*/
