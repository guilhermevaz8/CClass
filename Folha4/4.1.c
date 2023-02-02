#include<stdio.h>
int main(){
    float a,x0,x1,x2;
    
    scanf("%f", &a);
    x0=a/2.0;
    x1=0.5*(x0+(a/x0));
    while (x2-x1>=0.01){
        x2=0.5*(x1+(a/x1));
        x1=x2;
    }
    printf("%.2f",x2);
}