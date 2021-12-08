#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel {

    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];

}kisiler;


void sirala(kisiler personel[], int m);
void listele(kisiler personel[], int m);


int main() {

    kisiler personel_sayisi[10];            // max 10 personel 
    int m;

    printf("Personel sayisi giriniz (max 10 kisa surmesi icin 3 giriniz): ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {

        printf("%d. Personel Sifre (4 Haneli integer) : ", i + 1);
        scanf("%d", &personel_sayisi[i].sifre);

        printf("%d. Personel Ad : ", i + 1);
        scanf("%s", &personel_sayisi[i].ad);

        printf("%d. Personel Soyad : ", i + 1);
        scanf("%s", &personel_sayisi[i].soyad);

        printf("%d. Personel Yas : ", i + 1);
        scanf("%d", &personel_sayisi[i].yas);

        printf("%d. Personel maas (TL) : ", i + 1);
        scanf("%f", &personel_sayisi[i].maas);

        printf("%d. Personel cinsiyet : ", i + 1);
        scanf("%s", &personel_sayisi[i].cinsiyet);

        printf("\n");
    }

    sirala(personel_sayisi, m);
    listele(personel_sayisi, m);

}

void sirala(kisiler personel[], int m) {

    kisiler gecici;

    for (int i = 0; i < m - 1; i++) {

        for (int j = i + 1; j < m; j++)

            if (_stricmp(personel[i].ad, personel[j].ad) > 0) {

                gecici = personel[i];
                personel[i] = personel[j];
                personel[j] = gecici;
            }
    }
}


void listele(kisiler personel[], int m) {

    printf("------ISME GORE ALFABETIK SIRALAMA SONRASI-----\n\n");

    for (int i = 0; i < m; i++) {

        printf("%d. Personel Sifre : %d\n", i + 1, personel[i].sifre);
        printf("%d. Personel Ad : %s\n", i + 1, personel[i].ad);
        printf("%d. Personel Soyad : %s\n", i + 1, personel[i].soyad);
        printf("%d. Personel Yas : %d\n", i + 1, personel[i].yas);
        printf("%d. Personel Maas : %.2f\n", i + 1, personel[i].maas);
        printf("%d. Personel Cinsiyet : %s", i + 1, personel[i].cinsiyet);
        printf("\n***************************\n");
    }
}
