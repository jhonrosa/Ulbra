/*5. Escreva um algoritmo, ou programa na linguagem C, que leia um número indeterminado de alunos. 
Para cada aluno deve ser lido o código, sexo (F- Feminino ou M- Masculino) e a idade. 
Validar para aceitar somente idades entre 15 e 80 anos. O algoritmo/programa deve encerrar quando o código zero 
for digitado e, antes de encerrar, mostrar: 
O código e idade do aluno mais velho;
A idade média das alunas;
O número de estudantes do sexo masculino;
O número de estudantes do sexo feminino.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
system("cls");

       float preco, soma = 0, media, maisvelho = 0, maisbarato;
       int cod, cont = 0, codmaisbarato, codmaisvelho;
do {
      printf("Informe o código do aluno (0 para sair):");
      scanf("%d", &cod);
      printf("Informe seu sexo: F - Feminino ou M - Masculino:");
      scanf("%s", sexo);
      printf("Informe sua idade:");
      scanf("%d", &idade);

      if (idade>=15 && idade<=80) 
      {
           codmaisvelho = cod;
            maisvelho = idade;
      }
}


system("pause");
return 0;
}