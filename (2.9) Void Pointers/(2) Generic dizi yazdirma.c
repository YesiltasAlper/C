#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define    SIZE		5

// Dizinin turu ne olursa olsun o dizinin elemanlari ekrana yazdirilacaktir.

//	0 ---------> double		8 byte
//	1 ---------> int		4 byte
//	2 ---------> char		1 byte
//	3 ---------> float		4 byte


void generic_print_array(const void* vp, size_t size, int type);


int main() {

	double b[SIZE] = { 2.511,3.4414,7.4654,7.5321,1.5245 };
	int a[SIZE] = { 4,7,11,14,17 };
	char c[SIZE] = { 'a','b','c','d','e' };
	float d[SIZE] = { 6.54,4.42,3.33,9.57,8.87 };

	printf("Double Array == > \n");
	generic_print_array(b, SIZE, 0);
	printf("\n\n");

	printf("Integer Array == > \n");
	generic_print_array(a + 2, (SIZE - 2), 1);	
	printf("\n\n");

	printf("Char Array == > \n");
	generic_print_array(c, SIZE, 2);
	printf("\n\n");

	printf("Float Array == > \n");
	generic_print_array(d - 1, (SIZE - 1), 3);
	printf("\n\n");
}

void generic_print_array(const void* vp, size_t size, int type) {

	for (int i = 0; i < size; i++) {

		switch (type) {

		case 0:
			printf("%.3f\t", *((double*)vp + i));
			break;

		case 1:
			printf("%d\t", *((int*)vp + i));
			break;

		case 2:
			printf("%c\t", *((char*)vp + i));
			break;

		case 3:
			printf("%.2f\t", *((float*)vp + i));
			break;

		default:
			printf("Yanlis deger...");
		}
	}
}

