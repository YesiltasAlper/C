#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

int fgetc(FILE *f);			Prototip bildirim

FILE* turunden bir handle verilir ve file pointerinin degerini bir bir arttirip dosyanin sonuna gelir. Dosyanin sonu da "EOF" (End of file) makrosu ile anlasilir.

"fgetc()" ve "getc()" fonksiyonlari karakter bazinda dosyadan byte okunmasini saglar.Dosya acildiginda dosya konum gostericisi (KI) dosyada yapilacak islemin hangi konumda oldugunu gosterir.Diger adiyla imlectir.

Dosya konum gostericisi (imlec veya file pointer veya KI) asagidaki sekilde ayarlanir.

Dosya ilk acildiginda dosya konum gostericisi (File Pointer) degeri default olarak '0' dir ve dosya en bastan itibaren okunmaya baslanir.

Eger dosyanin en basindan itibaren islem yapilmasi istenmezse "fgetc()" fonksiyonuna parametre olarak ne girilen degerden itibaren File pointer konumunu alir.

*/




int main() {

	FILE* f = fopen("Alper.txt", "r");		// Alper adinda txt uzantili bir dosya

	if (f == NULL) {
		printf("Dosya Acilamadi...");
		return 1;
	}

	int ch;

	while ((ch = fgetc(f)) != EOF) {
		putchar(ch);
	}

	fclose(f);								// Dosya kapatilmalidir.

}



/*
	Ilk once dosyanin acilmasi gerektigi icin fopen() ile dosyayi read modunda actik.fopen() fonksiyonu		FILE* x fopen(const char *_FileName,const char*_mode); prototip bildirimindedir.

	FILE turunden typedef bildirimi yapilmis bir x degiskeninde tutulur ve ilk parametresi "dosya ismi.uzanti".Ikinci parametresi ise dosyanin hangi modda acilacagidir.


	----------------------------------------------------------------------------------------- DOSYA ACMA MODLARI VE ACIKLAMALARI ----------------------------------------------------------------------------


																					TEXT												BINARY MODE

																					"r"														"rb"


		DOSYA ACMA MODU												DOSYA VARSA YOKSA																		ISLEM															KI'nin KONUMU

		Read [Okumak]												Dosya varsa acilir yoksa acilmaz														Sadece OKUMA islemi												Dosya BASI


	Dosya read modunda acildigi icin eger "Alper.txt" dosyasi daha onceden olusturulmus ise dosya acilir ancak daha onceden olusturulmamissa "alper.txt" adinda bir dosya olusturulmaz ve dosya islemi basarisiz olur ve f = NULL olur.

	EOF makrosu ile dosyanin sonuna kadar okuma yapilir ve EOF'a (End of File) esit olunca dosya okuma islemi tamamlanir.

	fgetc() iki sekilde basarisiz olur.

	1 - Dosyanin sonuna gelmistir okuyacak bir sey kalmamistir -1 geri doner
	2 - Isletim sisteminin buffer'ina bir sey olursa yine basarisizlikla sonlanir cunku okuyacak bir sey bulamaz.

*/
