/*1. Faça um programa que mostre na tela todos os números de 1 a 100 usando laço
de repetição enquanto.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    x = 1;
    while (x <= 100)
    {
        printf("%d\n", x);
        x++;
    }
    return 0;
}