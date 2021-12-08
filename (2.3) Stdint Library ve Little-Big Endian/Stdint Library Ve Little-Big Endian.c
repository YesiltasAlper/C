#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

//--------------------<stdint.h> LIBRARY--------------------

/*
	"stdint" kutuphanesinde biraz makro ve biraz da typedef bildirimleri goruruz.
	Kutuphane biraz incelendiginde ornegin typedef signed char	 int8_t;	bildirimi var.  int8_t bu ifade 8 bittir.
*/


int main() {
	
	/*
	int32_t ival = 20;
	printf("%zu byte", sizeof(ival));

	// Normalde int 2 - 4 - 8 byte olabilir fakat bu kod tasinabilirlik problemlemini ortadan kaldirmak icin standartlastirmaya yarayan bir yapidir.
	// Bunu kullanarak bir sistemde tasinabilirlik soz konusu ise int yazmak yerine int32_t yazmak daha uygundur.
	*/



	/*
	int_least16_t ival2 = 20;
	printf("%zu byte", sizeof(ival2));

	// int_least16_t bildirimi en az 2 byte olur demektir.
	*/



//----------------------LITTLE ENDIAN VE BIG ENDIAN----------------------L

	/*
	Little Endian ve Big Endian bizim olusturdugumuz degiskenlerin bellekte nasil yerlesecegini ifade eden bir kavramdir.
	Ornegin int x = 6; dedik


	8000			0000 0110		Little Endian 													8003
	8001																							8002
	8002																							8001
	8003																							8000			0000 0110		 Big Endian 


	Eger int 4 byte ise 8000-8001-8002-8003 bellek adreslerine bu sekilde yerlesecektir.
	Adresler 8000 den baslayarak mi yerlesecek yoksa 8003 den baslayarak mi yerlesecek iste bunu anlatan kavrama "endian" denir.

	*/


	// 	Kullandigimiz sistemin little endian mi yoksa big endian mi oldugunu asagidaki kod ile anlayabiliriz.


	/*
	int ival = 1;
	char* p = (char*)(&ival);

	if(*p)
		printf("Little Endian");
	else
		printf("Big Endian");
	*/
}
