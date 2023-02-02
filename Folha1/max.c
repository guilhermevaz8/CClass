#include<stdio.h>
int main(){
    int a,b,max;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("O maior dos dois numeros e: %d\n", max);
    return 0;
}
