#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Preprocessor yani on islemci demektir.C programinin calisabilmesi icin belli asamalardan gecmesi gerekiyor.
	Text editorune yazdiktan sonra once on islemciye gider sonra compiler sonra assembler sonra linker ve
	linker'da da bir sorun olmazsa executable file olusur.On islemciler compiler'dan once calisir.
	On islemciler compile time'i ilgilendiren bir kavram degildir.

	On islemciler text ile ilgili islemler yaparlar. "#" karakteri ile baslayan komutlarin hepsi (veya direktiflerin hepsi) 
	on islemci ile ilgili komutlardir.";" ile bitmezler.Compiler'i ilgilendirmezler.

	Bunlar 13 tanedir.

	"#include"	"#define"	"#undef"	"#ifdef"	"#ifndef"	"#if"	"#else"	
	"#elif"		"#endif"	"#error"	"#pragma"	 "#line"	
	"#"(null direktif) hizalama yapar.
*/

int main() {
	
	/*
		---->>>>	#include

		Bu on islemci komutu genelde kutuphaneleri dahil etmek icin kullandigimiz on islemci cesididir.Iki sekilde dahil etme yontemi vardir.	
		
		< >		Default directory
		" "		Actual directory

		Default directory'de sistem tarafindan IDE tarafindan bir default director vardir.
		#include kodunda derleyici oraya bakar yazdigimiz kutuphaneyi oradan dahil eder.
		Default directory'de bu path degistirilebilir.

		Actualy directory'de ise kaynak dosyanin bulundugu directory'yi arar.
		Ornegin header file'da dosya eklendiginde header dosyasi neredeyse oraya bakar.
		Veya ayrica path de verilebilir.
	*/
}


