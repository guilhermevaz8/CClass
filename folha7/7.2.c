#include <stdio.h>
#include <ctype.h>

int main(){
  int countA=0,countB=0,countC=0,ch;
  while ((ch=getchar())!= EOF){
    if (isalpha(ch)){
      ch=toupper(ch);
      if (ch=='A') countA++;
      if (ch=='B') countB++;
      if (ch=='C') countC++;
    }
  }
  printf("A:%d\n", countA);
  printf("B:%d\n", countB);
  printf("C:%d\n", countC);

}
