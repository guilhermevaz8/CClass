#include<stdio.h>
void max_min(int vec[], int size, int *pmax, int *pmin){
  int max, min;
  max=vec[0];
  min=vec[0];
  for (int i=1;i<size;i++){
    if (vec[i]<min) min=vec[i];
    else if (vec[i]>max) max=vec[i];
  }
  *pmax=max;
  *pmin=min;
}



int main(){
    int size;
    scanf("%d",&size);
    int vec[size],max,min,*pmax=&max ,*pmin=&min;
    for (int i=0;i<size;i++){
        scanf("%d", &vec[i]);
    }
    max_min(vec,size,pmax,pmin);
    printf("%d %d", max, min);
    return 0;
}
