/*14. Faça um algoritmo que leia um número inteiro e divida-o por dois
(sucessivamente) ate que o resultado seja menor que 1. Mostre o resultado da
ultima divisão e a quantidade de divisões efetuadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int num = 0, resul = 0, i = 0;

    printf("Digite um número:");
    scanf("%d", &num);

    while (num >= 1)
    {

        num = num / 2;
        i++;
        printf("Valores: %i - ", num);
    }
    printf("\nNúmero de vezes que o número foi dividido: %i", i);

    system("pause");
    return 0;
}