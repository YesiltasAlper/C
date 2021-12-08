#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)

// --------------------------ILK DEGER VERME---------------------------


/*
struct Student
{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;

}s1 = { "Zafer","Yilmaz",75,65 }, s2 = { "Alper","Yesiltas" };

// Burada student isimli struct yapisinin 4 uyesi vardir bu yuzden s1 icin 4 baslangic degeri verilebilir.Ilk baslangic degeri "Zafer" mname .... son baslangic degeri "65" ise mchemistry ile eslesir.
// s2 nesnesi icin mname ve mlast_name degiskenlerine ilk deger atamasi yapilmistir. mmath ve mchemistry ise ilk deger atamasi yapilmamistir ve degerleri garbage value degil "0" degerindedir.

int main() {

	///////////////
	// ******* ORNEK - 1 *******

	// printf("name = %s  last_name = %s  math = %d  chemistry = %d", s1.mname, s1.mlast_name, s1.mmath, s1.mchemistry);
	// printf("\n");
	// printf("name = %s  last_name = %s  math = %d  chemistry = %d", s2.mname, s2.mlast_name, s2.mmath, s2.mchemistry);



	///////////////
	// ******* ORNEK - 2 *******

	// printf("name = %s  last_name = %s  math = %d  chemistry = %d", s1.mname, s1.mlast_name, s1.mmath, s1.mchemistry);
	// s2 = s1;
	// printf("\n");
	// printf("name = %s  last_name = %s  math = %d  chemistry = %d", s2.mname, s2.mlast_name, s2.mmath, s2.mchemistry);
	
	// Ayni yapi turunden nesneler birbirine atanabildigi icin sorun olmadi sadece s2'nin mmath ve mchemistry uyesine sonradan atama yapilmis oldu.



	///////////////
	// ******* ORNEK - 3 *******
	
	// s2.mmath = s1.mmath;
	
	// printf("s1.mmath = %d\n", s1.mmath);
	// printf("s2.mmath = %d", s2.mmath);



	///////////////
	// ******* ORNEK - 4 *******
	
	// strcpy(s2.mname, s1.mname);					// s1.mname   s2.mname'e atanir.
	// printf("s1.mname = %s\n", s1.mname);
	// printf("s2.mname = %s", s2.mname);

	// s2.mname = s1.mane; islemi yapilamaz.strcpy(s2.mname, s1.mname); islemi yapilabilir.Bir karakter dizisini kopyalamak istedigimizde mutlaka strcpy fonksiyonunu kullanmaliyiz.
}
*/




/*
struct Student{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;
};


int main() {

	///////////////
	// ******* ORNEK - 1 *******
	
	// struct Student s1 = { "Zafer","Yilmaz",75,65 };			// Bu sekilde de bir nesne olusturup initialize edebiliriz.Initialize zorunlu degildir ancak iyi bir yontemdir.
	


	///////////////
	// ******* ORNEK - 2 *******
	// struct Student s1,s2
	


	///////////////
	// ******* ORNEK - 3 *******
	
	// struct Student s1 = { "Zafer","Yilmaz",75,65 } , s2 = { "Zafer","Yilmaz",75,65 };



	///////////////
	// ******* ORNEK - 3 *******

	// VEYA MESELA 4 ELEMAN VAR AMA BIZ SADECE 2 TANESINE ATAMA YAPMAK ISTIYORSAK BIR BASKA SYNTAX ISE ;
	
	// struct Student s1 = {.mlast_name = "Yilmaz",.mchemistry = 65};
	// printf("last_name = %s\nchemistry = %d",s1.mlast_name,s1.mchemistry);
}
*/

