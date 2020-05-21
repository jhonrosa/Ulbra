/*1. Escreva um algoritmo usando o comando “para” (for) que exiba na tela a tabuada completa (de 1x1=1 até 10x10=100).
 Capriche para que ela saia igual a que você usava na escola. */

 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
system("cls");

int num, x;

    for (num = 1; num <= 10; num++) //para num de 1 ate 10 faca
    {
        printf("\n   Tabuada do %i   ", num);
        for (x = 1; x <= 10; x++) //para x de 1 ate 10 faca
            printf("\n    %i X %i = %i     ", num, x, num * x);
    }
system("pause");
return 0;
}