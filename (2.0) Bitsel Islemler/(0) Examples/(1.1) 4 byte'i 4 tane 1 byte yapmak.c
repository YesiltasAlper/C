#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 4 byte'lik bir degisken olsun ve 4 byte'lik unsigned char dizisinde saklansin.
// Decimal number : 230150120		Hexadecimal number : DB7CFE8


int main() {

	int four_byte = 0xDB7CFE8;		// 32 bit 4 byte int -->>  0000 1101 1011 0111 1100 1111 1110 1000
	unsigned char c[4] = { 0 };		// 8  bit 1 byte char -->  0000 0000

	int bitmask = 255;				// 32 bit 4 byte int -->>  0000 0000 0000 0000 0000 0000 1111 1111

	for (int i = 0; i < 4; i++) {
		c[i] = ((four_byte & bitmask) >> i * 8);
		bitmask = (bitmask << 8);
	}

	printf("0x");

	for (int i = 3; i >= 0; i--)
		printf("%X", c[i]);

	printf("\n**************\n");

	for (int i = 3; i >= 0; i--)
		printf("C[%d] = %X\n", i, c[i]);

}


/*										
	c[0] = (four_byte & bitmask);			// c[0] = 1110 1000

	bitmask = (bitmask << 8);



	c[1] = ((four_byte & bitmask) >> 8);	// c[1] = 1110 1111

	bitmask = (bitmask << 8);


	c[2] = ((four_byte & bitmask) >> 16);	// c[2] = 1011 0111

	bitmask = (bitmask << 8);


	c[3] = ((four_byte & bitmask) >> 24);	// c[3] = 0000 1101
*/

