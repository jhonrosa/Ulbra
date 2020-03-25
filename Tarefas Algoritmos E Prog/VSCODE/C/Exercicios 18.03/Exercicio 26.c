//26. Considerando que o índice de reajuste para determinada classe social foi acordado
//para ser um índice de reposição salarial mais um índice de produtividade que cada
//empresa irá definir, FUA que leia o código de um funcionário, seu salário atual, o
//índice de reposição e o de produtividade e calcule o novo salário do funcionário.
//Escrever o código do funcionário, seu salário atual, quanto terá de aumento e o
//novo salário.

#include <stdio.h>
int main() {

    char cdfuncionario;
    float salarioatual, novosalario, indicerep, indiceprod, valorep, valorprod;

    printf("Digite o código do funcionário: ");
    scanf("%c", &cdfuncionario);
    printf("Digite o salário do funcionário %c: R$", cdfuncionario);
    scanf("%f",&salarioatual);
    printf("Digite o indice de reposição em percetual: ");
    scanf("%f", &indicerep);
    printf("Digite o indice de produtividade em percetual: ");
    scanf("%f", &indiceprod);

    valorep = (salarioatual*indicerep)/100;
    valorprod = (salarioatual*indiceprod)/100;
    novosalario = salarioatual+valorprod+valorep;

    prinft("O novo salário do funcionário será: R$%.2f", novosalario);

    return 0;


}