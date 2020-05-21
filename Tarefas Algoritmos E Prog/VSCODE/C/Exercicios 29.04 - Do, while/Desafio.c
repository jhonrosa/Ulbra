/*1. Como calcular a média de um número
indeterminado de alunos, sendo que
para cada um serão lidas duas
notas. O loop deverá rodar enquanto
o professor responder que quer
calcular médias.*/

#include<stdio.h>
int main(void)
{
  float nota1,nota2,media;
  int resp;
  
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %.2f\n",media);
    
    printf("Gostaria de calcular mais alguma nota?\n");
    printf("Para SIM - Digite 1. Para NÃO - Digite 2: ");
    scanf("%d", &resp);
  
  }while (resp==1);

  return 0;
}