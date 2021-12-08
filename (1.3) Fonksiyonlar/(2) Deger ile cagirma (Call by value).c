#include<stdio.h>

void foo (int a){
	
	a = 200;
}

int main(){
	
	int x = 60;
	foo(x);
	printf("x = %d",x);
	
	// Kopyalama islemi yapildigi icin adresler uzerinde islem yapilmadigi icin foo(); fonksiyonundan
	// cikinca a degiskeninin omru bitmistir.Bu yuzden foo fonksiyonununda degeri degisse de fonksiyon
	// main'e geri gelince x'in degeri yine 60 olmustur degismemistir.
}
