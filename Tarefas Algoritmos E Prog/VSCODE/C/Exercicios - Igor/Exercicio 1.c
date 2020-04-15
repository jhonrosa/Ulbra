/*1. Faça um programa que leia as seguintes informações:
Nome de um aluno
Endereço
Telefone.
Depois de ler essas informações, exiba todas novamente em vídeo.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
      char nome[100];
      char end[100];
      int cel;
      
      printf("Informe seu nome: ");
      scanf("%s", nome);
      printf("Informe seu endereço: ");
      scanf(" %[^\n]s", end);
      printf("Informe o nº do seu telefone: ");
      scanf("%i", &cel);
      
      printf("Seu nome é %s, você mora no endereço %s e seu nº do tel é %i.", nome, end, cel);
      return 0;
}