#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		// strtok string.h kutuphanesinde bulunur



/*
	char* strok(char*str,const char*delimiters);			prototip bildirimidir.

	Bir yaziyi belirlenen karakterlere gore ayirma islemini yapar.

	Geri donus degeri ayirdigi yerdeki yazinin adresini donduruyor.Bulamazsa NULL pointer donduruyor.

	strtok()'un icinde statik omurlu bir degisken vardir ve bu degisken pozisyonu tutar.Degisken statik omurlu oldugu icin program boyunca sifirlanmaz.
	eger bu statik omurlu degiskene parametre olarak NULL pointer verilirse ayirma islemine bulundugu pozisyondan devam eder.
	Ancak string'in adresi verilirse string'in en basindan itibaren ayirma islemi yapar.

	Ayrica strtok fonksiyonu kendisi parcaladigi stringlerin sonuna otomatik olarak NULL karakter '\0' koyar.
	Stringin bittigi null karakter sayesinde anlasilir.
*/



int main() {


	/*
	char str[] = "I am an engineer";
	char* p_str;
	p_str = strtok(str, " ");			// bosluk karakterine gore ayir.

	while (p_str != NULL) {				
		puts(p_str);					
		p_str = strtok(NULL, " ");		// Yeni pozisyonu (adresi) p_str'ye at.
	}

	// NULL pointer dondurmedigi surece ayni pozisyonundan devam et ayni islemi yap.Kaldigi yerden devam icin p_str = strtok(NULL, " "); yazilir.
	*/




	/*
	char str[] = "I am an engineer";
	char* p_str;
	p_str = strtok(str, " ");			// bosluk karakterine gore ayir.

	while (p_str != NULL) {
		puts(p_str);
		p_str = strtok(str, " ");		// Ilk pozisyonu (adresi) p_str'ye at.
	}
	*/




	/*
	char text[] = "C,C++,Vhdl,Matlab.02/03/2021 Cumartesi Denizli";
	char* str;

	str = strtok(text, ",./ ");	

	while (str != NULL) {
		printf("%s\n", str);
		str = strtok(NULL, ",./ ");
	}

	// Ayirma islemi icin birden fazla karakter verilebilir.
	// Verilen karakterlerden herhangi birini gordugunde ayirma islemi yapar.
	*/




	/*
	char str[] = "usr=alper&psw=123456zA&set";
	char* s_ptr;
	char* t[5];
	char get_user_name[50];
	char get_password[50];
	int hatali_giris = 0;

	s_ptr = strtok(str, "=&");

	while (s_ptr != NULL) {

		for (int i = 0; i < 5; i++) {
			t[i] = s_ptr;
			s_ptr = strtok(NULL, "=&");
		}
		// user = t[1] = alper	  password = t[3] = 123456zA
	}

	while (hatali_giris != 3) {

		printf("User : ");
		scanf("%s", get_user_name);
		printf("Your User Name : %s\n", get_user_name);
		printf("Password : ");
		scanf("%s", get_password);
		printf("Your Password : %s\n", get_password);
		printf("************************************\n");

		if (strcmp(get_user_name, t[1]) == 0 && strcmp(get_password, t[3]) == 0) {
			printf("Welcome to our website...\n********************************\n");
			break;
		}

		else{
			hatali_giris++;
			printf("Hatali User Name Try again\nHatali Giris sayisi = %d\n", hatali_giris);
			printf("************************************\n");
		}
	}
	*/

}



