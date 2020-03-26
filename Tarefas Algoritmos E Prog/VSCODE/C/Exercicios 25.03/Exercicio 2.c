//2. Faça um algoritmo para ler um número e se ele for maior do que 30, então
//exibir metade do número, caso contrário, imprimir o dobro do número. 

#include <stdio.h>
int main(){

    float num, n1;
    printf("Digite um número:");
    scanf("%f", &num);
    if(num<=30)
    {
        n1= num/2;
        printf("A metade do número é: %.2f", n1);
    }
    else {
        n1= num*2;
        printf("O dobro do número: %.2f", n1);
    }
    
    return 0;
}