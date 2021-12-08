#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define	ekip_sayisi		2
#define oyuncu_sayisi	2

struct oyuncu {

	char isim[20];
	char soyisim[20];
	int yas;
};

struct equipe {

	char ekip_isim[20];
	struct oyuncu oyuncu1;
	struct oyuncu oyuncu2;
};

void ekibi_olustur(struct equipe* e);
void oyuncuyu_olustur(struct oyuncu* j);
void ekibi_ekrana_yazdir();
void oyuncuyu_ekrana_yazdir();

int main() {

	struct equipe tab[ekip_sayisi];

	for (int i = 0; i < ekip_sayisi; i++) {
		printf("*******************************\n");
		printf("Ekip %d : \n", i + 1);
		ekibi_olustur(&tab[i]);
	}

	system("cls");
	printf("*********EKIP BILGILERI************\n\n");
	for (int i = 0; i < ekip_sayisi; i++) {
		printf("Ekip %d : \n", i + 1);
		ekibi_ekrana_yazdir(&tab[i]);
	}
}

void ekibi_olustur(struct equipe* e) {

	printf("Ekibin adini giriniz : ");
	scanf("%s", &e->ekip_isim);
	printf("Oyuncu 1 : \n");
	oyuncuyu_olustur(&e->oyuncu1);
	printf("Oyuncu 2 : \n");
	oyuncuyu_olustur(&e->oyuncu2);
}

void oyuncuyu_olustur(struct oyuncu* j) {

	printf("Oyuncu isim : ");
	scanf("%s", &j->isim);					
	printf("Oyuncu soyisim : ");
	scanf("%s", &j->soyisim);
	printf("Oyuncu yas : ");
	scanf("%d", &j->yas);					
	printf("\n");

}

void ekibi_ekrana_yazdir(struct equipe* h) {

	printf("Ekip Isim : %s\n", h->ekip_isim);
	printf("*******************\n");
	printf("Oyuncu 1 : \n");
	oyuncuyu_ekrana_yazdir(&h->oyuncu1);
	printf("Oyuncu 2 : \n");
	oyuncuyu_ekrana_yazdir(&h->oyuncu2);

}

void oyuncuyu_ekrana_yazdir(struct oyuncu* k) {
	printf("Isim : %s\n", k->isim);
	printf("Soyisim : %s\n", k->soyisim);
	printf("Yas : %d\n", k->yas);
	printf("\n");
}
