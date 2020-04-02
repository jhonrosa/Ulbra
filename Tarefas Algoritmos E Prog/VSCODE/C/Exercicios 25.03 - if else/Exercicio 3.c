//3. Faça um algoritmo para ler três números e verificar se a soma deles é maior
//que 50. Se for, escrever uma mensagem informando.

#include <stdio.h>
int main (){

float n1, n2, n3, soma;
printf("Digite um número: ");
scanf("%f", &n1);
printf("Digite um segundo número: ");
scanf("%f", &n2);
printf("Digite um terceiro número: ");
scanf("%f", &n3);
    
    soma = n1+n2+n3;
    if (soma >= 50)
{
    
    printf("A soma entre os 3 números foi maior que 50, foi: %.2f", soma);
}
    else if (soma<50)
{
    printf("A soma entre os 3 números foi menor que 50, foi: %.2f!", soma);
}
    return 0;

}