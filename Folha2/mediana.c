#include<stdio.h>
int main(){
    int a,b,c,med;
    printf("Primeiro valor:"); scanf("%d", &a);
    printf("Segundo valor:"); scanf("%d", &b);
    printf("Terceiro valor:"); scanf("%d", &c);
    if ((a>=b && a<=c) || (a<=b && a>=c))
        med=a;
    else if ((b>=a && b<=c) || (b<=a && b>=c))
        med=b;
    else if ((c>=a && c<=b) || (c<=a && c>=b))
        med=c;
    printf("Mediana:%d", med);
}
    