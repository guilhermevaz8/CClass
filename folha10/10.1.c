#include "input.h"
#include <stdio.h>
#include<string.h>

extern int NDisc;
extern DISCIPLINA Disc[];
extern int NAlunos;
extern ALUNO Alunos[];

void print_aluno(int n){
  printf("%s %s\n", Alunos[n].codigo, Alunos[n].nome);}

void procura(char palavranome[]){
  printf("\nAlunos cujo nome inclui: ");
  printf("%s\n\n", palavranome );
  for(int i=0;i<NAlunos;i++){
    if(strstr(Alunos[i].nome,palavranome)){
      print_aluno(i);}
  }
}

/*int codigo2Aluno(char codigo[],char nome[]){
  for(int i=0;i<NAlunos;i++){
    if(strstr(Alunos[i].codigo,codigo)){
      for (int j=0;j<strlen(Alunos[i].nome);j++)

    }
  }
  if (strlen(nome)==0) return 0;
  else return 1;}
}*/

void disciplinas_de_Aluno(char nome[]){
  procura(nome);}







int main(int argc, char const *argv[]){
  //  procura("Alegre");
  char nome[100]={"Maria Gil Matos"};
  /*codigo2Aluno(codigo,nome);
  puts(nome);
  puts(codigo);*/
  disciplinas_de_Aluno(nome);

}
