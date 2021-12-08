#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	fputc() fonksiyonu bir dosyaya formatsiz olarak karakter yazdiriyor.

	int__x fputc(int_character,FILE* __stream);		Prototip bildirimi.	
	
	Geri donus degerinin int olma sebebi basarisiz olma durumunda 'EOF' makrosunu '-1' degerini dondurecek.

	Birinci parametresi int turundendir cunku formatsiz oldugu icin ASCII karsiligi ile karakter yazmak ister
	
	Ornegin yani 'A' yazdirmak istersek 65 girilmelidir.

	Ikinci parametresi ise dosyanin handle'idir.
*/



/*
int main() {

	FILE* f = fopen("imageproccessing.txt", "w");		// Yazma modu

	if (!f) {
		printf("Dosya acilamadi...");
		exit(EXIT_FAILURE);
	}

	fputc(83, f);	
	fputc(69, f);
	fputc(76, f);
	fputc(65, f);
	fputc(77, f);

	fclose(f);

	// Dosya yazma modunda acildigi icin daha onceden "imageproccessing.txt"
	// adinda bir dosya olusmamis olsa bile bu dosya olusturulur.

}
*/


/*
int main() {

	FILE* f = fopen("ten_number_in_order.txt", "w");		

	if (!f) {
		printf("Dosya acilamadi...");
		exit(EXIT_FAILURE);
	}

	for (int i = 48; i < 58; i++) {
		fputc(i, f);										
	}

	for (int i = 0; i < 10; i++) {
		fputc('0'+i, f);
	}

	fclose(f);

	// Iki dongu de ayni isi yapar.
}
*/

