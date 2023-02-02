#include <stdio.h>
int main() {
    int i,a,soma=0;
    scanf("%d", &a);
    for(1;7;){
        if (a%i==0)
            soma++;
    }
    if (soma==0)
        printf("primo");
    else
        printf("não primo");
    return 0;
}

