//1. Faça um algoritmo para ler um número e informar se ele está na faixa de
//números entre 100(inclusive) e 1000(inclusive).

#include <stdio.h>
int main() {

    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);
    
        if(numero <99 || numero >1000)
        printf("Está fora da faixa de números!");
        else
            if(numero == 100 || numero < 1000)
            printf("Está dentro da faixa de números!");

    return 0;
}