#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define			MATRIX_MAX		10

int main() {

	int row1, row2, col1, col2;

	printf("Enter first row of Matrix1 : ");
	scanf("%d", &row1);
	printf("Enter first column of Matrix1 : ");
	scanf("%d", &col1);
	printf("\n");

	int matrix1[MATRIX_MAX][MATRIX_MAX] = { 0 };
	int matrix2[MATRIX_MAX][MATRIX_MAX] = { 0 };
	int matrix3[MATRIX_MAX][MATRIX_MAX] = { 0 };

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			printf("Enter %d. row and %d. column : ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			printf("[%d]\t", matrix1[i][j]);
		}
		printf("\n");
	}

	printf("\n");


	printf("Enter first row of Matrix2 : ");
	scanf("%d", &row2);
	printf("Enter first column of Matrix2 : ");
	scanf("%d", &col2);
	printf("\n");



	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			printf("Enter %d. row and %d. column : ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			printf("[%d]\t", matrix2[i][j]);
		}
		printf("\n");
	}

	if (col1 != row2) {
		printf("First Matrix's col and Second Matrix's row must be equal");
		return 0;
	}


	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			int temp = 0;
			for (int k = 0; k < col1; k++) {
				temp += matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = temp;
		}

	}

	printf("\nMATRIX RESULT\n");

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			printf("[%d]\t", matrix3[i][j]);
		}
		printf("\n");
	}



}
