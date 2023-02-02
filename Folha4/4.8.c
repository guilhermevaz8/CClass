#include <stdio.h>
int main(){
    int a=(int)(rand()%1000);
    int tentativa,tent=0;
    scanf("%d", &tentativa);
    while (tentativa!=a){
        if (tentativa<a){
            printf("demasiado baixo\n");
            tent++;
            scanf("%d", &tentativa);}
        else if (tentativa>a){
            printf("demasiado alto\n");
            tent++;
            scanf("%d", &tentativa);}
    }
    printf("Certo encontrou o numero em %d tentativas\n", tent);
    return 0;
}
