#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma pack(1)



// -------------------------------NESTED STRUCTERS-------------------------------
//	Bir structerin icinde baska bir turden structer olmasi durumuna nested structer (ic ice structer) deniyor.


/*
struct Family {
	char father_name[20];
	char mother_name[20];
	int sibling_number;
}Family;


struct Employee {
	char e_name[20];
	char e_surname[20];
	int e_identity;

	struct Family family_info;
}Employee;


int main() {

	struct Employee e1[2];
	
	strcpy(e1[0].e_name, "Alper");
	strcpt(e1[0].e_surname, "Yesiltas");
	e1[0].e_identity = 100;

	strcpy(e1[0].family_info.father_name, "Kasim");
	strcpy(e1[0].family_info.mother_name,"Gulizar");
	e1[0].family_info.sibling_number = 2;

	strcpy(e1[1].e_name, "Kaan");
	strcpt(e1[1].e_surname, "Celik");
	e1[1].e_identity = 200;

	strcpy(e1[1].family_info.father_name, "Rifat");
	strcpy(e1[1].family_info.mother_name, "Reyhan");
	e1[1].family_info.sibling_number = 4;
}
*/




// -------------------------------AYNI NESTED STRUCTERS BU SEKILDE DE YAZILABILIR-------------------------------


/*
struct Employee {
	char e_name[20];
	char e_surname[20];
	int e_identity;

	struct Family {
		char father_name[20];
		char mother_name[20];
		int sibling_number;
	};							// Burada nesne tanimlamanin anlami yok cunku en altta tanimlanan "Employee" nesnesinden
								// tum ogelere (6 tane) direkt bu kez dolayli yoldan olmadan ulasabiliriz.

}Employee;


int main() {

	struct Employee e1[2];

	strcpy(e1[0].e_name, "Alper");
	strcpt(e1[0].e_surname, "Yesiltas");
	e1[0].e_identity = 100;
	strcpy(e1[0].father_name, "Kasim");
	strcpt(e1[0].mother_name, "Gulizar");
	e1[0].sibling_number = 2;

	strcpy(e1[0].e_name, "Kaan");
	strcpt(e1[0].e_surname, "Celik");
	e1[0].e_identity = 200;
	strcpy(e1[0].father_name, "Rifat");
	strcpt(e1[0].mother_name, "Reyhan");
	e1[0].sibling_number = 4;
}
*/
