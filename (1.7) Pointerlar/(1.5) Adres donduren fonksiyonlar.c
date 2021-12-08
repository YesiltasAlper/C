#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//*************ORNEK - 1*************

/*
int f1(int val) {
return val;
}

int* f2(int *val) {
return val;
}

int x = 10;

int main(){

int a = f1(x);
printf("a : %d\n", a);

int* b = f2(&x);
printf("b : %d\n", *b);
}
// f1 fonksiyonunda val degiskenine x degiskeninin degeri atanir ve 10 degeri ile geri doner.
// f2 fonksiyonunda val pointer degiskenine x degiskeninin adresi atanir ve x degerinin adresi ile geri doner.
// Bu adreste de 10 degeri vardir.
*/


//*************Ornek - 2 : Bir Tam Sayinin Karesini Alan Fonksiyon*************


/*

int* square(int* iptr) {

	static int result;

	result = (*iptr) * (*iptr);

	return &result;
}


int main(){

	int number1 = 20;
	int* result = square(&number1);
	printf("%d\n", *result);
}

*/


//*************Ornek - 3 : Iki Sayinin Toplamini Bulan Fonksiyon*************


/*

int* sum(int* s1, int* s2) {

	static int result;
	result = (*s1) + (*s2);

	return &result;
}



int main() {

	int s1 = 20, s2 = 40;
	int* p = sum(&s1, &s2);
	printf("%d\n", *p);
}

*/
