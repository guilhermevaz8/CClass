#include<stdio.h>
int main(){
    float a,exp=0;
    scanf("%f", &a);
    exp=((((3*a+2)*a-5)-1)*a+7)*a-6;
    printf("%.2f",exp);
    return 0;
}