#include<stdio.h>

int main(){
	
	/*
    Tam sayi sabitlerindeki default veri turu "int" dir.
    Ornek olarak 21; sayisi tanimlandiginda 21 sayisinin "int" turunde oldugunu derleyici soyleyecektir.
    
    
    1288; 		int tanimlidir [DEFAULT]						  int x = 1288;
    
	1288U;		unsigned int tanimlidir						   	  unsigned int x = 1288;
	 
	1288L;		long int tanimlidir							  	  long int x = 1288;
	
	1288UL;		unsigned long int tanimlidir					  unsigned long int x = 1288;
	
	1288LL;		long long int tanimlidir						  long long int x = 1288;
	
	1288ULL;  	unsigned long long int tanimlidir                 unsigned long long int x = 1288;
    
    
    Fakat int veri turunun tutabilecegi max sayi gecilirse o zaman derleyici kendisi long long turune donusturur.
    */
    
    
    
    /*
    Gercel sayi sabitlerindeki default veri tur "double" dir.
    Ornek olarak 21.0; veya 38.45; sayisi tanimlandiginda bu sayinin "double" turunde oldugunu derleyici soyleyecektir.
    
    
    1288.0; 	double tanimlidir [DEFAULT]						  double x = 1288.0;
    
	1288.0F;	float tanimlidir						 		  float x = 1288.0;
	
	1288.0L;	long double  tanimlidir							  long double x = 1288.0;
    */
    
    
    
    //-----------------------------------------C'DE BILIMSEL GOSTERIM-------------------------------------------
    
    /*
    int x = 10e2;					// x = 10 * 10 ^ 2; 	   ==>		x = 1000;		[ e = 10^ Anlamindadir.]
    int x = 1e1;				    // x = 1 * 10 ^ 1; 		   ==>      x = 10;			[ e = 10^ Anlamindadir.]
    double x = 1e-3;				// x = 1 * 10 ^ -3;		   ==>      x = 0.01; 		[ e = 10^ Anlamindadir.]
    */
    
    
    
    //-----------------------------------------C'DE SAYI SISTEMLERI-------------------------------------------
    
	/*
    BINARY     	   DECIMAL             OCTAL               HEXADECIMAL             olmak uzere 4 cesit sayi aritmetigi bulunur

    DECIMAL veri turu icin "OB" ifadesinden sonra yazilacak "0" ve "1" ler 2 lik sayi sistemini gosterir.
	Fakat dikkat edilmelidir ki binary sayi sistemi her derleyici de olmaz.C,standart olarak icinde bulundurmaz.
	Eger C dilinde bir derleyici buna sahipse bu "Extension" yani "Uzanti" olarak derleyiciye eklenmistir.
	Asagidaki 2 lik tabanda yazim sekli her derleyicide calismayabilir.
    */



    //-----------------------------------------BINARY SAYI SISTEMI ICIN-------------------------------------------

    /*
    int y = 0B1011;     // Binary sayi sisteminde yazilis 
    printf("%d", y);    // Binary yazilan sayiyi Decimal olarak ekrana bastirma
    */



    //-----------------------------------------DECIMAL SAYI SISTEMI ICIN-------------------------------------------

    /*
    int y = 25;         // Decimal sayi sisteminde yazilis 
    printf("%d", y);    // Decimal yazilan sayiyi Decimal olarak ekrana bastirma
    */



    //-------------------------------------------OCTAL SAYI SISTEMI ICIN-------------------------------------------

    /*
    int y = 054;        // Octal sayi sisteminde yazilis 
    printf("%d", y);    // Octal yazilan sayiyi Decimal olarak ekrana bastirma
    					// "%d" format belirleyicisi,sayiyi Decimal tabanda ekrana bastirir
    */


    /*
    int a = 054;        // Octal sayi sisteminde yazilis 
    printf("%o",a);     // Octal yazilan sayiyi Octal olarak ekrana bastirma
                        // "%o" format belirleyicisi,sayiyi Octal tabanda ekrana bastirir
    */


    /*
    int b = 127;        // Decimal sayi sisteminde yazilis 
    printf("%o", b);    // Decimal yazilan sayiyi Octal olarak ekrana bastirma
    */
    
    
    
    //-----------------------------------------HEXADECIMAL SAYI SISTEMI ICIN-------------------------------------------

    /*
    int y = 0x24F;      // Hexadecimal sayi sisteminde yazilis 
    printf("%d", y);    // Hexadecimal yazilan sayiyi Decimal olarak ekrana bastirma
    */


    /*
    int a = 0x24F;      // Hexadecimal sayi sisteminde yazilis 
    printf("%x",a);     // Hexadecimal yazilan sayiyi Hexadecimal olarak ekrana bastirma
                        // "%x" format belirleyicisi,sayiyi Hexadecimal tabanda ekrana bastirir
    */


    /*
    int b = 127;        // Decimal sayi sisteminde yazilis 
    printf("%x", b);    // Decimal yazilan sayiyi Hexadecimal olarak ekrana bastirma
                        // "%x" format belirleyicisi,sayiyi Hexadecimal tabanda ekrana bastirir
    */
    
}
