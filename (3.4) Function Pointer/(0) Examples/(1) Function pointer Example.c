#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float sum(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float divv(float x, float y);

typedef float(*fptr)(float, float);

int main() {

	float n1, n2;
	int choice;

	fptr fa[] = { &sum,&sub,&mul,&divv};

	printf("****Enter two numbers****\n");
	printf("Number 1 : ");
	scanf("%f", &n1);
	printf("Number 2 : ");
	scanf("%f", &n2);

	printf("\n0 -->> sum\n1 -->> sub\n2-->>mul\n3-->>div : ");
	scanf("%d", &choice);

	float result = fa[choice](n1, n2);
	printf("Result = %.2f", result);
}

float sum(float x, float y) {
	return (x + y);
}
float sub(float x, float y) {
	return (x - y);
}
float mul(float x, float y) {
	return (x * y);
}
float divv(float x, float y) {
	if (y != 0)
		return (x / y);
	else
		exit(EXIT_FAILURE);
}

