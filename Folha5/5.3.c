#include<stdio.h>
void palindromo(char str[]){
    int tamanho=strlen(str);
    int i=0;
    while (tamanho>0);{
        if (str[i]!=str[tamanho-1])
            return 0;
    i++;
    tamanho--;
    }
    return 1;
}