#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int seconds) {
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < seconds);
}

int main() {
	printf("Hello\n");
	delay(3);
	printf("OK...");
}


