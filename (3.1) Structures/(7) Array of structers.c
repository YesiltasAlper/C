#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)

// ----------------------------ARRAYS OF STRUCTERS----------------------------

//	Structers dizi de olabilir.Dizilerin turleri int double char... olabildigi gibi yapi turunden de (structers) olabilirler.


struct Student {
	char mname[20];
	char mlast_name[20];
	int mmath;

}Student;


int main() {

	/*
	struct Student s1;										// Bu yapi nesnesi dizi de olabilir.
	struct Student primary_school_student[3];				// Burada 0-1-2. indislerinde yukaridaki 3 bilgi yer alacak. Yani toplam 9 bilgi.

	strcpy(primary_school_student[0].mname, "Alper");
	strcpy(primary_school_student[0].mlast_name, "Yesiltas");
	primary_school_student[0].mmath = 80;

	strcpy(primary_school_student[1].mname, "Riza");
	strcpy(primary_school_student[1].mlast_name, "Kara");
	primary_school_student[1].mmath = 70;

	strcpy(primary_school_student[2].mname, "Ali");
	strcpy(primary_school_student[2].mlast_name, "Celik");
	primary_school_student[2].mmath = 60;
	
	for (int i = 0; i < 3; i++) {
		printf("mname[%d] = %s\nnmlast_name[%d] = %s\nmmath[%d] = %d\n", i, primary_school_student[i].mname, i, primary_school_student[i].mlast_name, i, primary_school_student[i].mmath);
		printf("****************************\n");
	}
	*/



	/*
	struct Student primary_school_student[3] = { {"merve","kahraman",75},{"ali","temiz",80},{"hilal","selim",75} };			
	
	// Yeni bir degisken olusturuldu ve initialize edildi.

	for (int i = 0; i < 3; i++) {
		printf("mname[%d] = %s\nnmlast_name[%d] = %s\nmmath[%d] = %d\n", i, primary_school_student[i].mname, i, primary_school_student[i].mlast_name, i, primary_school_student[i].mmath);
		printf("****************************\n");
	}
	*/



	/*
	// Veya ilk deger verme islemi asagidaki gibi de olabilir.

	
	struct Student {
		char mname[20];
		char mlast_name[20];
		int mmath;

	}primary_school_student[3] = { {"merve","kahraman",75},{"ali","temiz",80},{"hilal","selim",75} };			// Bu sekilde de olabilir.

	for (int i = 0; i < 3; i++) {
		printf("mname[%d] = %s\nnmlast_name[%d] = %s\nmmath[%d] = %d\n", i, primary_school_student[i].mname, i, primary_school_student[i].mlast_name, i, primary_school_student[i].mmath);
		printf("****************************\n");
	}

	// Bu kod bir yukaridaki kod parcacigi ile ayni isi yapmaktadir.
	*/
}
