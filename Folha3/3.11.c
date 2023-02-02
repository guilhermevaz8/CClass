#include<stdio.h>
int main(){
    int n,a1=0,a2=1,a3,i;
    scanf("%d", &n);
    while(n!=0){
        a3=a1+a2;
        a2=a1;
        a1=a3;
        n-=1;
    }
    printf("%d", a3);
    return 0;
}