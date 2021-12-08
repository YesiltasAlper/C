#include <stdio.h>

// Enumarations da user defined turdur.Programlarda birbirine benzer elemanlarin oldugu ve bu eleman degerlerinin oldugu kucuk kumeler olusturmak istenebilir.
// Bu imkani veren arac "Enumaration" dur.Enumaration int turunu kullanarak numaralandirma islemi yapar.

int main() {

	/*
	///////////////////
	///****ORNEK-1****

	enum Note{basarisiz,gecer,orta,iyi,pekiyi};		//  Enumaration sabitlerinin turu int dir.
	enum Note MathNote;
	MathNote = pekiyi;

	printf("%d", MathNote);

	// Eger enumaration sabitlerine baslangic degerleri verilmezse en bastan 0 dan baslayarak 1 arttira arttira giderek deger verir.
	*/



	/*
	///////////////////
	///****ORNEK-2****

	enum Note{basarisiz=1,gecer,orta,iyi,pekiyi};		//  Enumaration sabitlerinin turu int dir.
	enum Note MathNote;
	MathNote = pekiyi;

	printf("%d", MathNote);
	*/



	/*
	///////////////////
	///****ORNEK-3****

	enum Note { basarisiz, gecer, orta, iyi, pekiyi }Student1;
	enum Note MathNote;
	MathNote = pekiyi;
	Student1 = basarisiz;

	printf("%d\n", MathNote);
	printf("%d", Student1);

	// Student1 ve MathNote nesneleri enum Note turundendir.
	*/



	/*
	///////////////////
	///****ORNEK-4****

	typedef enum Direction {North,South = 10,East = 20,West}Direction;

	Direction d1;

	printf("North : %d\n", North);
	printf("South : %d\n", South);
	printf("East  : %d\n", East);
	printf("West  : %d\n", West);
	*/



	/*
	///////////////////
	///****ORNEK-5****

	typedef enum Direction { North, South, East, West }Direction;

	printf("%zu byte", sizeof(Direction));

	// Bu tur, goruldugu gibi bir tane int'in sizeof'u.
	*/



	/*
	///////////////////
	///****ORNEK-6****

	typedef enum EnglishLevel { Beginner, Elemantary, PreIntermediate, Intermediate, UpperIntermediate, Advanced }EnglishLevel;

	EnglishLevel s_level = Beginner;
	switch (s_level) {

	case Beginner: printf("Seviyeniz Beginner ve %d kur almaniz gereklidir...", Advanced - Beginner + 1); break;
	case Elemantary: printf("Seviyeniz Elemantary ve %d kur almaniz gereklidir...", Advanced - Elemantary + 1); break;
	case PreIntermediate: printf("Seviyeniz PreIntermediate ve %d kur almaniz gereklidir...", Advanced - PreIntermediate + 1); break;
	case Intermediate: printf("Seviyeniz Intermediate ve %d kur almaniz gereklidir...", Advanced - Intermediate + 1); break;
	case UpperIntermediate: printf("Seviyeniz UpperIntermadiate ve %d kur almaniz gereklidir...", Advanced - UpperIntermediate + 1); break;
	case Advanced: printf("Seviyeniz Advanced ve %d kur almaniz gereklidir...", Advanced - Advanced + 1); break;

	}
	*/

}
