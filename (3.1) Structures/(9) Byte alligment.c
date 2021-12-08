#include <stdio.h>

/*
	Islemcinin kelime uzunlugu (instruction set) : Islemcinin bir defada isleme sokabildigi kelime buyuklugudur.
	Biz genelde islemcilerde goruruz 64 bit - 32 bit - 16 bit gibi iste bunlar islemcinin bir defada isleme sokabildigi tam sayi buyuklugu yani islemci bir seferde 64 bitlik 8 byte lik bir islem yapabiliyor.
	Islemciler icin kod ureten derleyiciler herhangi bir mikrodenetleyici turu PIC-Atmel vb. bunlar icin kod ureten derleyicilerin bir gorevi de "storage allocation" yani bizim nesnelerimizin yerinin ayarlanmasidir.
	Ve bu nesnelerin yerini bu islemcinin kelime uzunluguna gore ayarliyor yani 64 bit ise 8 byte'a gore ayarliyor ve 8 in katlari olacak sekilde yerlestiriyor.32 bit ise 4 byte 4 un katlari olacak sekilde yerlestiriyor.

	32 bit		4 byte		1000		Burada mesela 1001-1002-1003 olamaz								64 bit		8 byte		1000		Burada mesela 1001-1002-1003-1004-1005-1006-1007 olamaz
							1004		(4 byte doldu)																			1008
							  .																									  .
							  .																								  	  .
							  .																									  .
	 Bu islem bize yapilarda (structers) bize buyuk dezavantaj saglayabiliyor.

*/


int main() {

	/////////////////////
	///******ORNEK-1*****

	/*

	// #pragma pack(1)		// Kod aktif edilirse sizeof = 6 byte

	struct {
		char c1;		// 1000 : c1	  1001 : bos	  1002 : bos      1003 : bos
		int ival;		// 1004	: ival	  1005 : ival	  1006 : ival     1007 : ival
		char c2;		// 1008	: c2	  1009 : bos	  1010 : bos      1011 : bos
	}Data;

	printf("sizeof(Data) : %zu", sizeof(Data));

	// Burada sizeof : 12 olma sebebi alligment (hizalama) dir.Bu derleyici icin kullanilan instruction set : 4 byte dir.
	// Bu yuzden derleyici 4'un katlari olacak sekilde yerlestiriyor.
	// Fakat #pragma pack (1) yazilinca sonuc 12 byte yerine 6 byte olacaktir.
	// #pragma pack (1) byte alligment yapiyor hizalama yapiyor aradaki o bosluklari dolduruyor.
	// pragma pack (1) standart degil extension dur.Standart olmayip derleyiciden derleyiciye degisen ve derleyicinin sundugu hazir bir imkandir.
	*/



	/////////////////////
	///******ORNEK-2*****

	/*
	
	// #pragma pack(1)		// Kod aktif edilirse sizeof = 6 byte

	struct {
		char c1;		// 1000 : c1
		char c2;		// 1001 : c2	1002 : bos		1003 : bos
		int ival;		// 1004 : ival	1005 : ival		1006 : ival		1007 : ival
	}Data;

	printf("sizeof(Data) : %zu", sizeof(Data));

	// Eger #pragma pack(1) yazilirsa sizeof = 6 byte olacaktir.
	*/



	/////////////////////
	///******ORNEK-3*****

	/*
	
	// #pragma pack(1)		// Kod aktif edilirse sizeof = 8 byte

	struct {
		char c1;		// 1000 : c1	1001 : bos		1002 : bos		1003 : bos
		int ival;		// 1004 : ival	1005 : ival		1006 : ival		1007 : ival
		char c2;		// 1008 : c2	1009 : c3		1010 : c4		1011 : bos
		char c3;
		char c4;
	}Data;

	printf("sizeof(Data) : %zu", sizeof(Data));
	
	// Eger #pragma pack(1) yazilirsa sizeof = 8 byte olacaktir.
	*/
}
