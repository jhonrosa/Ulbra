//13. FUA para ler dois números. Multiplicar o primeiro por 4 e o segundo por 6. Calcule a
//media aritmética dos resultados obtidos. Escrever os valores lidos, os calculados e a
//media aritmética

#include <stdio.h> 
int main() {
    int a,b, s, s1, calc, calc1, calc2;
    float media;

    printf("Digite um número:");
    scanf("%i",&a);
    printf("Digite outro número:");
    scanf("%i",&b);
    s = a;
    s1 = b;
    calc = a*4;
    calc1 = b*6;
    calc2 = b*6/2;
    media = a*4 + b*6 /2;
    
    printf("%i*4 + %i*6/2", s, s1);
    printf("\n%i + %i/2", calc, calc1);
    printf("\n%i + %i", calc, calc2);
    printf("\nValor da média é: %.2f", media);
    
    return 0;

}