#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define		SIZE		35

/*
	fputs() fonksiyonu dosyaya string yazdirir.

	int fputs(const char *_Buffer , FILE *_ Stream);		Prototip bildirimi.

	Geri donus degeri basarisiz olursa EOF = -1 ve eger basarili olursa herhangi bir pozitif deger "1" donduruyor.

	1.parametre -->> Dosyaya yazilmak istenen kaynagin adresidir.
	2.parametre -->> FILE* turunden yazma yapilacak dosyanin adresi.
*/



int main() {

	char str[SIZE] = "Merhaba bugun";

	FILE* f = fopen("new_file.txt", "w");	// Dosya yazma modunda acilmistir.Onceden olusturulmadiysa bile olusturulur.

	if (!f) {
		printf("Dosya Acilamadi...");
		return 1;
	}

	fputs(str, f);


	// Dosya olusturuldu ve yazma islemi yapildir.
	// Asagidaki kodlar dosyaya ekleme islemi yapar.

	
	char stra[SIZE] = " nasilsin umarim iyisindir.";

	FILE* fa = fopen("new_file.txt", "a");	// Dosya append modunda (ekleme) acilmistir.

	if (!fa) {
		printf("Dosya Acilamadi...");
		return 1;
	}

	fputs(stra, fa);

	fclose(f);
	
}

/*
	TEXT										BINARY MODE
	"a"												"ab"

	DOSYA ACMA MODU								DOSYA VARSA YOKSA												ISLEM														KI'nin KONUMU
	Append [Eklemek-Yazmak]						Dosya varsa acilir yoksa yeni dosya olusturulur					Sadece DOSYA SONUNA YAZMA islemi							Dosya SONU
	
	Append modunda dosya varsa acilir yoksa olusturulur ve dosyanin sonuna ekleme yapilir.
	Ilk once dosya yazma modunda acildi ve "merhaba nasilsin" yazdirildi.Daha sonra
	dosya append modda acildi ve dosyanin sonuna " nasilsin umarim iyisindir." eklendi.
*/
