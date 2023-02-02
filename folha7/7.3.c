#include<stdio.h>
int cal(char str[]){
  int i=0, num1=0, num2=0,r;
  while((str[i]!= '+')&& (str[i]!= '-') & (str[i]!='*')){
    int ch=str[i]-'0';
    num1*=10;
    num1+=ch;
    i++;
  }
  int operador=str[i];
  i++;
  while (str[i]!='\0') {
    int ch=str[i]-'0';
    num2*=10;
    num2+=ch;
    i++;
  }
  switch(operador){
    case '+':
      r=num1+num2;
    case '-':
      r=num1-num2;
    case '*':
      r=num1*num2;
  }
  return r;
}

int main(){
  char str[3];
  scanf("%s", str);
  int r=cal(str);
  printf("%d\n", r);
  return 0;
}
