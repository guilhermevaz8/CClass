#include<stdio.h>
int quadrado(int n){
    int soma=0,i;
    for (i=1;n;i+2)
        soma+=i;
    if (soma==n)
        return 1;
    else return 0;
}


int main(){
    int a;
    scanf("%d", &a);
    printf("%d",quadrado(a));
}
    