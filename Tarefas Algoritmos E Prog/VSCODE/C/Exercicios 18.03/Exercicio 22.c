//22. FUA para ler uma temperatura em graus Fahrenheit e apresentá-la convertida em
//graus Centígrados. A fórmula de conversão é: C= (F-32)*(5/9). Onde F é a
//temperatura em Fahrenheit e C é a temperatura em Centígrados

#include <stdio.h>
int main(){

    float grausf, formula;
    printf("Digite a temperatura em graus Fahrenheit:");
    scanf("%f", &grausf);

    formula = (grausf-32)* 5/9;
    printf("A conversão de graus Fahrenheit para Centígrados é: %.2fº", formula);

    return 0;
}