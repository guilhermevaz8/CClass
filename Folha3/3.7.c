#include<stdio.h>
int primo(int n) {
  int d;
  for (d=2;d<n;d++)
    if (n%d==0)
    return 0;
  return 1;  
}

int main(){
    int lim,a;
    printf("Limite superior?"); scanf("%d",&lim);
    for (int i=2;i<=lim;i++)
      if (primo(i)==1)      
        printf("%d ", i);   
}
