#include<stdio.h>
int main(){
    int r,cima,baixo,num,denom,frac;
    printf("Numerador:"); scanf("%d", &num);
    printf("Denominador:"); scanf("%d",&denom);
    baixo=denom;
    cima=num;
    while (denom!=0){
        r=num%denom;
        num=denom;
        denom=r;
    }
    printf("A fracao %d/%d e equivalente a %d/%d", cima, baixo, cima/num, baixo/num);
}