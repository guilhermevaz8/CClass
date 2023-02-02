#include <stdio.h>
#include <time.h> 
int main(){
    int a,b,resultado,resultadovdd,certo=0,perguntas=10;
    srand((unsigned)time(NULL));
    while (perguntas!=0){
        a=rand()%10;
        b=rand()%10;
        resultadovdd=a*b;
        printf("Quanto e %d x %d?\n", a, b);
        scanf("%d", &resultado);
        if (resultado==resultadovdd){
            printf("Certo!\n");
            certo++;}
        else{
            printf("Errado! O resultado e %d\n", resultadovdd);
        perguntas--;}
    }
    printf("Respostas corretas:%d  Respostas erradas:%d\n", certo, 10-certo);
    return 0;
}
        