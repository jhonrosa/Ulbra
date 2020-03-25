//18. FUA para calcular a média de quatro números inteiros e exibir o resultado final.

#include <stdio.h>
int main (){
    
    float a, b, c, d, media; 
     
    printf("Digite um número: ");
    scanf("%f", &a);
    printf("Digite outro número: ");
    scanf("%f", &b);
    printf("Digite mais um número: ");
    scanf("%f", &c);
    printf("Digite um último número: ");
    scanf("%f", &d);
    media = (a+b+c+d)/4;

    printf("A média entre os 4 números é: %.2f", media);

    return 0;
    
    
    }