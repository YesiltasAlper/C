#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

void birlestir(int A[], int B[], int C[], int N[], int K[]);

int main() {

	int A[25], B[25], C[50], N = 0, K = 0;

	while (1) {
		printf("A dizisinin eleman sayisini giriniz (max 25) : ");
		scanf("%d", &N);

		if (N <= 25 && N > 0)
			break;
	}
	
	while (1) {
		printf("B dizisinin eleman sayisini giriniz (max 25) : ");
		scanf("%d", &K);

		if (K <= 25 && K > 0)
			break;
	}

	printf("\n");

	for (int i = 0; i < N; i++) {
		A[i] = rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("*********\n");

	for (int i = 0; i < K; i++) {
		B[i] = rand() % 100;
		printf("B[%d] = %d\n", i, B[i]);
	}

	printf("*********\n");

	birlestir(A, B, C, N, K);
}

void birlestir(int A[], int B[], int C[], int N, int K) {

	for (int j = 0; j < N; j++)
		C[j] = A[j];

	for (int l = 0; l < K; l++)
		C[N + l] = B[l];

	C[N + K] = '\0';

	for (int m = 0; m < K + N; m++)
		printf("C[%d] = %d\n", m, C[m]);

	printf("*********\n");
}
