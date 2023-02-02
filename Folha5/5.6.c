#include <stdio.h>
#include <ctype.h>

int forte(char str[]){
    int i=0, num=0,maiusc=0, minusc=0;
    while (str[i]!='\0'){
        if (isdigit(str[i]))
            num++;
        else if (islower(str[i]))
            minusc++;
        else if (isupper(str[i]))
            maiusc++;
        i++;}
    if ((i>=6)&&(num>0)&&(maiusc>0)&&(minusc>0))
        return 1;
    else return 0;
}



