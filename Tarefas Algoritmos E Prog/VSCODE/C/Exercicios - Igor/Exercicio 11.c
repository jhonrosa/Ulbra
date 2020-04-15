//11. Par Impar
//Faça um programa que solicite um número. Seu programa deverá informar
//se o número informado é par ou impar.

#include <stdio.h>
int main(){

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    if(num %2==0){
    printf("Par!");
    }
    else{
    printf("Ímpar!");
    }
    return 0;

}