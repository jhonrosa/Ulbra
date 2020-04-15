/*5. Calcule valor de R, exibindo-o em vídeo. Faça em fluxograma e em C#
X = B³ * H
R = X / J */

#include <stdio.h>
int main(){

    float b, h, calc, calc2, j;

    printf("Digite um número: ");
    scanf("%f", &b);
    printf("Digite outro número: ");
    scanf("%f", &h);
    printf("Digite por quanto deseja dividir X: ");
    scanf("%f", &j);
    calc=(b*b*b)*h;
    calc2=calc/j;
    printf("O valor de X é: %.2f", calc);
    printf("\nO resultado é: %.2f", calc2);
    
    return 0;

    }

