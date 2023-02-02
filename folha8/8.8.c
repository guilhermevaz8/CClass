#include<stdio.h>
#include<string.h>

int comprimento(char *st){
  int i=0;
  while(*st!='\0'){
    i++;
    st++;}
  return i;
}

void inverter(char *st){
  int i=0,j=comprimento(st);
  while(i<j){
    char ch=*(st+i);
    *(st+i)=*(st+j-1);
    *(st+j-1)=ch;
    i++;
    j--;
  }
}

int main(){
  char str[30], *st;
  fgets(str, 30, stdin);
  st=&str[0];
  inverter(st);
  puts(st);
  return 0;}
