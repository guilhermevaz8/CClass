#include<stdio.h>
int mediana(int a, int b, int c){
    if ((a>=b && a<=c) || (a<=b && a>=c))
        return a;
    else if ((b>=a && b<=c) || (b<=a && b>=c))
        return b;
    else if ((c>=a && c<=b) || (c<=a && c>=b))
        return c;
}
