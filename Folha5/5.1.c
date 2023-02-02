#include<stdio.h>
void range(int vec[], unsigned size, int inicio, int incr){
    for (int i; i<size;i++)
        vec[i]= inicio+(i*incr);
}

int main(){
    int a[5];
    range(a,5,3,2);
    for(int i=1;i=strlen(a);i++)
        return a[i];
}