#include<stdio.h>
int mdc(int a, int b){
    if (b > a){
        int aux = a;
        a = b;
        b = aux;
    }
    while (b != 0){
        int aux = a;
        a = b;
        b = aux%b;
    }
    return a;
}

void reduzir(int *pnum, int *pdenom){
    int a = *pnum, b = *pdenom;
    int maxdivcom = mdc(a, b);
    a = a/maxdivcom;
    b = b/maxdivcom;
    *pnum=a;
    *pdenom=b;
}

int main(){
  int denom,num;
  int *pnum,*pdenom;
  pnum=&num;
  pdenom=&denom;
  scanf("%d %d", pnum, pdenom);
  reduzir(pnum,pdenom);
  printf("%d / %d", num, denom);
  return 0;
}
