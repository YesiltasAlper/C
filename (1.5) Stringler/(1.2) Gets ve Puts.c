#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/*
	char string[25];
	printf("Name and Surname : ");
	scanf("%s", &string);
	printf("Name and Surname : %s", string);
		
	// Bu durumda scanf fonksiyonu bosluk karakterinden sonrasini buffer'a almayacaktir.
	*/
	

	/*
	Fakat biz bosluklarin kesilmesini istemeyip duzgun bir sekilde bunu ekrana bastirmak istiyorsak bunu scanf fonksiyonu ile yapamayiz.
	Normalde "gets" fonksiyonu vardir fakat bu fonksiyon cesitli problemler ve guvensizlik olusturdugundan dolayi bunu tercih etmeyecegiz.

	Bunun yerine extension olan sadece bu derleyicide tanimli olan gets_s fonksiyonunu kullanacagiz. 2 parametresi var.
	Ilk parametre yazi nereye yazilacaksa o bellek alanini istiyor.
	Diger parametresi ise max karakter sayisi.
	gets fonksiyonu enter'a basilana kadar almaya devam eder bosluk karakterini gordugunde durmaz.
	*/


	/*
	char name[20];
	printf("Cumle giriniz : ");
	gets_s(name, 20);
	puts(name);

	// Visual Studio'ya ozel olan gets_s fonksiyonunu kullanma sebebimiz runtime hatasi olusturmamak icindir.Eger bu kodda normal "gets" fonksiyonunu kullansaydik
	// ve 20 karakterden fazla karakter girisi yapsaydýk runtime hatasi olusurdu.Ancak bu sekilde gets_s fonksiyonuna 20 karakter siniri koyuldugu icin
	// bu sinir asilsa bile runtime hatasi alinmak yerine debug durumunda uyari alinacaktir.
	*/
	

	
	//	Puts fonksiyonu ise gets ile buffer'a alinan karakterleri formatsiz bir sekilde ekrana basar.

	
	/*
	char name[10];
	printf("Name : ");
	gets_s(name, 20);
	puts(name);
	*/
}

