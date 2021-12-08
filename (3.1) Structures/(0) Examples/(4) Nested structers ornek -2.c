#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define		magaza_sayisi		2
#define		isci_sayisi			2
#define		urun_sayisi			1


struct urun {
	char urun_reference_kod[20];
	float urun_fiyat;
};

struct isci {
	char isci_ad[10];
	char isci_soyad[10];
	int isci_yas;
};

struct magaza {
	char magaza_ad[15];
	char magaza_sokak[15];
	char magaza_mahalle[15];
	char magaza_telefon[15];
	float magaza_satis;
	struct isci i[isci_sayisi];					
	struct urun u[urun_sayisi];					
};


void magaza_informations_gir(struct magaza* a) {
	printf("Magaza Ad : ");
	scanf("%s", &a->magaza_ad);
	printf("Magaza Sokak : ");
	scanf("%s", &a->magaza_sokak);
	printf("Magaza Mahalle : ");
	scanf("%s", &a->magaza_mahalle);
	printf("Magaza Telefon No : ");
	scanf("%s", &a->magaza_telefon);
	printf("Satis tutari giriniz [TL] : ");
	scanf("%f", &a->magaza_satis);
}

void isci_informations_gir(struct isci* b) {
	printf("Isci Ad : ");
	scanf("%s", &b->isci_ad);
	printf("Isci Soyad : ");
	scanf("%s", &b->isci_soyad);
	printf("Isci Yas : ");
	scanf("%d", &b->isci_yas);
}

void urun_informations_gir(struct urun* c) {
	printf("Urun Reference Kod : ");
	scanf("%s", &c->urun_reference_kod);
	printf("Urun Fiyat [TL] : ");
	scanf("%f", &c->urun_fiyat);
}

void magaza_informations_yazdir(struct magaza* aa) {
	printf("Magaza Ad : %s\n", aa->magaza_ad);
	printf("Magaza Sokak : %s\n", aa->magaza_sokak);
	printf("Magaza Mahalle : %s\n", aa->magaza_mahalle);
	printf("Magaza Telefon No : %s\n", aa->magaza_telefon);
	printf("Satis tutari [TL]: %.2f\n", aa->magaza_satis);

}

void isci_informations_yazdir(struct isci* bb) {
	printf("Isci Ad : %s\n", bb->isci_ad);
	printf("Isci Soyad : %s\n", bb->isci_soyad);
	printf("Isci Yas : %d\n", bb->isci_yas);
}

void urun_informations_yazdir(struct urun* cc) {
	printf("Urun Reference Kod : %s\n", cc->urun_reference_kod);
	printf("Urun Fiyat [TL]: %.2f\n", cc->urun_fiyat);
}


int main() {

	struct magaza magazalar[magaza_sayisi];			// x tane magaza var

	//	MAGAZA BILGILERININ GIRILMESI

	for (int i = 0; i < magaza_sayisi; i++) {
		printf("****************%d. MAGAZANIN BILGILERINI GIRINIZ******************\n", i + 1);
		magaza_informations_gir(&magazalar[i]);

		for (int j = 0; j < isci_sayisi; j++) {
			printf("\n");
			printf("%d.Isci Bilgilerini Giriniz ==> \n", j + 1);
			isci_informations_gir(&magazalar[i].i[j]);
		}

		for (int j = 0; j < urun_sayisi; j++) {
			printf("\n");
			printf("%d.Urun Bilgilerini Giriniz ==> \n", j + 1);
			urun_informations_gir(&magazalar[i].u[j]);
		}
	}

	// MAGAZA BILGILERININ YAZDIRILMASI

	system("cls");

	for (int i = 0; i < magaza_sayisi; i++) {
		printf("\n");
		printf("****************%d. MAGAZANIN BILGILERI******************\n", i + 1);
		magaza_informations_yazdir(&magazalar[i]);

		for (int j = 0; j < isci_sayisi; j++) {
			printf("\n");
			printf("%d.Isci Bilgileri ==> \n", j + 1);
			isci_informations_yazdir(&magazalar[i].i[j]);
		}

		for (int j = 0; j < urun_sayisi; j++) {
			printf("\n");
			printf("%d.Urun Bilgileri ==> \n", j + 1);
			urun_informations_yazdir(&magazalar[i].u[j]);
		}
	}
	
}

