#include <stdio.h>
#include <ctype.h>
void capitalizar(char str[]){
    int tamanho=strlen(str);
    for (int i=0;i=tamanho;i++){
        if (isalpha(str[i]))
            str[i]=toupper(str[i]);}
    
}

