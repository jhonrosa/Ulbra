#include <stdio.h>
int main() {
   
    int n1, n2;
    float variavel_X;
    
    printf("Digite um número:");
    scanf("%i", &n1);
    printf("Digite outro número:");
    scanf("%i", &n2);
    variavel_X = (n1+n2);
    printf("O valor da Variável X é:%.2f", variavel_X);
    return 0;
        
    }