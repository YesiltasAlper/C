#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	fprintf() fonksiyonu ayni printf fonksiyonunun dosya versiyonudur.printf() fonksiyonu standart output'a formatli bir sekilde verileri yazdirirken fprintf() fonksiyonu dosyaya formatli veri yazdirir.

	int fprintf(FILE *const__Stream,const char *const__format...);		prototip bildirimi .

	Ilk parametre FILE* turunden dosyanin ismidir.
	ikinci parametre dosyaya yazilacak verilerin format turudur.
	Ucuncu parametre dosyaya yazilacak veriler.

	int geri donus degeri eger dosyaya yazma basarili ise dosyaya kac karakter yazildiginin degeridir.Basarisizsa NULL pointer dondurur.

	===> Eger bu printf() fonksiyonunu kullanacaksak dosyalar daima text modunda acilmalidir binary modda acilamaz.

	fprintf() fonksiyonu stdio.h kutuphanesinde bulunur.
*/


int main() {

	FILE* f = fopen("deneme.txt", "w");

	if (!f) {
		printf("Dosya acilamadi...");
		exit(EXIT_FAILURE);
	}


	/*
	fprintf(f, "%s\n%d\n%.2f\n%c\n", "Hello World", 25, 25.4, 'A');
	*/


	/*
	for (int i = 0; i < 10; i = i++)
		fprintf(f, "%d\n", i);
	*/

	fclose(f);

	// Yazma modunda acildigi icin dosya onceden olusturulmamis
	// olsa bile "deneme" isminde dosya olusturulur.
}
