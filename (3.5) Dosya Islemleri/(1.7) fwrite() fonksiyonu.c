#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Dosya erisiminde kullanilan diger iki fonksiyon fwrite() ve fread() fonksiyonlaridir.Bu fonksiyonlar daha cok toplu bir seylerin dizi struct vb. dosyaya yazilmasi ve dosyadan okunmasi icin uygundur.

	Bu fonksiyonlar ile bir dizi,dongu deyimi kullanilmadan tek bir fonksiyon cagrilmasiyla dosyaya yazilir veya dosyadan okunur.Bu islemleri formatsiz sekilde yaparlar.

	Bu iki fonksiyon dosyadan toplu bir sekilde okuma veya yazma yapar.

	Ayrica fread() ile fwrite() fonksiyonlarinda TEXT DEGIL BINARY MOD OLARAK dosyalari acmak gereklidir.


	size_t fwrite(const void * _Buffer , size_t Element_size , size_t Element_count , FILE* stream);

	size_t fread(void * _Buffer , size_t Element_size , size_t Element_count , FILE* stream);


	"fwrite() FONKSIYONU" 	===>	 size_t geri donus degeri yine EOF makrosu icindir ve basarili ise karakterin uzunlugunu tutar.Basarisiz ise NULL pointer ile geriye doner.

	1.parametre  -->> Dosyaya yazma isleminde kullanilacak kaynagin adresi
	2.parametre  -->> sizeof degeri
	3.parametre  -->> 2.parametredeki bir elemanin sizeof'undan kac adet yazilacak.

	--->>> 2. ve 3.parametrenin carpimi kadar byte toplamda dosyaya yazilir.

	4.parametre  -->> Yazilacak dosyanin FILE* turunden ismi

	fwrite() fonksiyonu dosyaya yazarken fread() fonksiyonu dosyadan okuma yapar.

	Bu fonksiyonlar binary olarak islem yaptiklari icin diger fonksiyonlara gore daha hizlidir.
*/



/*
int main() {

	char str[] = "Merhaba bugun nasilsin";

	FILE* f = fopen("name.bin", "wb");		// Dosya binary modda yazma modunda acildi.

	if (!f) {
		printf("Dosya acma basarisiz...");
		return 1;
	}


	// fwrite(str, sizeof(char), 7, f);

	//"str" dizisindeki verilerin ( sizeof(char) * 7 ) = 7 byte'lik kismi "f" degiskeninde tutulan dosyaya yazilacaktir.


	// fwrite(str, sizeof(str), 1, f);

	//"str" dizisindeki verilerin ( sizeof(str) * 1 ) = 23 byte'lik kismi (tumu) "f" degiskeninde tutulan dosyaya yazilacaktir.


	fclose(f);
}
*/




/*
typedef struct student {
	char name[20];
	char s_sname[20];
}student;


int main() {

	FILE* fs = fopen("student.dat", "wb");				// Dosya binary modda yazma modunda acildi.

	if (!fs) {
		printf("Dosya acma basarisiz...");
		return 1;
	}

	student mystudent = { "Ali" ,"Kahraman"};

	fwrite(&mystudent, sizeof(student), 1, fs);			// mystudent nesnesinin verileri fs adli dosyaya yazilir.
}
*/

