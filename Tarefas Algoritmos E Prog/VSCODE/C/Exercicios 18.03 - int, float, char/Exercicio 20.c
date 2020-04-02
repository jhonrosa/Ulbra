//20. FUA que efetue e calculo do salário líquido de um professor. Para fazer este
//programa você deverá possuir alguns dados, tais como: valor da hora aula, número
//de aulas dadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se
//estabelecer qual será o seu salário bruto para efetuar o desconto e ter o valor do
//salário líquido. Ao final do algoritmo devem ser mostrados o salário bruto e o
//salário líquido do professor.

#include <stdio.h> 
int main() {
    
    float vhora, aulas, desconto, percdsc, salariobruto, salarioliquido;

    printf("Digite o número de aulas dadas no mês:");
    scanf("%f", &aulas);

    printf("Digite o valor ganho por hora:");
    scanf("%f", &vhora);

    printf("Informe o percentual de desconto do INSS:");
    scanf("%f", &percdsc);

    salariobruto = vhora*aulas;
    desconto = salariobruto*percdsc/100;
    salarioliquido = salariobruto - desconto;

    printf("Seu salário bruto é: R$%.2f", salariobruto);
    printf("\nO valor do desconto é: R$%.2f", desconto);
    printf("\nSeu salário liquído é: R$%.2f", salarioliquido);

    return 0;
}  