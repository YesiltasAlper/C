#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//---------------------------------------------------------------------------------POINTERLARA GIRIS----------------------------------------------------------------------------------------

/*

// POINTER TANIMI

Pointer : Nesnelerin adresini tutan degiskenlere denir.

Adres : Bir nesnenin adresi ise o nesnenin bellekte bulundugu yer demektir.


//----------------------------------------------------------------------------------


// POINTER SYNTAX

Type * Name             Pointer syntaxi. Bir nesnenin adresini tutar.

int * x = &10;          x degiskeni int turden bir pointerdir ve int turunden olan 10 sayisinin adresini tutar.

double * x = &15.1;     x degiskeni double turden bir pointerdir ve double turunden olan 15.1 sayisinin adresini tutar.


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


// "&" Adres Operatoru

"&" ampersand sembolu,operandi olan nesnenin adresini uretiyor.&x; demek x in adresi demektir.

Oncelikle bir degiskenin adresini tutmak istiyorsak &x; sekildeki bir ifade syntax hatasidir cunku sol tarafta degiskenin tipi ve degiskenin ismi olmak zorundadir.

int x   = 20;     
int * y = &20; 

	Bu kod syntax hatasidir.Cunku "&" sembolunun yanina sag taraf degeri (20) yazamayiz.Sol taraf degeri yazmaliyiz.
	Bellekte x degiskeni icin yer ayrilmis olup x degiskeni icin adres bilinmektedir.Bunun icin sol deger atanmalidir.


int x;            
int * y = &x;   
  
	Bu kodda syntax hatasi yoktur.
	Fakat x degiskeninin baslangic degeri cop deger oldugu icin x in adresi y de olacaktir ve y de hangi sayinin adresi var bilinmeyecektir.
	
	
int * x = &20;    Bu kod ayri
int * x = &y;     Bu kod ayri

	Bu kodlarin ikisi de ayni sebepten dolayi syntax hatasidir.Cunku 20 sayisi icin bellekte ayrilacak yer bilinmedigi icin bu sayi icin
	herhangi bir bellek alani olusmayacaktir.Dolayisiyla x degiskenine hangi adres
	atanacaktir bilinmeyecektir.Bunun icin syntax hatasidir.Ayni durum y degiskeni icin de gecerlidir.

int   a = 20;     
int * x = &a;     

	Yukaridaki kodun dogrusu budur.Bu kodda a degiskeni icin bellekte 4 byte alan (int) ayrilmis ve a nin degeri 20 olmustur.
	a degiskeni bu 4 byte alanin icinde bir adrestedir ve bu adres x degiskenine atanmistir.


int x = 20;       
int * ip = &x;   
int * iptr2 = &x;

	Bu kodda x degiskeninin bellekte bir yeri vardir ve x degiskeni 20 degerini tutar.int turden pointer'in adresini tutan ip degiskeni ise
	x'in adresini tutmustur.Yine int turden pointer'in adresini tutan iptr2 degiskeni de x'in adresini tutmustur.

*/


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


// BIR DEGISKENIN ADRESINI GOSTERMEK VEYA EKRANA YAZDIRMAK	-1

// Bir degiskenin adresini gostermenin veya ekrana bastirmanin yolu degiskenin turu fark etmeksizin "%p" format belirleyicisi ile yapilir.

int main(){
	
	/*
	int x = 20,y = 40,z = 60;
	int * ptr1 = &x, ptr2 = &y , ptr3 = &z;
	printf("&x = %p\n", &x);                             // Bellek adresleri hexadecimal tabanda gosterilir.
	*/
	
	
	/*
	int x = 20, y = 40, z = 60;
	int* ptr1 = &x, ptr2 = &y, ptr3 = &z;                
	printf("&x = %p\n", &x);                             
	printf("ptr1 = %p\n", ptr1);                         
	*/
	
	
	/*
	int x = 20, y = 40, z = 60;
	int* ptr1 = &x, ptr2 = &y, ptr3 = &z;                
	printf("&x = %p\n", &x);                             // AYNI   ADRES
	printf("ptr1 = %p\n", ptr1);                         // AYNI   ADRES
	printf("&ptr1 = %p\n", &ptr1);                       // FARKLI ADRES
	*/
	
	
	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

	
	/*
	// BIR DEGISKENIN ADRESINI GOSTERMEK VEYA EKRANA YAZDIRMAK	-2
	
	// C'de veri turleri (data types) 3 e ayrilir:
	
	// 1- Default data types (int-char-double-float-unsigned int vb)
	// 2- Pointer types (Pointerlar)
	// 3- User defined types (Bunlarda kendi icinde 3'e ayriliyor structers - union - enum)
	
	
	printf("char* = %d byte \n", sizeof(char*));
	printf("unsigned char* = %d byte \n", sizeof(unsigned char*));
	printf("int* = %d byte \n", sizeof(int*));
	printf("unsigned int* = %d byte \n", sizeof(unsigned int*));
	printf("long int* = %d byte \n", sizeof(long int*));
	printf("unsigned long int* = %d byte \n", sizeof(unsigned long int*));
	printf("long long int* = %d byte \n", sizeof(long long int*));
	printf("unsigned long long int* = %d byte \n", sizeof(unsigned long long int*));
	printf("short int* = %d byte \n", sizeof(short int*));
	printf("unsigned short int* = %d byte \n", sizeof(unsigned short int*));
	printf("float* = %d byte \n", sizeof(float*));
	printf("double* = %d byte \n", sizeof(double*));
	printf("long double* = %d byte \n", sizeof(long double*));
	
	
	// Goruldugu uzere tum pointerlar ayni byte yer tutmaktadir.
	*/
}





