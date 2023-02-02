#include<stdio.h>
int main(){
    float a,exp=0;
    scanf("%f", &a);
    exp=((3*(a*a*a*a*a))+(2*(a*a*a*a))-(5*(a*a*a))-(a*a)+(7*a)-6);
    printf("%.2f",exp);
    return 0;
}