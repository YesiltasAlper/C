#include <iostream>
using namespace std;

/*
	Oncelikle bu operator C++'in bir operatorudur.
	Fakat cok onemli bir operator oldugu icin ihtiyac duymamiz halinde biz bunu C++'da kullanip C'ye uygulariz.
	"typeid" operatoru bir ifadenin bir degiskenin bir nesnenin tur bilgisini ogrenmek istedigimizde kullandigimiz bir operatordur.

	Kisacasi bir ifadenin tur bilgisini ogrenmek istedigimizde "typeid" operatorunu kullaniriz ve bu operator C++'da bulunur.
*/

int main() {

	/*
	int x;
	cout << typeid(x).name() << endl;
	*/

	/*
	int *x;
	cout << typeid(x).name() << endl;
	*/

	/*
	double **x;
	cout << typeid(x).name() << endl;
	*/

	/*
	int a[5];
	cout << typeid(a).name() << endl;
	*/

	/*
	int a[5];
	cout << typeid(&a).name() << endl;
	*/

	/*
	int a[5];
	cout << typeid(a[5]).name() << endl;
	*/
}



