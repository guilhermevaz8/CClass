#include <stdio.h>
int main(){
    int a,b,r;
    scanf("%d", &a);
    scanf("%d", &b);
    while(r!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d",a );
    return 0;
}