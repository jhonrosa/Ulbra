//Exercicio 9! Para ler dois números quaisquer, calcular a soma deles e após mostrar os
//números lidos e o resultado da soma.

#include <stdio.h>
int main(){
    
    int n1, n2;
    float resultado;
    
    printf("Digite um número:");
    scanf("%i", &n1);
    
    printf("Digite outro número:");
    scanf("%i", &n2);
    
    resultado = (n1+n2);
    
    printf("a soma entre %i e %i  é: %.2f", n1, n2, resultado);
    
    return 0;
}