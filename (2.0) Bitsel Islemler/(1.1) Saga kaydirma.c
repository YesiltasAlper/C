#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(unsigned int ival) {
	printf("ival : %d\n", ival);
}

void pb2(int ival) {
	printf("ival : %d\n", ival);
}

int main() {


	// -------------------------->>" BITSEL SAGA KAYDIRMA OPERATORU" --------------------------

	/*      "operand1 >> operand2" seklindedir.

	"operand1" eger herhangi bir isaretsiz (unsigned) tam sayi ve karakter tipinde ise besleme en soldan "0" ile

	"operand1" eger isaretli ve pozitif ise besleme yine en soldan "0" sayisi ile

	"operand1" eger isaretli ve negatif ise beslemenin nasil olacagi "DERLEYICIYE BAGLIDIR"

	Derleyici eger "0" ile besliyorsa LOJIK BESLEME , "1" ile besliyorsa ARITMETIK BESLEME     */


	/*
	unsigned int x = 15;
	int y = 1;
	pb(x);                      // 0000  0000  0000  0000  0000  0000  0000  1111       Sayinin degeri = 15
	pb(x >> y);                 // 0000  0000  0000  0000  0000  0000  0000  0111       Sayinin en sagdaki biti silinir ve en sola (MSB) "0" ataniyor.    Sayinin degeri = 7
	*/


	/*
	unsigned int x = 20;
	int y = 2;
	pb(x);                      // 0000  0000  0000  0000  0000  0000  0001  0100       Sayinin degeri = 20
	pb(x >> y);                 // 0000  0000  0000  0000  0000  0000  0000  0101       Sayinin en sagdaki iki biti silinir ve en sola (MSB) "0" ataniyor.    Sayinin degeri = 5 
	*/


	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	/*
	int x = 15;
	int y = 1;
	pb2(x);                      // 0000  0000  0000  0000  0000  0000  0000  1111       Sayinin degeri = 15
	pb2(x >> y);                 // 0000  0000  0000  0000  0000  0000  0000  0111       Sayinin en sagdaki biti silinir ve en sola (MSB) "0" ataniyor.    Sayinin degeri = 7 
	*/

	/*
	int x = 20;
	int y = 2;
	pb2(x);                      // 0000  0000  0000  0000  0000  0000  0001  0100       Sayinin degeri = 20
	pb2(x >> y);                 // 0000  0000  0000  0000  0000  0000  0000  0101       Sayinin en sagdaki iki biti silinir ve en sola (MSB) "0" ataniyor.		Sayinin degeri = 5
	*/

}



