/*
	3 garson haftanin 5 gunu max 100 tl ye kadar bahsis alir.Biz bu bahsisleri her garsona 5 gun olarak atanacaktir ve bunlari 3x5 matris
	seklinde ekrana yazdirilacaktir.Ardindan garsonlarin haftalik toplam bahsislerini ekrana yazdirilacaktir.
	Daha sonra sirasiyla hangi garson en fazla bahsisi almis en fazla bahsis kac tl ve hangi gun en fazla bahsis alinmis bu veriler yazdirilacaktir.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define		GARSON_SAYISI		3

const char* const pdays[] = { "pazartesi", "sali", "carsamba", "persembe", "cuma" };
int* dynamic_array = NULL;

void bahsis_giris(int(*ptr)[5], int row) {

	srand((unsigned int)time(0));

	for (int i = 0; i < row; i++)
		for (int j = 0; j < 5; j++)
			ptr[i][j] = rand() % 100;
}

void print_bahsis(const int(*ptr)[5], int row) {

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%4d", ptr[i][j]);
		printf("\n");
	}
}


int* waiters_week_tip(int(*ptr)[5], int row) {

	int sum = 0;
	dynamic_array = (int*)malloc(sizeof(int) * row);

	if (dynamic_array == NULL) {
		printf("Basarisiz...");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < row; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++)
			sum += ptr[i][j];		// 1.garson haftalik ==>> sum += ptr[0][0]	 sum += ptr[0][1]	 sum += ptr[0][2]	 sum += ptr[0][3]	 sum += ptr[0][4]	
									// 2.garson haftalik ==>> sum += ptr[1][0]	 sum += ptr[1][1]	 sum += ptr[1][2]	 sum += ptr[1][3]	 sum += ptr[1][4] ...	
		*(dynamic_array + i) = sum;
	}

	return dynamic_array;
}


const char* getMaxTip(const int(*ptr)[5], int row, int* waiter, int* maxtip) {

	const char* maxTipDay = pdays[0];
	*waiter = 0;
	*maxtip = ptr[0][0];

	int i = 0, j = 0;

	for (i = 0; i < row; i++)
		for (j = 1; j < 5; j++)
			if (ptr[i][j] > *maxtip) {
				*maxtip = ptr[i][j];
				*waiter = i + 1;		// garson o satirin i. indisidir.
				maxTipDay = pdays[j];	// sutun ise hangi gun oldugudur.
			}

	return maxTipDay;
}


int main() {

	int array[GARSON_SAYISI][5];	// GARSON_SAYISI garson 5 gun bahsis aliyor.

	bahsis_giris(array, 3);
	print_bahsis(array, 3);

	int* dizi = waiters_week_tip(array, 3);

	printf("\n");

	for (int i = 0; i < 3; i++)
		printf("%d.Waiter's weekly earning : %d tl\n", i + 1, dizi[i]);

	free(dynamic_array);

	printf("\n");

	int waiter = 0, maxTip = 0;

	const char* day = getMaxTip(array, 3, &waiter, &maxTip);

	printf("Bir gunde cok bahsis alan %d.garson\nMiktar : %d tl\nGun : %s\n", waiter, maxTip, day);
}
