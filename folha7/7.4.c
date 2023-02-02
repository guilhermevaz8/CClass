#include<stdio.h>
void eliminar(char str[], char ch){
  int i=0,j=0;
  char pp[50];
  while((str[i]!='\0')){
    if (str[i]!=ch){
      str[i]=pp[i];
      i++;
      j++;}
    if (str[i]==ch)i++;
  }
}
int main(){
  int i=0,j=0,c=0;
  char str[50],ch,string[50];
  scanf("%s\n", str);
  scanf("%s", ch);
  //eliminar(str,ch);
  //for(int i=0;str[i]=='\0';i++)
  while((str[i]!='\0')){
    if (str[i]!=ch){
      str[i]=string[i];
      i++;
      j++;}
    if (str[i]==ch)i++;
  }
  while(string[c]!='\0'){
    printf("%s", string[c]);
    c++;}
  return 0;
}
