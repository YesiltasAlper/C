#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Formul 1 Dizi elemanlarini dizi ile bulma    ==>> B[i][j] nin adresi icin	(B[i] + j)	veya (*(B + i) + j)
//												     B[i][j] nin degeri icin	*(B[i] + j)	veya *(*(B + i) + j)


// Formul 2 Dizi elemanlarini pointer ile bulma ==>> B[i][j] nin adresi icin	P + (i * size of row) + (j * size of element)
//													 B[i][j] nin degeri icin	*(P + (i * size of row) + (j * size of element))


// Formul 2'de P pointer turden bir degisken ve dizinin ilk adresini tutar.
// int Array[2][4] icin Array[0][0] = 100 adresinde olsun ve int sistemde 4 byte oldugu icin 4'er 4'er artsin.
// Ve biz Array[2][4]'un [1][3] elemanini pointer ile bulmaya calisalim.Adresi 128 bulmaliyiz.Formulu uygulayalim.


// Array[1][3] = 100 + (1 * 4*4) + (3 * 4) = 128 bulundu.Deger bulunmak istenilirse indirection "*" operatoru kullanilir.
// i = satir sayisi = 1		size of row = 1 satirin sizeof'u ve bir satirda 4 eleman var int 4 byte 4x4 = 16 byte size of row
// j = sutun sayisi = 3		size of element ise dizi int turunden ve sizeof(int) = 4 byte oldugu icin 4 byte.




void get_matrix4(int(*ptr)[4],int row) {

	for(int i = 0; i < row; i++)
		for (int j = 0; j < 4; j++) {
			printf("array[%d][%d] = ",i, j);
			scanf("%d", &ptr[i][j]);
		}
}

void print_values_of_matrix4(int(*ptr)[4], int row) {

	for (int i = 0; i < row; i++)
		for (int j = 0; j < 4; j++)
			printf("array[%d][%d] = %d\n", i, j, *(*(ptr + i) + j));
}

void print_addresses_of_matrix4(int(*ptr)[4], int row) {

	for (int i = 0; i < row; i++)
		for (int j = 0; j < 4; j++)
			printf("array[%d][%d] = %p\n", i, j, (*(ptr + i) + j));
}


int main() {

	int array[2][4];

	get_matrix4(array, 2);
	printf("\n***********VALUES****************\n");
	print_values_of_matrix4(array, 2);
	printf("\n************ADDRESSES***************\n");
	print_addresses_of_matrix4(array, 2);
}

