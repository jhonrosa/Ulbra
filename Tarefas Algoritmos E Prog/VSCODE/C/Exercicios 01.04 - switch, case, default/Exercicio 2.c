/*2 . Faça um algoritmo que leia um número. Se o número for 1, escreva o número. Se o
número for 2, escreva o dobro do número. Se o número for 3, escreva o triplo do
número. Se for outro número, escreva a mensagem “número não esperado”.*/

#include <stdio.h>
#include <conio.h>
int main(){
    int num; 
    printf("Digite um número: ");
    scanf("%i", &num);
    switch(num){
        case 1: 
        printf("Um");
        break;
        case 2:
            printf("O dobro do número escolhido é: Quatro");
            break;
        case 3: 
            printf("O triplo do número escolhido é: Nove");
            break;
            default: 
            printf("Número não esperado");

            return 0;
    }

}