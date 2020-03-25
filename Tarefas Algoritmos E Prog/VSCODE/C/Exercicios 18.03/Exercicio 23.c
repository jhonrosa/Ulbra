//23. FUA para efetuar o cálculo do valor de uma prestação em atraso, utilizando a
//fórmula: PRESTAÇÃO=VALOR+(VALOR*(TAXA/100)*TEMPO).

#include <stdio.h>
int main() {
    float parcela, taxa, tempo, prestacao;
    printf("Digite o valor da dívida: R$");
    scanf("%f", &parcela);
    printf("Digite a taxa da multa: R$");
    scanf("%f", &taxa);
    printf("Digite quantos dias já se passaram após o vencimento:");
    scanf("%f", &tempo);

    prestacao = parcela+(parcela*(taxa/100)*tempo);
    printf("O valor da dívida até o dia de hoje é: R$%.2f", prestacao);

    return 0;
}