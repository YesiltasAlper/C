#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define		ROW_SIZE		4
#define		COL_SIZE		3

int main() {

	int a[ROW_SIZE][COL_SIZE] = { {1,2,3},				//		a[0][0] = 1      a[0][1] = 2       a[0][2] = 3
								  {4,5,6},				//		a[1][0] = 4      a[1][1] = 5       a[1][2] = 6
								  {7,8,9},				//		a[2][0] = 7      a[2][1] = 8       a[2][2] = 9
								  {0,0,0} };			//		a[3][0] = 0      a[3][1] = 0       a[3][2] = 0


	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			printf("a[%d][%d] : ", row, col);
			scanf("%d", &a[row][col]);
		}

	}


	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			printf("a[%d][%d] = %d\t ", row, col, a[row][col]);
		}

		printf("\n");
	}

}

