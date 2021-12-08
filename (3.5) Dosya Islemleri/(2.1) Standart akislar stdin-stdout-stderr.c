#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	C programlama dilinde giris cikis islemlerine stream denir.

	Bu akislar aslinda birer dosyadir ve C programi calistigi surece bizim kullanmamiz icin bu dosyalar aciktir.
	
	Standart akis turleri 3 tanedir ve bunlar "stdin" "stdout" "stderr" dir.stdio.h kutuphanesinde bulunur ve turu FILE* turundendir.

	Bunlar birer dosya olmakla birlikte programlarimizin icinde ozel olarak kullanabilecegimiz ozel identifier lardir.

	Programa bir input bir veri girildiginde herhangi bir veri akisi olursa byte akislarina "input stream stdin" denir.

	Programdan disari dogru akan byte akislarina ise "output stream stdout" denir.
	
	Standart hata akislarina ise "hata stream stderr" denir.

	stdin okuma amacli kullanilirken stdout yazma amacli kullanilir.stderr ise standart hata akisidir hata durumunda kullanilir.
*/





// =====================> "stdout" <=====================


/*
	=====> "stdout" standart cikis akimini temsil eden dosyadir ve yazma amacli kullanilir.

	printf fonksiyonu ile bir veri yazildiginda bu veri icin ilk once "stdout" isimli akisa yazma yapilir ve sonra standart output'a yazilir.

	printf() fonksiyonuna yazilan veri ilk once stdout stream'ine gider.

*/

/*
int main() {

	// fprintf()'in ilk parametresi FILE* turunden dosyanin handle'i."stdout" "stdin" "stderr" bu standart akislar FILE* turunden oldugu icin fprintf()'in ilk parametresi olarak "stdout" uygundur.

	fprintf(stdout, "%s\n", "hello world");

	fputs("selam\n", stdout);

	fputc('A', stdout);

	// Dosyaya yazmamasinin ve ekrana yazmasinin sebebi "stdout"'un turu FILE*'dir.Bu sebeple FILE* turunden parametre alan
	// "fprintf()" "fputs()" "fputc" fonksiyonlari kullanildi. "stdout" standart output'a cagri yaptigi icin ekrana "hello world" yazar.
}
*/





// =====================> "stdin" <=====================


/*
	=====> "stdin" standart giris akimini temsil eden dosyadir ve okuma amacli kullanilir.

	scanf fonksiyonu ile buffer'a veri girisi oldugunda bu veri icin ilk once "stdin" isimli akisa yazma yapilir ve sonra standart input'a yazilir.

	scanf() fonksiyonu standart input'dan girilen verileri okumak icin ilk once "stdin" isimli akisa cagri yapar.
*/


/*
int main() {

	char x[50];
	fprintf(stdout, "%s", "Bir kelime giriniz : ");
	fscanf(stdin, "%s", &x);
	fprintf(stdout, "kelime : %s", x);

}
*/





// =====================> "stderr" <=====================


/*
int main() {

	//FILE* f = fopen("abcd.txt", "w");
	//if (!f) {
		//printf("Dosya acilamadi...");
		//return 1;

	// Yukaridaki kodda printf() kullanildi ama printf() standart output icin kullaniliyor.Boyle kullanilmasinda bir sakinca olmamasina ragmen standart hata
	// akisi icin "stderr" kullanmak daha verimlidir.

	FILE* f = fopen("abcd125.txt", "rb");
	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
		return 1;
	}

}
*/
