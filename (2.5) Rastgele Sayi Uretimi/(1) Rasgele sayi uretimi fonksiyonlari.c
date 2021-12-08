#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	C'de rastgele sayi uretiminde kullanilan 2 tane fonksiyon vardir.Bu fonksiyonlar <stdlib.h> kutuphanesindedir.
	Bu fonksiyonlarin ismi 'srand()' ve 'rand()' fonksiyonlaridir.

	int rand(void)						Herhangi bir paramatre almaz ve urettigi degerler int geri donuslu oldugu icin tam sayi degerleridir.
	void srand(unsigned int seed)	    Geri donus degeri yoktur.Ve seed = tohum degeridir.Rastgele sayi uretimi icin bir input degeri verilir ve buna gore bir output degeri alinir.
*/


int main() {

	/*
	for (int i = 0; i < 10; i++) {
		int a = rand();
		printf("a = %d\n", a);
	}

	// Rastgele sayilar uretiliyor ancak sayilarin tohum degeri olmadigi icin default olarak tohum degeri 1 aliniyor (srand())
	// ve input degeri ayni oldugu icin sayilar bir kez rastgele olarak uretilir ve sonra degismez output degerleri ayni kalir.
	*/



	/*
	for (int i = 0; i < 10; i++) {
		int a = rand() %5 + 1;			// 0 ile 5 arasinda degerlerin uretilmesi istenirse
		printf("a = %d\n", a);
	}
	*/



	/*
	srand(1);

	for (int i = 0; i < 10; i++) {
		int a = rand() %5 + 1;
		printf("a = %d\n", a);
	}

	// srand() fonksiyonu kullanilmadiginda degeri default olarak 1 olur.
	// Bu durumda program her acilip kapandiginda farkli input uretemedigi icin output lar hep ayni oluyor.
	*/



	/*
	srand(25);

	for (int i = 0; i < 10; i++) {
		int a = rand() % 5 + 1;
		printf("a = %d\n", a);
	}

	// Kod her calistirildiginda farkli output yine elde edilemeyecektir.Cunku srand() fonksiyonu her calistirildiginda fonksiyonun degeri
	// tohum degeri farkli olmalidir.Farkli output elde etmek icin farkli tohum degerleri elde girilmelidir.
	*/



	/*
		C'de time kutuphanesinde calendar time kavrami vardir.Bu kavram time programin her calisma sirasinda tohum degerinin farkli olmasini saglar.
		Calendar time bir tarihi referans alir ve orijin kabul eder.O tarihten itibaren gecen saniye sayisidir.
	*/



	/*
	srand((unsigned int)time(0));		// veya srand((unsigned int)time(NULL))			unsigned int'e cast edilir.

	for (int i = 0; i < 20; i++) {
		int c = rand() % 100;
		printf("c = %d\n", c);
	}

	// Surekli farkli bir tohum degeri aldigi icin surekli farkli bir output gelir.
	// srand() fonksiyonunun tohum degerinin bir siniri vardir.
	// Bunu goruntulemek icin <stdlib.h> kutuphanesinin icerigine bakilabilir.
	*/
}
