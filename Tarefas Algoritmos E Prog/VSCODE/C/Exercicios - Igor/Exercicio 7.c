/*7. Calcule a seguinte fórmula: (C# e fluxograma)
X = b / m.
Se m = 0, você não deve efetuar a divisão. E deve exibir um erro na tela.
Ao final, mostre o valor de x.*/

#include <stdio.h>
int main(){

    float b, m, calc;

    printf("Digite um número: ");
    scanf("%f", &b);
    printf("Digite outro número: ");
    scanf("%f", &m);
    calc= b/m;
    if (m==0){
        printf("ERRO!");
    }
    else{
    printf("O resultado é: %.2f", calc);
    }
}