#include <stdio.h>
#include <time.h>
#include<math.h>

/*
	Prototip Bildirimi ==>>	clock_t clock(void);

	Clock fonksiyonu main() calismaya basladigi andan itibaren,clock fonksiyonunun yazildigi yere kadar gecen sureyi tutar.
	Ornegin clock fonksiyonuna 12. satirda cagri yapilsin ve main()'de 6. satirda calismaya baslasin.Bu durumda 6 ve 12. satirlar arasi gecen sure.

	Start point'de cagri yaptigimizda main basladigindan itibaren bize "tick count" verecek.
	Bu tick suresi sistemden sisteme degisir.Saniyeye cevirmek icin "/CLOCKS_PER_SEC" Makrosu kullanilir.
*/


int main() {

	int a = 15, b = 45;

	float x;
	printf("Calculating...\n");

	clock_t start = clock();						// 16. satirdan 23. satira kadar gecen tick count start degiskeninde tutulur.		
	for (int i = 0; i < 200'000; i++)				// ikiyuz bin yazim seklidir.
		x = sqrt(pow(i, 6));
	clock_t end = clock();							// 16. satirdan 26. satira kadar gecen tick count end degiskeninde tutulur.		

	clock_t result = end - start;					// Farklari ise 23 ve 26. satirlar arasindaki kodun islem suresini verir.

	printf("%f seconds\n", (double)result / CLOCKS_PER_SEC);		//	"/CLOCKS_PER_SEC" Makrosu saniyeye donusturur.

	// Double type casting islemi "/CLOCKS_PER_SEC" makrosu gelen sayiyi (result) 1000'e bolerek saniyeye cevirir.
	// Double'a cast edilmezse ondalikli kismini almayacaktir..
}
