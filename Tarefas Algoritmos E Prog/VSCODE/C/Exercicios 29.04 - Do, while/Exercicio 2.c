/******************************************************************************
2. Faça um programa para ler um número inteiro, e enquanto ele for positivo,
subtrair um (numero = numero – 1), e escrever o valor na tela.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número:");
    scanf("%i", &num);
    num -= 1;
    while (num > 0)
    {
        printf("%i\n", num);
        num -= 1; //num--; ou num=num-1;
    }
    return 0;
}