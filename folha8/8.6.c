#include<stdio.h>
void store_zeros(int vec[], int nn){
  while (nn> 0){
        *vec = 0;
        vec++;
        nn--;}
    }



int main(){
    int n=3,vec[3],*vet;
    int nn=n;
    for(int i=0;i<nn;i++)
      scanf("%d", &vec[i]);
    vet=&vec[0];
    store_zeros(vet, nn);
    for(int i=0;i<nn;i++)
      printf("%d\n", vec[i]);
    return 0;
}
