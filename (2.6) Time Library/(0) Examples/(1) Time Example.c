#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {


	time_t timer;
	time(&timer);

	printf("Calendar Time Saniye Degeri : %d\n", timer);

	struct tm* p = localtime(&timer);

	printf("Tarih = %d %d %d\t Saat = %d : %d : %d", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900, p->tm_hour, p->tm_min, p->tm_sec);
	
}

