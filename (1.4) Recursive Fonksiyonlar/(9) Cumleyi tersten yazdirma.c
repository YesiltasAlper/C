#include <stdio.h>
#include <stdlib.h>

void terscumle(char* metin, int boy) {

    if (boy == 0)
        printf("%c", metin[boy]);

    else {
        printf("%c", metin[boy]);
        terscumle(metin, boy - 1);
    }
}


int main() {

    char cumle[100];

    printf("Lutfen bir cumle giriniz : ");
    gets_s(cumle, 100);

    terscumle(cumle, strlen(cumle) - 1);
}
