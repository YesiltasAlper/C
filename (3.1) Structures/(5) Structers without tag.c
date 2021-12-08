#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)

// -----------------------ANONYMOUS STRUCTURE TYPE-----------------------


/*
struct {

	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;

	// Bu sekilde olusturmak bir syntax hatasi degildir.Burada s1 nesnesini olusturabiliyoruz fakat int main() icinde yapi nesnesi olusturamayiz.
	// Structer tag 'i bilmeden main veya baska bir fonksiyonun icinde yapi nesnesi olusturamayacagiz. s1'i kullanabilecegiz baska nesne olusturamayacagiz.
	// Veya yukarida s1'in yanina olusturacagiz yani baska bir fonksiyonda istedigimiz yerde yapi nesnesi olusturamayacagiz.

}s1;

int main() {

	strcpy(s1.mname, "Alper");
	strcpy(s1.mlast_name, "Yesiltas");
	s1.mmath = 75;
	s1.mchemistry = 80;

	printf("s1.mname : %s\ns1.mlast_name : %s\ns1.mmath : %d\ns1.mchemistry : %d", s1.mname, s1.mlast_name, s1.mmath, s1.mchemistry);

	// Ancak burada s1 nesnesinden baska bir nesneyi olusturmak istersek bu yapilamaz.
}
*/



/*
struct {

	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;

}s1;


struct {

	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;

}s2;


int main() {

	s1 + s2;		// ERROR

	// Yine nesneler arasinda s2=s1 gibi bir atama yapilamaz.
}
*/


