#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printBits(unsigned int value) {

	unsigned int mask = 1;		// 0000 0000 0000 0000 0000 0000 0000 0001	32 bit  
	mask = mask << 31;			// 1000 0000 0000 0000 0000 0000 0000 0000	32 bit    
								// 0000 0000 0000 0000 0000 0000 0000 1111	value			                                

	for (int i = 1; i <= 32; i++) {
		if (value & mask)
			putchar('1');
		else
			putchar('0');

		value = value << 1;

		if (i % 8 == 0)
			putchar('\t');
	}
}

int main() {
	printBits(15);
}

