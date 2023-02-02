#include <stdio.h>
#include <ctype.h>
int todos_letras(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if (!isalpha(str[i]))
            return 0;
        
        i++;
    }
    return 1;
}


int main(){
    char str[5];
    scanf("%s", str);
    int a=todos_letras(str);
    if (a==1)
        printf("goat");
    else printf("perdeu");
    return 0;
}