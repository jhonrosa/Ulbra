// Exercicío 8! Para efetuar a leitura de um número inteiro
//e apresentar o resultado do quadrado deste número.

#include <stdio.h>
int main() {
   
    int n1;
    float resultado;
   
    printf("Escolha um número para fazer ao quadrado:");
    scanf("%i", &n1);
   
    resultado = (n1*n1);
    printf("O número escolhido ao quadrado é: %.2f", resultado);
    
    return 0;

}