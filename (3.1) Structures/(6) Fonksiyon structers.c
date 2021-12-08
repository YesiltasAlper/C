#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)


// ----------------------------STRUCTURES WITH FUNCTION-------------------------------
// ---------------------------CALL BY VALUE ILE STRUCTERS-----------------------------



/*
struct Student{

	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;

}Student;

void print_(const struct Student s) {
	printf("Name : %s		Surname : %s		Mathexam : %d %d %d			Student_no : %d", s.m_name,s.m_surname,s.m_mathexam[0],s.m_mathexam[1],s.m_mathexam[2],s.m_student_no);
}

int main() {

	struct Student s1 = { "Ali","Kahraman",{40,70,95},159 };
	print_(s1);

	// const keyword kullanilma sebebi sadece salt okuma yapilmistir elemanlarinda bir degisiklik yapilmamistir.
}
*/



/*
struct Student {

	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;

}Student;

void print_(const struct Student s) {
	printf("Name : %s		Surname : %s		Mathexam : %d %d %d			Student_no : %d", s.m_name, s.m_surname, s.m_mathexam[0], s.m_mathexam[1], s.m_mathexam[2], s.m_student_no);
	strcpy(s.m_name, "zafer");					// Burada aslinda const keywordu syntax hatasi verir bu kod olmamalidir olma sebebi ise sadece Call By Value'da degerin degismeyecegini gostermek icindir.
}

int main() {

	struct Student s1 = { "Ali","Kahraman",{40,70,95},159 };
	print_(s1);

	printf("\n");

	printf("%s", s1.m_name);

	// Bu yapi "Call By Value" yapisi oldugu icin bu nesnenin uzerinde bir degisIklik olmadi.
	// s1.m_name = Ali idi ve yukarida zafer atamasi yapilsa bile adres uzerinde islem yapilmadigi icin degismeyecektir.
	// Bu sebeple s1.m_name = Ali olacak zafer olmayacak.
}
*/



// ----------------------------STRUCTURES WITH FUNCTION-------------------------------
// -------------------------CALL BY REFERENCE ILE STRUCTERS----------------------------




/*
struct Student {

	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;

}Student;

void print_pointer(const struct Student *ps) {

	printf("Name : %s		Surname : %s		Mathexam : %d %d %d			Student_no : %d", ps->m_name, ps->m_surname, ps->m_mathexam[0], ps->m_mathexam[1], ps->m_mathexam[2], ps->m_student_no);
	strcpy(ps->m_name, "zafer");
}

int main() {

	struct Student s1 = { "Ali","Kahraman",{40,70,95},159 };
	print_pointer(&s1);

	printf("\n");
	printf("\n%s", s1.m_name);

	// Call by reference yapisinda adresler uzerinde islemler yapildigi icin isim degismistir.
}
*/




// ----------------------------STRUCTURES WITH FUNCTION-------------------------------
// ----------------------------------RETURN ORNEK-------------------------------------

 
 
/*
struct Data {

	int x, y;

}Data;


struct Data foo(struct Data s) {
	return s;
}

int main() {

	struct Data veri1 = { 20,30 };
	struct Data veri2 = foo(veri1);

	printf("veri2.x = %d\nveri2.y = %d", veri2.x, veri2.y);
}
*/


