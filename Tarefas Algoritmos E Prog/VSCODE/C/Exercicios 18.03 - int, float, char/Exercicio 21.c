//21. FUA para ler uma temperatura em graus Centígrados e apresentá-la convertida em
//graus Fahrenheit. A fórmula de conversão é: F=(9*C+160)/5. Onde F é a
//temperatura em Fahrenheit e C é a temperatura em Centígrados.

#include <stdio.h>
int main(){

    float grausc, grausf, formula;
    printf("Digite a temperatura em graus Centígrados:");
    scanf("%f", &grausc);

    formula = (9*grausc+160)/5;
    printf("A conversão de graus Centígrados para graus Fahrenheit é:%.2fºF", formula);
    
    return 0;
}