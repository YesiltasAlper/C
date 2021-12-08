#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {

	/*
	char* pname = "ali";

	printf("%p\n", pname);
	printf("%p\n", &pname[0]);
	printf("%p\n", "ali");				// Ayni sekilde sayi dizilerinde oldugu gibi baslangic karakterini hafiza da tutuyor.

	printf("%c\n", *pname);				// Karakter dizisinin ilk elemanina donusur.Array to pointer convertion.
	printf("%c\n", *(pname + 1));
	printf("%s\n",pname);
	*/


	/*
	const char* pname = "Alper Yesiltas";

	// for (int i = 0; i < strlen(pname); i++)
	//	 putchar(pname[i]);
	
	// for (int i = 0; i < strlen(pname); i++)
	//	 putchar(*(pname + i));

	//	puts(pname);

	// 3 farkli sekilde yazdirilabilir.
	*/



	/*
	char name[] = "ali";			// 2000 = a = a[0]		2001 = l = a[1]			2002 = i =  a[2]		2003 = '\0' = a[3]			
	const char* pname = "ali";		// 2000 = a = (a)		2001 = l = (a+1)		2002 = i = (a+2)		2003 = '\0' = (a+3)
	*/



	/*
	char name[10] = "ali";

	printf("***before***\n");
	puts(name);
	name[1] = 's';
	printf("***after***\n");
	puts(name);
	*/

	// ----------------------

	/*
	const char* pname = "ali";
	*(pname + 1) = 's';
	puts(pname);

	// Ustteki kod calisirken alttaki kodun calismama sebebi eger pointer olarak tanimlarsak bu stringlerin turu const char* olacaktir.
	// Yani biz orada gidip 's' yi pname'in bir adresinin isaret ettigi yere atayamayiz.Cunku pointer olan
	// stringler otomatik olarak const char* ile tanimlandigi icin burada degistirilme yapilamaz.
	*/

}


