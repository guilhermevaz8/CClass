#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} Data;

//alinea 1
int valor(Data d) {
    int value = d.dia + d.mes*100 + d.ano*10000;
    return value;
}

void ordena_datas(Data vec_datas[], int size){ //insertion sort
    int i, j;
    for (i = 1; i < size; i++){
        Data x  = vec_datas[i];
        j = i-1;
        while(j >= 0 && valor(vec_datas[j]) > valor(x)){
            vec_datas[j+1] = vec_datas[j];
            j--;
        }
        vec_datas[j+1] = x;
    }
}

//alinea 2
Data menor_data(Data vec_datas[], int size){
    ordena_datas(vec_datas, size);
    return vec_datas[0];
}

//alinea 3
void datas_ano(Data vec_datas[], int size, int ano){
    ordena_datas(vec_datas, size);
    for (int i = 0; i < size; i++){
        if (vec_datas[i].ano == ano) printf("%d/%d/%d\n", vec_datas[i].dia, vec_datas[i].mes, vec_datas[i].ano);
    }
}

//main
void main(){
    //as datas serao passadas como por exemplo 03072022
    Data listaDatas[10] = {0};
    Data d;
    int n; scanf("%d", &n);
    int i = 0;
    int size = 0;
    while (n != -1){
        Data d = {n/1000000, (n/10000)%100, n%10000};
        listaDatas[i] = d;
        size++;
        i++;
        scanf("%d", &n);
    }
    
    //alinea 1
    //ordena_datas(listaDatas, size);
    
    //alinea 2
    //d = menor_data(listaDatas, size);
    //printf("%d/%d/%d\n", d.dia, d.mes, d.ano);

    //alinea 3
    //datas_ano(listaDatas, size, 2003); por exemplo
}
