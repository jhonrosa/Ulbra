//27. FUA que lê o número de um funcionário, seu número de horas trabalhadas e o valor
//que recebe por hora e calcula o salário deste funcionário.

#include <stdio.h>
int main(){

    char funcionario;
    float hrtrab, vhora, salario;

    printf("Digite o código do funcionário: ");
    scanf("%c", &funcionario);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &hrtrab);
    printf("Digite o valor ganho por hora trabalhada: ");
    scanf("%f", &vhora);

    salario = hrtrab*vhora;

    printf("O salário do funcionário %c é de: R$%.2f", funcionario, salario);

    return 0;
}