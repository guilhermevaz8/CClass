#include <stdio.h>
int prox_bissexto(int n){
    int a=0,prox=0,verific=0;
    while(verific==0){
        if(n%4==0){
            if (n%100==0){
                if (n%400==0){
                    a=1;
                }  
                else
                    a=0;
            }
            else
                a=1;
        }
        else
            a=0;
        if (a==1)
            return n;
        else if (n%400!=0)
            n+=1;
        else if (n%4==1){
            n+=3;
            prox=n;
        }
        else if (n%4==2){
            n+=2;
            prox=n;
        }
        else if (n%4==3){
            n+=1;
            prox=n;
        }
        if (prox%100==0){
           if(n%4==0){
            if (n%100==0){
                if (n%400==0){
                    verific=1;
                }  
                else
                    verific=0;
            }
            else
                verific=1;
        }
        else
            verific=0;
        }
    }
    return n;
}