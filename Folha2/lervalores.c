#include <stdio.h>
int main(){
    float count,a, soma=0;
    float med;
    scanf("%f", &a);
    while (a!=0){
        soma+=a;
        count++;
        scanf("%f", &a);
    }
    med=soma/count;
    printf("A media e %.2f", med);
}
