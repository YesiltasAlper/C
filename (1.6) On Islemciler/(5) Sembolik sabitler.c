#include <stdio.h>

int main(){
	
	/*
	On tanimli sembolik sabitler bir makro cesididir.
	Sadece "#" karakteri ile baslamazlar ama o sekilde tanimlanmis gibi derleyici tarafindan kabul edilirler.
	Bunun icin "Sembolik Sabit" adi verilir.
	Makrolar ile ayni isi yaparlar ve ayni kurallar gecerlidir.Bunlarda onislemciyi ilgilendiren komutlardir.
	
	6 cesittir.
	
	1-  	__FILE__
	2-		__LINE__
	3-		__DATE__
	4-		__TIME__
	5-		__func__
		
	6-		__STDC__
	*/
	
	/*
	printf("%s\n",__FILE__);		// Kaynak dosyasinin ismini gosterir.
	
	printf("%d\n",__LINE__);		// Hangi satirda bulunuyorsa onun satir numarasini yazdirir.
	
	printf("%s\n",__DATE__);		// Ne zaman derlenmisse o zamanin tarihini yazar.
	
	printf("%s\n",__TIME__);		// Ne zaman derlenmisse o zamanin saatini yazar.
	
	printf("%s\n",__func__);		// Kod hangi fonksiyonun icinde yazilmissa o fonksiyonun adini ekrana basar.
	
	printf("%d\n",__STDC__);        // Programin Ansi C ' de yazilip yazilmadigini kontrol eder
	*/
}
