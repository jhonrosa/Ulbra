//12. FUA para ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da
//diferença do primeiro valor pelo segundo.


#include <stdio.h>
int main () {

    int a,b,s,s1;

    printf("Digite um número:");
    scanf("%i", &a);
    printf("Digite outro número:");
    scanf("%i", &b);
    s = (a-b);
    s1 = (s*s);
    printf("O quadrado da diferença é: %i", s1);

    return 0;

}