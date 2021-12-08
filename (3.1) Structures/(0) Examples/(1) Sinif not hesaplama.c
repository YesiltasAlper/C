#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sinavda 4 yanlis 1 dogruyu goturmektedir.

struct Sinav_KagitlariTip {

	int okul_no;
	char cevap[10];
};

struct SonucTip {

	int okul_numara;
	float not;
};

int main() {

	struct SonucTip SinavSonuclari[5];
	struct Sinav_KagitlariTip Ogrenci[5] = { {1000,"ABCADBBDAB"},{1001,"CCDAABCDCA"},{1002,"ACBADDCABC"},{1003,"ABCCBDDCAB"},{1004,"ACDABBDCAC"} };
	char sinav_kagidi_cevaplari[10] = "ACDABBDCAB";

	int her_ogrencinin_yanlisi[5];
	int yanlis = 0;
	float net[5];

	// Yanlis sayisini bulan algoritma

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 10; j++) {

			if (Ogrenci[i].cevap[j] != sinav_kagidi_cevaplari[j])
				yanlis++;
		}
		her_ogrencinin_yanlisi[i] = yanlis;
		yanlis = 0;
	}


	// Net sayisini hesaplayan ve puanlandiran algoritma

	for (int k = 0; k < 5; k++) {

		net[k] = ((10 - (float)her_ogrencinin_yanlisi[k]) - ((float)her_ogrencinin_yanlisi[k] / 4));
		SinavSonuclari[k].not = net[k];
		SinavSonuclari[k].okul_numara = Ogrenci[k].okul_no;
	}


	for (int l = 0; l < 5; l++)
		printf("Toplam 10 sorudan %d okul numarali %d. ogrencinin dogrusu %d yanlisi %d neti %.2f notu: %.2f\n", SinavSonuclari[l].okul_numara, l + 1, (10 - her_ogrencinin_yanlisi[l]), her_ogrencinin_yanlisi[l], SinavSonuclari[l].not, (SinavSonuclari[l].not *10));
}
