/*10. Escreva um programa que imprima a tabuada (de 1 a 10) para os
números de 1 a 5.*/

#include <stdio.h>

int main()
{
    int num, x;

    for (num = 1; num <= 5; num++) //para num de 1 ate 5 faca
    {
        printf("\n   Tabuada do %i   ", num);
        for (x = 0; x <= 10; x++) //para x de 1 ate 10 faca
            printf("\n    %i X %i = %i     ", num, x, num * x);
    }
    return 0;
}