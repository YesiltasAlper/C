#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	unsigned char buf[] = { 0xAB,0x02 };
	unsigned short val = buf[0];

	val = (val << 8);
	val = val | buf[1];

	printf("0x%X", val);

	// buf[0] (1 byte 8 bit)			  ==>> 1010 1011
	// buf[1] (1 byte 8 bit)			  ==>> 0000 0010
	// unsigned short val (2 byte 16 bit) ==>> 0000 0000 1010 1011


	// val = (val << 8)					  ==>> 1010 1011 0000 0000	yeni val.
	// val = val | buf[1]				  ==>> 1010 1011 0000 0010  yeni val.

	// Son durumda 0xAB buyuk degerlikli 8 bite kaydirildi.
	// 0x02 ise kucuk degerlikli 8 bite kaydirildi.
}


