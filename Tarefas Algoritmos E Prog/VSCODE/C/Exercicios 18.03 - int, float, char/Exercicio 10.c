//Exercicio 10! Para ler dois números quaisquer, dividir o primeiro pelo segundo. 
//Mostrar os números lidos e o resultado calculado.

#include <stdio.h> 
int main() {

    int n1,n2;
    float resultado;

    printf("Digite um número:");
    scanf("%i", &n1);

    printf("Digite outro número:");
    scanf("%i", &n2);

    resultado = n1/n2;

    printf("A divisão entre %i e %i resulta em: %.2f", n1, n2, resultado);

    return 0;

}