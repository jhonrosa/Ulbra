//25. FUA para ler o código de um vendedor, seu salário fixo, o total de vendas por ele
//efetuadas e o percentual de comissão que recebe sobre as vendas. Calcular o
//salário total do vendedor. Escrever o código do vendedor e o seu salário total.

#include <stdio.h>
int main (){
    char vendedor;
    float salariofixo, perc, comissao, salariototal;
    int totalvendas;

    printf("Digite o código do vendedor: ");
    scanf("%c", &vendedor);
    printf("Digite seu salário fixo: R$");
    scanf("%f", &salariofixo);
    printf("Digite o valor total de vendas nesse mês: R$");
    scanf("%i", &totalvendas);
    printf("Digite a percentual de comissão que recebe sobre as vendas: ");
    scanf("%f", &perc);

    comissao = (totalvendas*perc)/100;
    salariototal = salariofixo+comissao;

    printf("O salário total do vendedor %c foi de: R$%.2f", vendedor, salariototal);

    return 0;

}