#include<stdio.h>
main(){
    float volume=0, raio=0;
    printf("valor do raio="); scanf("%f",&raio);
    volume=(4*3.14*raio*raio*raio)/3;
    printf("Volume da esfera=%.2f\n",volume);
}