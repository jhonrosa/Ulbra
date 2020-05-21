/*4. ESCREVA UM ALGORITMO QUE IMPRIMA OS NÚMEROS ÍMPARES EXISTENTES DE
ENTRE 1(INCLUSIVE) E 9(INCLUSIVE).*/

#include <stdio.h>
int main()
{

    int x;

    for (x = 1; x <= 9; x += 2)
    {
        printf("\n%i", x);
    }

    return 0;
}