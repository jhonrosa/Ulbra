//10. Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito.
//Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
//Também testar se saldo atual for maior ou igual a zero escrever a mensagem
//'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.

#include <stdio.h>
int main(){

    int cliente;
    float saldo, saldoatual, deb, cred;

    printf("Informe o número da sua conta: ");
    scanf("%i", &cliente);
    printf("Informe seu saldo: ");
    scanf("%f", &saldo);
    printf("Informe seu débito atual: ");
    scanf("%f", &deb);
    printf("Informe seu crédito atual: ");
    scanf("%f", &cred);

    saldoatual = saldo - deb + cred;
    printf("O saldo atual da conta %i é de: R$%.2f" cliente, saldoatual);
    if (saldoatual<=0){
    printf("\nSALDO NEGATIVO!");
    }
    else {
        printf("\nSALDO POSITIVO!");
    }
    
}