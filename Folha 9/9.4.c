#include <stdio.h>
#include <math.h>

typedef struct data{
    int dia, mes, ano;
} Data;


int comparar(Data d1, Data d2){
  if ((d1.dia==d2.dia) && (d1.mes==d2.mes) && (d1.ano==d2.ano)) return 0;
  else if(d1.ano==d2.ano){
    if (d1.mes>d2.mes) return 1;
    if (d1.mes==d2.mes)
      if (d1.dia>d2.dia) return 1;
      else return -1;
    else return -1;}
  if (d1.ano>d2.ano) return 1;
  else return -1;}



Data dif(Data d1, Data d2){
    int dias1=d1.dia+30*d1.mes+12*30*d1.ano;
    int dias2=d2.dia+30*d2.mes+12*30*d2.ano;

    int dif =dias1- dias2;
    if (dif<0) dif*=-1;

    int anos= dif/(12*30);
    dif=dif%(12*30);
    int meses= dif/30;
    dif=dif%30;
    int dias= dif;

    Data diferenca={ dias, meses, anos};
    return diferenca;
}


int main(){
    Data d1, d2;
    printf("Primeira data:"); scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    printf("Segunda data:"); scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);
    Data diff = dif(d1, d2);
    if (comparar(d1,d2)==0) printf("Datas iguais\n");
    else printf(" diferentes por %d anos %d meses %d dias", diff.ano, diff.mes, diff.dia);
}
