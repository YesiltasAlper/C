#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
	Eger biz String'i bir degiskende saklamak istiyorsak bunu 2 farkli yolla yapabiliriz.
	1- "Char" turden diziler
	2- Pointerlar
*/


int main() {

	/*
	char name[] = "Alper";
	printf("%zu",sizeof(name));
	
	//	C'de string literali oldugunu derleyicinin anlayabilmesi icin sonuna NULL karakter koyuyor.
	//	Null karakter olmazsa Runtime hatasi olusur.
	*/



	/*
	char name[4] = "Ayse";
	printf("%s", name);

	// Eger kendimiz dizi boyutunu belirliyorsak 5 byte yer kaplayacak "Ayse" ismine 4 byte yer ayirirsak hata olur.
	// Yazinin sonunda mutlaka NULL karakter olmak zorunda oldugu icin bu sekilde bir sey ortaya cikiyor.
	// Null karakter koymaya yer kalmadigi icin boyle oldu.
	*/


	
	/*
	char name[] = "Alper";
	printf("%s\n", name);
	name[3] = 'b';
	printf("%s\n", name);

	// Sayi dizilerinde oldugu gibi karakter dizilerinde de bu sekilde karakteri degistirebiliriz.
	// Fakat bu yazi icin 5. karakteri degistiremeyiz cunku 5. karakter NULL karakterdir ve degistirmeyi denersek Runtime hatasi olusur.
	// NULL karakter mutlaka bir yazinin sonunda olmak zorundadir.
	*/



	/*
	char name[] = "45754";
	printf("%s", name);

	// Cift tirnak arasina yazdigimiz her sey karakterdir.
	*/



	/*
	char name[] = { 'A','L','P','E','R','\0' };
	printf("%s\n", name);
	printf("Sizeof(name) : %zu", sizeof(name));

	// Bu sekilde de initialize edebiliriz.Bu syntax kullanilirsa NULL karakteri unutmamaliyiz.
	// Cunku derleyici kendisi otomatik eklemez.
	*/

}
