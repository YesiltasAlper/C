#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int func(int taban, int us) {

	if (taban == 0)
		return 0;

	else if (us == 0 && taban > 0)
		return 1;

	else if (us == 1)
		return taban;

	return taban * func(taban, us - 1);


}

int main() {

	int taban, us;

	printf("Taban : ");
	scanf("%d", &taban);
	printf("Us : ");
	scanf("%d", &us);

	printf("Sayiniz : %d^%d\n", taban, us);

	int sonuc = func(taban, us);

	printf("Sonuc : %d", sonuc);
}




