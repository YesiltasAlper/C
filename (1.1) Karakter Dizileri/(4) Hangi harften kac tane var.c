#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char ch;
    int sayma[26] = { 0 };
    int x, space = 0, i;

    printf("Lutfen bir metin giriniz ve ENTER'a basiniz : ");
    while ((ch = getchar()) != '\n') {
        x = ch - 'a';
        if (x >= 0 && x < 26)
            sayma[x]++;
        else
            space++;
    }

    printf("\nGirdiginiz metin %d tane bosluk karakteri iceriyor \n", space);
    for (i = 0; i < 26; i++) {
        printf("%d kez %c \n", sayma[i], 'a' + i);
    }

}
