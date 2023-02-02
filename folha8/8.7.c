#include<stdio.h>
#include<string.h>
unsigned contar_espacos(char *str){
  int espacos = 0;
  while(*str!='\0'){
    if(*str == ' ') espacos++;
    str++;}
  return espacos;
}

int main(){
  char str[30], *pui;
  fgets(str, 30, stdin);
  pui=&str[0];
  int a=contar_espacos(pui);
  printf("%d\n",a);}
