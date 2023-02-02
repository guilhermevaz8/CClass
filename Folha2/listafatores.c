#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%d:", a);
    while(a>1){
        if (a%2==0){
            a=a/2;
            printf(" 2");
        }
        else if (a%3==0){
            a=a/3;
            printf(" 3");
        }    
        else if (a%5==0){
            printf(" 5");
            a=a/5;
        }    
        else if (a%7==0){
            printf(" 7");
            a=a/7;
        }    
        else if (a%11==0){
            a=a/11;
            printf(" 11");
        }    
        else if (a%13==0){
            a=a/13;
            printf(" 13");
        }    
    }
    return 0;
}   

