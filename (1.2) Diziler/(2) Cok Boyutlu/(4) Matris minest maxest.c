#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define     SIZE        10


int main() {

    int Matrix[SIZE][SIZE] = { 0 };
    int Matrix_satir = 0, Matrix_sutun = 0;
    int maxest, minest, eleman_toplam = 0;

    printf("Matrix satir sayisi giriniz :");
    scanf("%d", &Matrix_satir);
    printf("Matrix sutun sayisi giriniz :");
    scanf("%d", &Matrix_sutun);

    for (int i = 0; i < Matrix_satir; i++) {

        for (int j = 0; j < Matrix_sutun; j++) {

            printf("Matrix[%d][%d] degeri : ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < Matrix_satir; i++) {

        for (int j = 0; j < Matrix_sutun; j++) {

            printf("[%d]", Matrix[i][j]);
        }
        printf("\n");
    }


    maxest = Matrix[0][0];

    for (int i = 0; i < Matrix_satir; i++) {
        for (int j = 0; j < Matrix_sutun; j++) {
            if (Matrix[i][j] > maxest) {
                maxest = Matrix[i][j];
            }
        }
    }

    printf("\nMatrisin en buyuk elemani : %d\n", maxest);

    minest = Matrix[0][0];

    for (int i = 0; i < Matrix_satir; i++) {
        for (int j = 0; j < Matrix_sutun; j++) {
            if (Matrix[i][j] < minest) {
                minest = Matrix[i][j];
            }
        }
    }

    printf("Matrisin en kucuk elemani : %d\n", minest);

    for (int i = 0; i < Matrix_satir; i++) {

        for (int j = 0; j < Matrix_sutun; j++) {

            eleman_toplam += Matrix[i][j];
        }
    }

    printf("Tum elemanlarin toplami : %d\n", eleman_toplam);
}
