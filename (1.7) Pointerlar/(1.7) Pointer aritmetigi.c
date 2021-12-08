#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//	POINTER ARITMETIGI

/*

Pointer aritmetigi, pointer degiskenleri uzerinde yapabilecegimiz islemleri ifade ediyor.Sadece 3 islemi bu operatorlerle yapabiliriz ;

1- Bir pointer ile bir tam sayiyi toplamak
2- Bir pointerdan bir tam sayiyi cikarmak			(Tersi yapilamaz)
3- Bir pointerdan baska bir pointeri cikarmak		(Tersi yapilamaz)

*/



/*----------------------BIR POINTER ILE BIR TAM SAYININ TOPLANMASI----------------------*/



/*
int main(){

	
	int a[] = { 2,4,6,8,10 };
	int* ptr = a;						// a = a[0];
	ptr = a+1;
	printf("%d", *ptr);

	
	--------------VEYA AYNI KOD BOYLE YAZILABILIR----------------------

	int a[] = { 2,4,6,8,10 };
	int* ptr = a;						// a = a[0];
	ptr = &a[1];
	printf("%d", *ptr);

	// a+n = &a[n] Anlamindadir  ve a = a[0] yani a demek dizinin 0 indisli 1. elemani (ilk elemani) demektir.
	
}
*/



/*
int main(){

	int a[] = { 2,4,6,8,10 };
	int* ptr = a+2;
	ptr = ptr + 2;
	printf("%d", *ptr);
	
	--------------VEYA AYNI KOD BOYLE YAZILABILIR----------------------

	int a[] = { 2,4,6,8,10 };
	int* ptr =  &a[2];
	ptr = &a[2+2];				// &a[2+2] = &a[2] + 2;
	printf("%d", *ptr);
}
*/



/*----------------------BIR POINTERDAN BIR TAM SAYIYI CIKARMAK [TERSI YAPILAMAZ]----------------------*/



/*
int main(){
	
	int a[] = { 2,4,6,8,10 };
	int* ptr1 = &a[4];
	ptr1 = &a[4] - 1;			// &a[4] - 1 = &a[4 - 1]
	printf("%d", *ptr1);
	
	//--------------VEYA AYNI KOD BOYLE YAZILABILIR----------------------
	
	int a[] = { 2,4,6,8,10 };
	int* ptr1 = a + 4;
	ptr1 = ptr1 - 1;
	printf("%d", *ptr1);
	
	// Birde tam tersini yapmayi deneyelim.

	// Toplama isleminin yer degistirme ozelligi vardir.  2 + 3 = 5 veya 3 + 2 = 5 fakat cikarma isleminde durum boyle degildir.

	int a[] = { 2,4,6,8,10 };
	int *p = a;
	p = 2- a;

	// '-': pointer can only be subtracted from another pointer hatasini aliyoruz.	
}
*/



/*----------------------BIR POINTERDAN BIR POINTER'I CIKARMAK----------------------*/


/*
int main() {
	
	int a[] = { 2,4,6,8,10 };

	for (int i = 0; i < 5; i++)
		printf("Degeri = %d \t Adres a[%d] = %d\n", a[i], i, &a[i]);

	printf("*****************************************\n");


	int* p = a;
	int* p1 = a + 3;
	int result = p1 - p;
	printf("%d\n", result);

	// Deger pozitiftir.
	

	// ----------------------------VEYA KOD BU SEKILDE YAZILABILIR---------------------------------------

	
	int a[] = { 2,4,6,8,10 };


	for(int i = 0; i<5; i++)
		printf("Degeri = %d \t Adres a[%d] = %d\n",a[i],i,&a[i]);

	printf("*****************************************\n");


	int* p = &a[0];
	int* p1 = &a[3];
	int result = p1 - p;
	printf("%d\n",result);

	// Deger pozitiftir. 

	// Iki pointer birbirinden cikarilirken adresler arasinda cikarma yaptigimiz icin aslinda yukaridaki soruda int bu derleyicide 4 bayt yer tuttugu icin 
	// sonucun 12 olmasi gerekli fakat adresler toplanip bir pointer degiskeninde tutulamayacagi gibi yine adresler cikarilip bu adres bir pointer degiskeninde tutulamaz.
	// Bu sebeple tutulan adreslerin birisinde a[3] digerinde a[0] oldugu icin bu adreslerde bulunan dizilerin indisleri cikarilir.Ve sonra bu fark bir tam sayi
	// olacagi icin tamsayi degiskende (pointer olmayan) tutulur.
}
*/
	

	
/*
int main(){

	
	int a[] = { 2,4,6,8,10 };

	for(int i = 0; i<5; i++)
		printf("Degeri = %d \t Adres a[%d] = %d\n",a[i],i,&a[i]);

	printf("*****************************************\n");

	int* p = a;
	int* p1 = a + 3;
	int result = p - p1;
	printf("%d\n",result);

	// Deger negatiftir.

	
	// ----------------------------VEYA KOD BU SEKILDE YAZILABILIR---------------------------------------

	int a[] = { 2,4,6,8,10 };

	for(int i = 0; i<5; i++)
		printf("Degeri = %d \t Adres a[%d] = %d\n",a[i],i,&a[i]);

	printf("*****************************************\n");

	int* p = &a[0];
	int* p1 = &a[3];
	int result = p - p1;
	printf("%d\n",result);

	// Deger negatiftir.

}
*/



/*----------------------BIR POINTER ILE BIR POINTERIN TOPLANAMAYACAGINI GOSTERMEK----------------------*/



/*
int main() {

	int a[] = { 2,4,6,8,10 };

	int* p = a;
	int* p1 = a + 2;
	int* presult = p1 + p;
	printf("%p", presult);

	// Goruldugu gibi derleyici '+': cannot add two pointers hatasini bize verdi.
	// Ayrica iki pointerin toplanip (adres) bu toplanan adresin baska bir pointerda tutulamayacagini bize soyledi.
}
	
*/
	


