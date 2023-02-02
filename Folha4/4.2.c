#include<stdio.h>
#include <ctype.h>
    int main(void) {
    int ch;
    int letras = 0;
    while((ch=getchar()) != '\n') {
        if (isalpha(ch))
            letras++;
    }
    printf("A frase contem %d letras\n", letras);
}
