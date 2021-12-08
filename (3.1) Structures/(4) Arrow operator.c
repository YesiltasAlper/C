#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)

// ----------------------------ARROW "->"OPERATORU----------------------------

/*
	DOT OPERATORU "."			Syntax -->>	 	Yapi Turunden Nesne.Member

	ARROW "->" OPERATORU    	Syntax -->>	 	Yapi Turunden Pointer Nesne -> Member				
	
	Dot ile arasindaki tek fark sol operandinin yapi turunden pointer nesne olmasidir.
*/


struct Student {

	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;

}Student;

int main() {

	struct Student s1;
	struct Student* ps = &s1;					// Bu *ps struct Student turunden bir nesnenin adresini tutacak ve su an s1 nesnesinin adresini tutuyor.

	strcpy(ps->mname, "Alper");
	strcpy(ps->mlast_name, "Yesiltas");
	ps->mmath = 75;								
	ps->mchemistry = 80;
	
	printf("ps->mname : %s\nps->mlast_name : %s\nps->mmath : %d\nps->mchemistry : %d", ps->mname, ps->mlast_name, ps->mmath, ps->mchemistry);
}
