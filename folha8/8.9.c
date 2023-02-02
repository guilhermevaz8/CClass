#include<stdio.h>
char *procura(char *str, char ch){
  while (*str!='\0'){
    if (*str==ch) return str;
  str++;}
  return 0;
}


int main(){
  char *p, str[30];
  fgets(str,30,stdin);
  char a=getchar();
  p=&str[0];
  int f=*procura(p,a);
  if (f==0) printf("NULL");
  else printf("%s", str);
}
