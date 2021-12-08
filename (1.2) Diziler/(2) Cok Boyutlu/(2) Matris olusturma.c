#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		ROW_SIZE		5
#define		COL_SIZE		3

/*
		0	1	2
		1	2	3
		2	3	4
		3	4	5
		4	5	6

		Verilen matris'i ekranda yazdiriniz.

*/

/*
	  row	   	 col	result
	  indis     indis

		0		  0		  0
		0		  1		  1
		0		  2		  2
		1		  0		  1
		1		  1		  2
		1		  2		  3

*/

int main() {

	int a[ROW_SIZE][COL_SIZE];

	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++)
			a[row][col] = row + col;
	}

	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			printf("a[%d][%d] = %d\t ", row, col, a[row][col]);
		}
		printf("\n");
	}

}
