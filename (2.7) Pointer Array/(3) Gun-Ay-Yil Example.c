#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Kullanicidan bir tarih bilgisi alacagiz bu tarih bilgisi gun ay yil icerecek.
// Gun Ay Yil		8	2	2012	girilsin.
// Biz de bu kullanicinin girdigi tarihi		8 Subat 2012 seklinde yazdiracagiz.

int main() {

	int gun, ay, yil;
	const char* const aylar[] = { "Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik" };

	while (1) {
		printf("Gun giriniz : ");
		scanf("%d", &gun);

		if (gun > 0 && gun < 32)
			break;
	}
	
	while(1){
		printf("Ay giriniz : ");
		scanf("%d", &ay);
		
		if (ay > 0 && ay < 13)
			break;
	}
	
	printf("Yil giriniz : ");
	scanf("%d", &yil);

	printf("Girdiginiz Tarih : %d %s %d", gun, aylar[ay - 1], yil);
}

