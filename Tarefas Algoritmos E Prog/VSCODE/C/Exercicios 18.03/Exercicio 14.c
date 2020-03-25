//14. FUA para ler os seguintes números: A, B e C. Após, calcular o valor de D segundo a
//expressão: D = B2 - 4AC e mostrar os valores lidos e o resultado.

#include <stdio.h>
int main() {
    int a, b, c, d;
    float resultado;

    printf("Digite um número:");
    scanf("%i",&a);
    printf("Digite outro número:");
    scanf("%i",&b);
    printf("Digite mais um número:");
    scanf("%i",&c);

    resultado = b*2 - 4*a*c;

    printf("%i x 2 - 4x %i x %i:", b, a, c);
    printf("\nO resultado do calcúlo é: %.2f", resultado);
    

    return 0;

}
