#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define		SIZE		5

typedef struct student {
	char name[20];
	char surname[20];
	int no;
}student;


int cmp(const void* vp1, const void* vp2) {
	const student* p1 = (const student*)vp1;
	const student* p2 = (const student*)vp2;

	if (strcmp(p1->name, p2->name) == 1)
		return 1;
	else if (strcmp(p1->name, p2->name) == -1)
		return -1;
	return 0;
}


int main() {

	student mathnote[SIZE] = {
		{"Zeynep","Kahraman",73},
		{"Riza","Yilmaz",76},
		{"Ali","Sever",83},
		{"Tugce","Yesil",55},
		{"Fatma","Sevmez",80},
	};

	qsort(mathnote, SIZE, sizeof(student), cmp);

	for (int i = 0; i < SIZE; i++)
		printf("%s %s %d\n", mathnote[i].name, mathnote[i].surname, mathnote[i].no);
}
