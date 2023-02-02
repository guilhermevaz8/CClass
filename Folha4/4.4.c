#include <stdio.h>
#include <ctype.h>
int pontos_letras(int ch){
  if(ch=='A' || ch=='E' || ch=='I' ||ch=='L' || ch=='N' || ch=='O' || ch=='R' || ch=='S' || ch=='T' || ch=='U')
    return 1;
  else if(ch=='G' || ch=='D' )
    return 2;
  else if(ch=='B' || ch=='C' || ch=='M' || ch=='P')
    return 3;
  else if(ch=='V' || ch=='H' || ch=='F' || ch=='W' || ch=='Y')
    return 4;
  else if(ch == 'K')
    return 5;
  else if(ch=='X' || ch=='J')
    return 8;
  else if(ch=='Z' || ch=='Q')
    return 10;
  else
    return 0;
}

int main(){
  int ch;
  int pontos=0;
  while((ch=getchar())!='\n'){
      pontos += pontos_letras(ch);
  }
  printf("Pontos = %d\n" , pontos);
  return 0;
}