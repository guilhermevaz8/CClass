#include<stdio.h>
int main(){
    int valor,vinte,dez,cinco,moeda,manip;
    printf("Quantia em EUR?"); scanf("%d", &valor);
    if (valor%20!=0)
    {
         manip=valor-(valor%20);
         vinte=manip/20;
    }
    else
        vinte=valor/20;
    valor-=(20*vinte);
    if (valor%10!=0)
    {
         manip=valor-(valor%10);
         dez=manip/10;
    }
    else
        dez=valor/10;
    valor-=(dez*10);
    if (valor%5!=0)
    {
         manip=valor-(valor%5);
         cinco=manip/5;
    }
    else 
        cinco=valor/20;
    valor-=(cinco*5);
    if (valor>0)
         moeda=valor;
    printf("Notas EUR 20: %d", vinte);
    printf("Notas EUR 10: %d", dez);
    printf("Notas EUR 5: %d", cinco);
    printf("Moedas EUR 1: %d", moeda);
}
