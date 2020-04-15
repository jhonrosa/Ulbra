/*4. Calcule valor de R, exibindo-o em vídeo. Faça em fluxograma e em C#
R = B² - (C * D) */

#include <stdio.h>
int main(){
    

float b, c, d, calc;

printf("Digite um número: ");
scanf("%f", &b);
printf("Digite outro número: ");
scanf("%f", &c);
printf("Digite mais um número: ");
scanf("%f", &d);

calc= (b*b) - (c*d);

printf("O valor de R é: %.2f", calc);

return 0;
}