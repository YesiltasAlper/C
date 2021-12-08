#define	 _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int mukemmelsayifonk(int sayi) {

	int i, toplam = 0;

	for (i = 2; i <= sayi; i++) {

		if (sayi % i == 0) {

			int bolum = sayi / i;
			toplam = toplam + bolum;

			if (toplam == sayi) {

				return 1;
			}
		}
	}
	return 0;
}


int main() {

	int x;

	printf("Mukemmel sayi testi icin bir tamsayi giriniz : ");
	scanf("%d", &x);

	if (mukemmelsayifonk(x) == 1)
		printf("%d sayisi mukemmeldir", x);
	else
		printf("%d sayisi mukemmel degildir", x);
}

/*
Mukemmel sayi Kendisi haric butun pozitif bolenlerinin toplami kendisine esit olan sayilara denir.
6 bir mukemmel sayidir. Cunku 6'nin pozitif bolenleri 1,2,3 ve toplamlari 6'dir.
Ornegin 28 de mukemmel sayidir. 28 = 1 + 2 + 4 + 7 + 14
*/

