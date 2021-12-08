#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	#define		makrosu'da bir on islemci komutudur ve compile time'dan bagimsizdir ve compile time'dan once calisir.
	Iki tur makro vardir.

	1-Simple Macro
	2-Function like macro

	1- Simple Macro -->>

	#define		SIZE	10

	Kodda derleme olmadan once compile time'dan once on derleyici SIZE'a 10 degerini kopyalar.
	Makro sabitleri genelde buyuk yazilir.

	Ornegin C'de BOOL adinda bir tur yoktur ancak biz define makrosu ile varmis gibi kullanilabilir.

	#define		BOOL	int
	#define		FALSE	0
	#define		TRUE	1
*/


// 2-Function like macro -->>

// Function like macro tek satirda kodlari yazilmalidir ki kopyalanabilsin.




#define		max(a,b)		((a) > (b) ? (a) : (b))
#define		min(a,b)		((a) < (b) ? (a) : (b))
#define     square(a)		((a)*(a))

int main() {

	int x = 2, y = 3;
	int min, max, square_min, square_max;

	max = max(x, y);
	min = min(x, y);

	square_max = square(max);
	square_min = square(min);

	printf("Max value : %d\n", max);
	printf("Min value : %d\n", min);
	printf("Square of max value : %d\n", square_max);
	printf("Square of min value : %d\n", square_min);
}




/*
#define array_size(a)		(sizeof(a)/sizeof(a[0]))							
#define isleapyear(y)		((y)%4==0 &&  ((y)%400==0 || (y)%100 != 0))

int main() {

	int dizi[] = { 1,2,3,4,5 };

	printf("Array Size : %d\n", array_size(dizi));

	printf("result : %d\n(if it is a leap year ==> 1 otherwise 0)", isleapyear(1600));
}
*/


