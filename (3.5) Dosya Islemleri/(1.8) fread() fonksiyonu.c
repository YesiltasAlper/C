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


	"fread() FONKSIYONU"	===>	size_t geri donus degeri yine EOF makrosu icindir ve basarili ise karakterin uzunlugunu tutar.Basarisiz ise NULL pointer ile geriye doner.

	1.parametre  -->> Dosyadan okunan verilerin kaydedilecegi kaynak
	2.parametre  -->> sizeof degeri
	3.parametre  -->> 2.parametredeki bir elemanin sizeof'undan kac adet okunacak

	--->>> 2. ve 3.parametrenin carpimi kadar byte toplamda dosyadan okunur

	4.parametre  -->> Okunacak dosyanin FILE* turunden ismi

	fwrite() fonksiyonu dosyaya yazarken fread() fonksiyonu dosyadan okuma yapar.

	Bu fonksiyonlar binary olarak islem yaptiklari icin diger fonksiyonlara gore daha hizlidir.
*/




int main() {

	char copy[57] = { NULL };				// Tum elemanlari baslangicta NULL olarak initialize

	FILE* f = fopen("my_file.txt", "rb");	// Dosya binary okuma modunda acilir.

	if (!f) {
		printf("Dosya acma basarisiz...");
		return 1;
	}

	/*
	fread(copy, sizeof(char), 3, f);

	printf("%s", copy);
	*/

	fclose(f);

	// Dosya binary okuma modunda acilmistir.Eger onceden dosya olusturulmazsa hata mesaji alinacaktir.Yukaridaki kodda
	// onceden var olan dosyanin icerisindeki veriler okunarak "copy" degiskeninde saklanacaktir.

	// Onceden olusturulmus "my_file" isminde dosya olsun ve dosyanin iceriginde "Merhaba" yazdigini farz edelim.
	// Bu durumda 	fread(a, sizeof(char), 3, f); fonksiyonundan sonra my_file dosyasindan ( sizeof(char) * 3) = 3 byte'lik
	// veri okunacaktir ve okunan veriler "copy" degiskeninde tutulacaktir.

	// fread(copy, sizeof(copy), 1, f);		kodu my_file dosyasindaki verilerin tumunu okuyarak copy degiskeninde
	// tutulmasini saglar.Ancak copy degiskeninin sizeof'u buna gore ayarlanmalidir.
}

