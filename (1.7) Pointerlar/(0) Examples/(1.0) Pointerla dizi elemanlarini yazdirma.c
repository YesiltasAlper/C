#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array1(const int* a, int lenght) {
	for (int i = 0; i < lenght; i++)
		printf("%d ", a[i]);					// a[i] = *(a+i)
}



void print_array2(const int* a, int lenght) {

	const int* pend = a + lenght;
	while (a < pend) {
		printf("%d ", *a);
		a++;
	}
}



void print_array3(const int* a, int lenght) {

	while (lenght--)
		printf("%d ", *a++);
}



int main() {

	int a[] = { 2,4,6,8,10 };
	int lenght = (sizeof(a) / sizeof(a[0]));

	// print_array1(a,lenght);				// a = &a[0]							

	// print_array2(a,lenght);				// a = &a[0]
	
	// print_array3(a,lenght);				// a = &a[0]
	

}



