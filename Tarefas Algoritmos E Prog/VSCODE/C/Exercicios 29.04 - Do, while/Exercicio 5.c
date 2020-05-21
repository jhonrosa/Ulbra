/*5. Faça um programa para ler diversos números até que o usuário informe um
número par. No loop deve haver uma contagem de quantos números foram lidos.
Ao encerrar o loop, informar esta quantidade.*/

#include <stdio.h>

int main()
{
    int num = 0, soma = 0;
    int cont = 0;

    do
    {
        printf("Digite um número:");
        scanf("%d", &num);
        cont += 1;
       
    } while (num %2==1);

  printf("\nForam digitados %i números.", cont);

    return 0;
}
