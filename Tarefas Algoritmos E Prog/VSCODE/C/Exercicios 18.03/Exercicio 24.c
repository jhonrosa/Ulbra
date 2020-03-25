//24. FUA para ler o código da peça 1, a quantidade de peças 1, o valor unitário da peça
//1, o código da peça 2, a quantidade de peças 2, o valor unitário da peça 2 e o
//percentual de IPI a ser acrescentado ao valor de cada peça. Calcule o valor a ser
//pago para cada peça e o valor total da compra. Escrever a quantidade, o código, o
//valor unitário, o valor unitário com IPI e o valor total para cada peça e também o
//valor total da compra.

#include <stdio.h>
int main(){
    
    int qtpc1, qtpc2, cdpc1, cdpc2;
    float vpc1, vpc2, percipi, valorvenda1, valorvenda2, valordesconto, total;

    printf("Digite o código da peça 1: ");
    scanf("%i", &cdpc1);
    printf("Digite a quantidade de peças 1 vendidas: ");
    scanf("%i", &qtpc1);
    printf("Digite o valor unitário da peça 1: R$");
    scanf("%f", &vpc1);

    valorvenda1 = qtpc1*vpc1;
    printf("\nValor total da venda da peça 1 foi: R$%.2f", valorvenda1);
   
    printf("\n\nDigite o código da peça 2: ");
    scanf("%i", &cdpc2);
    printf("Digite a quantidade de peças 2 vendidas: ");
    scanf("%i", &qtpc2);
    printf("Digite o valor unitário da peça 2: R$");
    scanf("%f", &vpc2);

    valorvenda2 = qtpc2*vpc2;
    printf("\nValor total da venda da peça 2 foi: R$%.2f", valorvenda2);

    printf("\ndigite o percentual de desconto IPI: ");
    scanf("%f", &percipi);

    valordesconto = (valorvenda1 + valorvenda2*percipi)/100;
    printf("\nO valor do desconto IPI das duas vendas foi de: R$%.2f", valordesconto);
    total = (valorvenda1+valorvenda2) - valordesconto;
    printf("\nO valor total da venda menos o desconto foi de: R$%.2f", total);

    return 0;

}