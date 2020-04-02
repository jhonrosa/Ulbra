/*1 . Faça um algoritmo que leia dois números. Depois pergunte se o usuário deseja
somar, subtrair, multiplicar ou dividir estes números. Realize a operação
matemática que ele escolheu e logo após escreva na tela o resultado.*/

#include <stdio.h>
#include <conio.h>
int main(){
float n1, n2, soma, sub, divi, mult;
char escolha; 

    printf("Escolha: a - soma | b - Subtração | c - Divisão | d - Multiplicação: ");
    scanf("%c", &escolha);
    switch(escolha){
    case 'a': 
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    soma=n1+n2;
    printf("A soma é: %.2f", soma);
            break;
    case 'b':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    sub=n1-n2;
    printf("A subtração é: %.2f", sub);
            break;
    case 'c':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    divi=n1/n2;
    printf("A divisão é: %.2f", divi);
                break;
    case 'd':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    mult=n1*n2;
            break;
    printf("A multiplicação é: %.2f", mult);
    
     return 0;
}
}