#include<stdio.h>
int comparar(char *str1, char*str2){

  while ((*str1!='\0') && (*str1!='\0')){
    if(*str1!=*str2)
      return 0;
    str1++;
    str2++;}
  return 1;
}

int main(){
  char str11[30],str22[30], *str1, *str2;
  fgets(str11, 30,stdin);
  fgets(str22, 30,stdin);
  str1=&str11[0];
  str2=&str22[0];
  int a=comparar(str1,str2);
  printf("%d\n", a);
return 0;
}
