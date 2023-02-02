#include<stdio.h>
int main(){
    int d,m,a,bi=0;
    printf("Insira a data(d/m/aaaa):"); scanf("%d/%d/%d", &d,&m,&a); 
    if(a%4==0)
        if (a%100==0)
            if (a%400==0){
                bi=1;
        }
        else
            bi=1;
    
    if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))
        if (d==31){
            d=1;
            m+=1;
        }
        else
            d+=1;
    else if ((m==4)||(m==6)||(m==9)||(m==11))
        if (d=31){
            d=1;
            m+=1;
        }
        else 
            d+=1;
    else if (m==12)
        if (d==31){
            d=1;
            m=1;
            a+=1;
        }
        else
            d+=1;
    else if (m==2)
        if (bi=0)
            if (d==28){
                d=1;
                m=3;
            }
            else 
                d+=1;
        else if (bi=1)
            if(d==29){
                d=1;
                m=3; 
            }
            else
             d+=1;
    printf("data=%d/%d/%d", d,m,a);
}