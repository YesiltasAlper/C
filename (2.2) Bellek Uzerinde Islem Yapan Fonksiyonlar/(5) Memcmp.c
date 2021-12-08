#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
memcmp ==> Iki bellek blogunu buyuk-kucukluk durumunu dikkate alarak kiyaslar.			int memcpy(const void* p1, const void* p2, size_t nbytes);			Prototip bildirimi

memicmp ==> Iki bellek blogunu buyuk-kucukluk durumunu dikkate almayarak kiyaslar.		int memcpy(const void* p1, const void* p2, size_t nbytes);			Prototip bildirimi

Ilk parametre kiyaslanacak degisken
Ikinci parametre kiyaslanacak degisken
Ucuncu parametre her ikisinin kac byte'ini kiyaslayacak

p2 > p1 negatif deger (-1) dondurur.
p2 = p1 ise (0) dondurur.
p2 < p1 ise pozitif deger (+1= dondurur.
*/

int main() {

/*
const char* str1 = "Alper";
const char* str2 = "AlpEr";

int sonuc;

sonuc = memcmp(str1, str2, strlen(str1));

if (sonuc > 0)
printf("str1 > str2");
else if(sonuc == 0)
printf("str1 = str2");
else
printf("str1 < str2");

	// str1 ve str2 stringlerini buyuk kucuk
// harflere dikkat ederek bastan sona kiyaslar.
*/



/*
const char* str1 = "Alper";
const char* str2 = "AlpEr";

int sonuc;

sonuc = _memicmp(str1, str2, strlen(str1));

if (sonuc > 0)
printf("str1 > str2");
else if (sonuc == 0)
printf("str1 = str2");
else
printf("str1 < str2");

// str1 ve str2 stringlerini buyuk kucuk
// harflere dikkat etmeyerek bastan sona kiyaslar.
*/



/*
const char* str1 = "aLPER";
const char* str2 = "AlPEr";

int sonuc;

sonuc = memcmp((str1 + 2), (str2 + 2), 2);

if (sonuc > 0)
printf("str1 > str2");
else if (sonuc == 0)
printf("str1 = str2");
else
printf("str1 < str2");

// str1 ve str2 stringlerini (str1 + 2) ve (str + 2) adreslerinden baslayarak
// 2 byte boyunca buyuk kucuk harflere dikkat ederek kiyaslar.
*/



/*
int a[5] = { 2,3,12,8,10 };
int b[5] = { 2,4,6,10,0 };

// int result = memcmp(a, b, 5*sizeof(int));	
		
// a dizisi ile b dizisini ikisinin baslangic adreslerinden baslayarak
// (5 * sizeof(int))  = 20 byte'ini (5 eleman) (iki dizinin de tumunu)kiyasla.


// int result = memcmp(a + 2, b + 2, (5 - 2) * sizeof(int));
	
// a dizisini (a+2) adresinden baslayarak b dizisini de (b+2) adresinden baslayarak
// ((5-2) * sizeof(int))  = 12 byte'ini (3 eleman) kiyasla.


// int result = memcmp(a + 4, b + 3, (5 - 4) * sizeof(int));
	
// a dizisini (a+4) adresinden baslayarak b dizisini de (b+3) adresinden baslayarak
// ((5-4) * sizeof(int))  = 4 byte'ini (1 eleman) kiyasla.


if (result > 0)
printf("a > b");
else if (result < 0)
printf("a < b");
else
printf("a = b");
*/
}

