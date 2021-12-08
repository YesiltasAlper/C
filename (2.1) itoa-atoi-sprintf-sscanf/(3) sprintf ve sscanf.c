#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//---------------------------SPRINTF VE SSCANF---------------------------

/*
	Bellek uzerinde yapilan formatli okuma yazma islemleridir.Bunlar standart fonksiyonlardir.<stdlib.h> baslik dosyasinda bulunurlar.

	// int sprintf(char *str,const char *format,....);
	// int sscanf (char *str,const char *format,....);

	1. parametresi char turden bir adres.Gelen datayi yazabilecegi bir adres.
	2. parametresi formatlama turu.
	3. parametresi variadic bir fonksiyondur

	Geri donus degerleri printf ve scanf fonksiyonlarindan farksiz degil.Ornegin printf fonksiyonunda printf'e kac karakter yaziyorsak o geri donus fonksiyonudur.
	Ornegin printf("alper"); icin geri donus degeri 5 olur.Scanf fonksiyonu icin ise buffera alinan karakter sayisiydi.scanf fonksiyonuna "alper" girilirse geri donus degeri yine 5 olur.
	Ayni seyler sprintf ve sscanf fonksiyonlarinda da gecerli ancak bunlarin yaptigi islemler farklidir.Bu fonksiyonlar bellek uzerinde islem yapacaktir
	Printf standart bir fonksiyondu ve output'a bir cikti veriyordu.Output ekran oldugu icin cikti olarak ekrana istedigimiz yaziyi yazdiriyor.
	sprintf fonksiyonunda ise yazilan yaziyi bir ciktiya vermek yerine bir bellege verecektir.sprintf gelen veriyi char turden bir yaziya yazacak.
	Printf de alper yazdigimizda standart output a veriyordu standart output ise ekran oldugundan ekranda alper yaziyordu.
	Ama sprintf kullanildiginda standart output a yazmayacak o datayi bellekte tuttugu char turden bir diziye yazacak.

*/


int main() {

	// sprintf() ----->>>


	/*
	int x = 10;
	double dval = 23.54;

	printf("%d %.2f \n", x, dval);
	*/


	/*
	char str[100];
	int x = 10;
	double dval = 23.54;

	sprintf(str, "%d %f", x, dval);		
	
	// Goruldugu gibi ekranda bir sey yazmadi o gitti datayi char str ye yazdi aslinda.Simdi onu gorelim.

	//puts(str);
	*/


	/*
	Her gelen bilgi standart output'a verilmek zorunda degildir.
	Ornegin bir bilgi geliyor data akisi oluyor o data akisini biriktirip toplamini gormek istiyoruz veya gormek istemiyoruz.
	O datalar char turden bir diziye yazilsin biz bunlarin daha sonra dokumantasyon olarak ciktisini alarak okumak isteyebiliriz.
	Oradaki bellek alaninda bunlari tutabiliriz.
	*/


	// sscanf() ----->>>


	/*
	int x;
	printf("Lutfen sayi giriniz : ");
	scanf("%d", &x);
	printf("%d", x);
	*/


	/*
	char str[100];
	int x = 10;
	sprintf(str, "%d", x);
	sscanf(str, "%d", &x);
	printf("Okunan : %d ",x);
	*/
}
