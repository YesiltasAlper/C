#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Fibonacci dizisi, her sayinin kendinden onceki ile toplanmasi sonucu olusan bir sayi dizisidir.

int fibonacci(int num){

	if (num == 0)
		return 0;
	
	else if (num == 1)
		return 1;

	else
		return(fibonacci(num - 2) + fibonacci(num - 1));
}


int main(){

	int sayi;

	printf("Kac adet sayi uretilecek : ");
	scanf("%d", &sayi);

	printf("FIBONACCI DIZISI =====>>>>\n\n");

	for (int i = 0; i < sayi; i++)
		printf("%d\t", fibonacci(i));
}
