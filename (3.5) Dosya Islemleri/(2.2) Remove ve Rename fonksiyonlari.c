#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	=====> "remove" ve "rename" fonksiyonlari

	Remove fonksiyonu bir dosyayi siler.					int remove(const char *_FileName);			prototip bildirim.

	Ismini aldigi bir dosyayi siler ve eger silme islemi basarili ise "0" dondurur.Basarisizsa "0 disinda" bir deger dondurur.
	Tek parametresi silinecek olan dosyanin ismi.


	Rename fonksiyonu bir dosyayi yeniden adlandiriyor.		int rename(const char *_OldFileName , const char *_NewFileName);	prototip bildirim.

	Ismini aldigi bir dosyayi yeniden isimlendirir. Islem basarili ise "0" basarisiz ise "0 disinda bir deger" dondurur.
	Ilk parametre dosyanin su anki ismi ikinci parametre dosyanin yeni ismi.
*/


int main() {

	/*
	// Onceden "deneme" isminde "txt" uzantili dosyanin olmasi gereklidir.

	int file_state1 = remove("deneme.txt");

	if (file_state1 != 0) {
		printf("Dosya silme islemi basarisizdir...");
	}
	else
		printf("Dosya silme islemi basarilidir...");
	*/
	
	

	/*
	// Onceden "file" isminde "txt" uzantili dosyanin olmasi gereklidir.

	int file_state2 = rename("file.txt", "filenew.txt");

	if (file_state2 != 0) {
		printf("Dosyaya isim verme islemi basarisizdir...");
	}
	else
		printf("Dosyaya isim verme islemi basarilidir...");
	*/
}

