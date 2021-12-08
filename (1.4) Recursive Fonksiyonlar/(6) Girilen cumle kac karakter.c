#include <stdio.h>

int karakter(char* s){

    if (*s == '\0')
        return 0;
 
    else
        return (1 + karakter(s + 1));
}


int main() {

    char cumle[200];

    printf("Lutfen bir cumle giriniz : ");
    gets_s(cumle, 200);
    printf("Karakter sayisi = %d", karakter(cumle));
}
