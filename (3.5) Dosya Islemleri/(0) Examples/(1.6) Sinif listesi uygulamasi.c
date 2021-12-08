#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		OGRENCI_SAYISI		2

struct ogrenci {				// genel_ort  = vize1 = %20	 +  vize2 = %20	 +  final = %60

	char ad[15];
	char soyad[20];
	char ders[20];
	int vize1, vize2, final;
	float genel_ort;
};

int main() {

	char file_address[100];

	printf("File Address : ");
	scanf("%s", &file_address);

	struct ogrenci student[2];

	FILE* f = fopen(file_address, "w");

	if (!f) {
		fprintf(stderr, "%s", "Dosya Acilamadi...");
	}
	
	for (int i = 0; i < OGRENCI_SAYISI; i++) {

		printf("%d. Ogrencinin Ad : ", i + 1);
		scanf("%s", &(student[i].ad));

		printf("%d. Ogrencinin Ad : ", i + 1);
		scanf("%s", &(student[i].soyad));

		printf("%d. Ogrencinin Dersi : ", i + 1);
		scanf("%s", &(student[i].ders));

		printf("%d.Ogrencinin Vize 1 : ", i + 1);
		scanf("%d", &(student[i].vize1));

		printf("%d.Ogrencinin Vize 2 : ", i + 1);
		scanf("%d", &(student[i].vize2));

		printf("%d.Ogrencinin Final : ", i + 1);
		scanf("%d", &(student[i].final));

		printf("***********************************\n");

		student[i].genel_ort = (((student[i].vize1) * 0.2) + ((student[i].vize2) * 0.2) + ((student[i].final) * 0.6));
	}

	for (int i = 0; i < OGRENCI_SAYISI; i++) {
		fprintf(f, "%d.Ogrencinin Ortalamalari ====>>\n", i + 1);
		fprintf(f, "Ad    : %s\n", student[i].ad);
		fprintf(f, "Soyad : %s\n", student[i].soyad);
		fprintf(f, "Ders  : %s\n", student[i].ders);
		fprintf(f, "Vize1 : %d\n", student[i].vize1);
		fprintf(f, "Vize2 : %d\n", student[i].vize2);
		fprintf(f, "Final : %d\n", student[i].final);
		fprintf(f, "Ortalama : %.1f\n\n", student[i].genel_ort);
	}

	fclose(f);
}


/*
	Ornek olarak windows isletim sistemi icin ==>>

	Verilerin kaydedilmesi istenen dosya masustunde "students" isimli olsun.Bu durumda konsolda 
	"File Address" olarak "C:\\Users\\Admin\\Desktop\\students.txt"		girilmelidir..
*/
