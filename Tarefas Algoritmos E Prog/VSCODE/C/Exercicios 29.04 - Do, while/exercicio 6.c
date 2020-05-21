/******************************************************************************
6. Faça um programa para ler diversos números até que o usuário informe um
número negativo. O loop deve somar os números positivos e contar os zeros
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 0, soma = 0;
    int n0 = 0, cont = 0;

    do
    {
        printf("Digite um número:");
        scanf("%d", &num);
        cont += 1;
        if (num > 0)
        {
            soma += num;
        }
        else if (num == 0)
            n0 += 1;
    } while (num >= 0);

    printf("A soma dos valores positivos é: %i", soma);
    printf("\nForam digitados 0: %i vez(es)", n0);
    return 0;
}