#include <stdio.h>
#include <ctype.h>

int algum_digito(char str[]){
    int i=0;
    int soma=0;
    while (str[i]!='\0');{
        if (isdigit(str[i]))
            return 1;}
        i++;
    return 0;
}

int main(){
    char str[20];
    scanf("%s, str");
    int a=algum_digito(str);
    if (a==1)
        printf("yes");
    else printf("no)");
}