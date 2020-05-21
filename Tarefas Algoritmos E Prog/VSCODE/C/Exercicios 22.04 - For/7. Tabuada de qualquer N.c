/*7. ESCREVA UM ALGORITMO PARA LER UM VALOR X. ESCREVER A TABUADA DE X.*/

#include <stdio.h>
int main () {

int x, num;
printf("Digite um número: ");
scanf("%i", &num);

for (x=0; x<=10; x++) {

    printf("\n%i x %i = %i", num, x, x*num);
}
    return 0;
}