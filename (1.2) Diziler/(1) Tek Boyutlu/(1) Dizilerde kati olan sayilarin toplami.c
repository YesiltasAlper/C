#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		SIZE		7

int main() {

	srand((unsigned int)time(NULL));

	int a[SIZE], anynumber, kat = 0, no_kat = 0, toplamkat = 0, toplamno_kat = 0;

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 20;

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	printf("Enter Any Number : ");
	scanf("%d", &anynumber);

	for (int i = 0; i < SIZE; i++) {

		if (a[i] % anynumber == 0) {

			toplamkat += a[i];
			kat++;
		}

		else

			toplamno_kat += a[i];
		no_kat++;
	}
	printf("%d'nin katindan %d tane var\n", anynumber, kat);
	printf("%d'nin kati olmayan %d tane sayi var\n", anynumber, (SIZE - kat));
	printf("%d'nin kati olan sayilarin toplami = %d\n", anynumber, toplamkat);
	printf("%d'nin kati olmayan sayilarin toplami = %d\n", anynumber, toplamno_kat);

}
