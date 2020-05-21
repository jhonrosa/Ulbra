/*2. ESCREVA UM ALGORITMO PARA LER UM NÚMERO INTEIRO E ESCREVÊ-LO NA TELA
10 VEZES UTILIZANDO UMA REPETIÇÃO.*/

#include <stdio.h>
int main()
{
    int num, x;

    printf("Informe um número inteiro: ");
    scanf("%i", &num);

    for (x = 1; x <= 10; x++)
    {
        printf("\n %i", num);
    }
    return 0;
}