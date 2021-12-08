#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void sirala(int A[], int boy) {
    int temp;

    if (boy > 0) {

        for (int i = 0; i < boy; i++) {

            if (A[i] > A[i + 1]) {
                temp = A[i + 1];
                A[i + 1] = A[i];
                A[i] = temp;
            }
        }

        sirala(A, boy - 1);
    }

}


int main() {

    int n;

    printf("Kac adet sayi uretilecek : ");
    scanf("%d", &n);

    int* ptr = malloc(n * sizeof(int));

    srand(time(0));

    printf("\n**************SIRALAMA ONCESI*************\n");

    for (int i = 0; i < n; i++) {

        ptr[i] = rand() % 100;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    sirala(ptr, n - 1);

    printf("**************SIRALAMA SONRASI*************\n");

    for (int i = 0; i < n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
}
