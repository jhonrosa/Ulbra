//29. O custo ao consumidor, de um carro novo, é a soma do custo de fábrica com a
//percentagem do distribuidor e dos impostos (aplicado ao custo da fábrica). Supondo
//que a percentagem do distribuidor seja de 28% e os impostos de 45%, FUA para ler o
//custo de fábrica de um carro e escrever o custo ao consumidor.

#include <stdio.h>
int main(){

    float consumidor, custofabrica, distribuidor, imposto;
    printf("Informe o valor do custo de fábrica:");
    scanf("%f", &custofabrica);

    distribuidor = custofabrica + (custofabrica*28)/100;
    imposto = custofabrica + (custofabrica*45)/100;
    consumidor = custofabrica + distribuidor + imposto;

    printf("O custo do carro para o consumidor é: R$%.3f", consumidor);

    return 0; 

}