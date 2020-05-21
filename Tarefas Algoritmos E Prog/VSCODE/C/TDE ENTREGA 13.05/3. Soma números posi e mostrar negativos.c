/*3. Escreva um algoritmo que leia diversos números inteiros, até que o usuário digite o valor ZERO.
Ao final (quando o usuário digitar ZERO), imprimir a quantidade de números negativos
 e a soma de todos os números positivos. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int num, x = 0, y = 0, soma = 0;

    do
    {
        printf("Digite um número (0 para sair):");
        scanf("%d", &num);

        if (num < 0)
        {
            y++;
        }
        if (num > 0)
        {
            soma = soma + num;
            x++;
        }
    } while (num != 0);
    soma = soma + num;
    printf("A soma dos valores é: %d", soma);
    printf("\nNúmeros negativos: %d", y);

    system("pause");
    return 0;
}