
// Cok boyutlu bir diziyi fonksiyonlara aktarmak tek boyutlu bir diziyi fonksiyonlara aktarmaktan farkli degildir.
// Tek boyutlu dizilerde call by reference yapisini kullanarak aktariyorsak
// ayni sekilde cok boyutlu dizilerde de ayni call by reference yapisini kullanarak aktaracagiz


/*

#include <iostream>
using namespace std;

void foo(int* ptr){
}


int main() {

		// Cok boyutlu dizilerde tur bilgisini kestiremiyorsak kodu C++'a alarak "typeid" operatorunu kullanabiliriz.

		int a[5];
		cout<<typeid(&a[0]).name() << endl;
		foo(a);
}
*/



/*

#include <iostream>
using namespace std;

void foo(int(*ptr)[30]) {
}


int main() {

	int b[10][30];
	cout << typeid(&b[0]).name() << endl;
	foo(b);

	// Call by reference yapisini kullanacagiz fakat fonksiyon ne turden olmali eger bunu kestiremiyorsak "typeid" kullanacagiz.
	// Iki boyutlu bir dizi icin int c [boyutu] [turu] diyebiliriz.
}
*/



/*

#include <iostream>
using namespace std;


void foo(int(*ptr)[5][7][10]) {

}

int main() {

	int c[3][5][7][10];
	cout << typeid(&c[0]).name() << endl;
	foo(c);

	// Dizi kac boyutlu olursa olsun int [boyut][tur][tur][tur] seklinde olacaktir.
}
*/



//***********************ORNEK**********************



/*
#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void matrix2(int(*ptr)[2], int row) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 2; j++) {
			printf("[%d][%d] = ", i, j);
			scanf("%d", &(ptr[i][j]));
		}
	}
}



void printmatrix2(const int(*ptr)[2], int row) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}



int main() {

	int b[3][2];
	matrix2(b, 3);
	printf("\n");
	printmatrix2(b, 3);
}
*/
