#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		SIZE		7

// Ornek olarak a[0] = 5	a[1] = 10	a[2] = 15	a[3] = 20	a[4] = 25	a[5] = 30	a[6] = 35 		
// Seklindeki dizileri a[0] ile a[6] ' yi a[1] ile a[5] 'i a[2] ile a[4]'u yer degistirilir.   	


int main() {

	srand(time(NULL));

	int a[SIZE];

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 50;

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	for (int i = 0; i < SIZE / 2; i++) {
		int temp = a[i];
		a[i] = a[SIZE - 1 - i];
		a[SIZE - 1 - i] = temp;
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

}
