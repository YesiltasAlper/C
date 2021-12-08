#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		SIZE_ARRAY		8
#define		SIZE_LEN		10

int main() {
	
	/*
	char ege_area[SIZE_ARRAY][SIZE_LEN] = { "Izmir","Aydin","Mugla","Manisa","Denizli","Usak","Kutahya","Afyon"};

	for (int i = 0; i < SIZE_ARRAY; ++i)
		printf("City : %s	Adress : %p \n", ege_area[i], &ege_area[i]);

	printf("%zu", sizeof(ege_area));

	// Bu kodda uzunlugu max 10 byte olabilen ve max 8 tane olabilen sehir isimleri tanimlanmistir.


	//	ege_area[0][0] = 'I'	ege_area[0][1] = 'z'	ege_area[0][2] = 'm'	ege_area[0][3] = 'i'	ege_area[0][4] = 'r'
	//	ege_area[1][0] = 'A'	ege_area[1][1] = 'y'	ege_area[1][2] = 'd'	ege_area[1][3] = 'i'	ege_area[1][4] = 'n'
	//	ege_area[2][0] = 'M'	ege_area[2][1] = 'u'	ege_area[2][2] = 'g'	ege_area[2][3] = 'l'	ege_area[2][4] = 'a'
	//	ege_area[3][0] = 'M'	ege_area[3][1] = 'a'	ege_area[3][2] = 'n'	ege_area[3][3] = 'i'	ege_area[3][4] = 's'	ege_area[3][5] = 'a'
	//	ege_area[4][0] = 'D'	ege_area[4][1] = 'e'	ege_area[4][2] = 'n'	ege_area[4][3] = 'i'	ege_area[4][4] = 'z'	ege_area[4][5] = 'l'	ege_area[4][6] = 'i'
	//	ege_area[5][0] = 'U'	ege_area[5][1] = 's'	ege_area[5][2] = 'a'	ege_area[5][3] = 'k'
	//	ege_area[6][0] = 'K'	ege_area[6][1] = 'u'	ege_area[6][2] = 't'	ege_area[6][3] = 'a'	ege_area[6][4] = 'h'	ege_area[6][5] = 'y'	ege_area[6][6] = 'a'
	//	ege_area[7][0] = 'A'	ege_area[7][1] = 'f'	ege_area[7][2] = 'y'	ege_area[7][3] = 'o'	ege_area[7][4] = 'n'


	//	ege_area[0] = "Izmir"
	//	ege_area[1] = "Aydin"
	//	ege_area[2] = "Mugla"
	//	ege_area[3] = "Manisa"
	//	ege_area[4] = "Denizli"
	//	ege_area[5] = "Usak"
	//	ege_area[6] = "Kutahya"
	//	ege_area[7] = "Afyon"
	*/



	/*
	const char* const ege_area[SIZE_ARRAY] = { "Izmir","Aydin","Mugla","Manisa","Denizli","Usak","Kutahya","Afyon" };

	for (int i = 0; i < SIZE_ARRAY; ++i)
		printf("ege_area[%d] = %s\n",i, ege_area[i]);

	// Ayni isi yapan diger bir syntax
	// String literalleri degistirilemez olduklari icin pointerlarla kullanilirken const koyulmalidir.
	*/



	/*
	const char* const ege_area[SIZE_ARRAY] = { "Izmir","Aydin","Mugla","Manisa","Denizli","Usak","Kutahya","Afyon" };
	char sehir[10];
	int flag = 0;
	int i;

	printf("Bir sehir adi giriniz : ");
	scanf("%s", sehir);

	for (i = 0; i < SIZE_ARRAY; i++) {

		if (stricmp(ege_area[i], sehir) == 0) {

			flag = 1;
			break;
		}

	}

	if (flag)
		printf("%s isimli sehir ege bolgesinde ve index = %d",sehir,i);
	else
		printf("%s isimli sehir ege bolgesinde degil", sehir);
	*/
}

