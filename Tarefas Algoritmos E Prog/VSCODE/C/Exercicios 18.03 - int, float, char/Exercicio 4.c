// Exercicio 4 

#include <stdio.h>
int main() {
    
    float  num1, num2, media;
    printf("Digite o primeiro número:");
    scanf("%f", &num1);
    printf("Digite o segundo número:");
    scanf("%f", &num2);
    media = (num1+num2)/2;
    printf("Sua média é:%.2f", media);

    return 0;

}