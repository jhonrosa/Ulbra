/*6. ESCREVA UM ALGORITMO QUE IMPRIMA A TABUADA DO 8 UTILIZANDO UMA
ESTRUTURA DE REPETIÇÃO.*/

#include <stdio.h>
int main(){
    int x,cont;
    cont=8;
    for(x=1; x<=10; x++){
    
    printf("\n%i x %i = %i", cont, x, x*cont);
}
return 0;
}