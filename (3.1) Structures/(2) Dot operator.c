#define	 _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(1)

// ----------------------------------------------DOT "."  OPERATORU---------------------------------------------

// Bu dot "." ve arrow "->" operatorleri bizim yapimizin memberlarina ulasmamizi saglayacak operatorlerdir.
// Iki tane olmasinin sebebi dot "." operatoruyle memberlara o turden yapi nesnesiyle, arrow "->" operatorunde ise
// memberlara o turden bir pointer nesnesiyle ulasabilecegiz.




/*
struct complexnumber {				// 2 double 1 int turden uyesi olan complexnumber struct

	double mx;						// Uye 1 veya Oge 1			
	double my;						// Uye 2 veya Oge 2			
	int mz;							// Uye 3 veya Oge 3	

}n1,n2;								// 2 yapi nesnesidir ve n1 ile n2 uyeleri ifade eder ornegin n1 de mx mz ve my vardir turleri de double ve int dir. Ayni sekilde n2'de de boyledir.

// Bu yapi nesneleri (n1 ve n2) kullanilarak elemanlara erisilebilir.Bunun icin DOT OPERATORU "." kullanilacaktir.
// DOT OPERATORU "." Iki operandi olan bir operatordur.Sol operandi "yapi nesnesi" sag operandi ise "yapi turunden member" dir.
// DOT OPERATORU "." 		Yapi_nesnesi.yapi_turunden_member			syntax'i boyledir.


int main() {

	n1.mx = 20.45;					// Bu bir ilk deger atamasi (initialize) degildir.Normal atama yaptik burada
	n1.mx--;
	printf("%.2f", n1.mx);
}
*/



/*
struct complexnumber {				

	double mx;									
	double my;								
	int mz;							

}n1, n2;								


int main() {

	// ORNEK - 2

	n1.mx = 20;
	n1.my = 30;
	n1.mz = 25;

	n2 = n1;						// n1'in tum uyelerini n2'ye ata demektir.	n2.mx = n1.mx		n2.my = n1.my		n2.mz = n1.mz	

	printf("n1.mx = %.2f n1.my = %.2f n1.mz = %d", n1.mx, n1.my, n1.mz);
	printf("\n");
	printf("n2.mx = %.2f n2.my = %.2f n2.mz = %d", n2.mx, n2.my, n2.mz);

	// Bunlar ayni yapi turunden oldugu icin n1,n2'ye veya n2,n1'e atanabilir.
}
*/



/*
struct complexnumber {				

	double mx;						
	double my;						
	int mz;							

}n1, n2;							


struct complexnumber2 {				

	double mx;						
	double my;						
	int mz;							

}n11, n22;		


int main() {

	n1.mx = 20;
	n1.my = 30;
	n1.mz = 25;


//  n1 = n11;						// Elemanlari ayni olmasina ragmen bu atama yapilamaz.Cunku farkli turler arasinda atama yapilamaz. n11 ve n22 kendi arasinda birbirine atanabilirken n1 ve n2 de kendi arasinda birbirine atanabilir.
//	n2 = n22;						// n1 ve n2 nesneleri struct complexnumber turunden 2 nesnedir. n11 ve n22 nesneleri struct complexnumber2 turunden 2 nesnedir.Tur


//	if (n1 == n2)					// Direkt nesneler arasinda bir kiyaslama yapilamaz.
//  	printf("Esit");
// else
//		printf("Esit Degil");


//	if (n1.mx == n2.mx)			    // Uyeler veya ogeler arasi kiyaslamalar yapilabilir.
//		printf("Esit");
//	else
//		printf("Esit degil");


//	n1.mx = 20;
//	n11.mx = 20;


//	if (n1.mx == n11.mx)			// Kiyaslamalar farkli nesne turlerinin memberlari arasinda yapilabilir.
//		printf("Esit");				// n1.mx ve n11.mx'in turu aynidir.Ikisi de int turden degiskenlerdir.
//	else
//		printf("Esit degil");
}
*/
