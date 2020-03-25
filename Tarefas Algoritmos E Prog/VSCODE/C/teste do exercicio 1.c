#include <stdio.h>
int main(){
    printf("\nInforme a quantidade de horas trabalhadas: ");
	float vHorasTrabalhadas;
	scanf("%f", &vHorasTrabalhadas);
 
	printf("\nInforme o valor recebido por hora: ");
	float vValorHora;
	scanf("%f", &vValorHora);
 
	printf("\nInforme o percentual de desconto do INSS: ");
	float vPercentDesconto;
	scanf("%f", &vPercentDesconto);
 
	float vSalarioBruto = vHorasTrabalhadas * vValorHora;
	 
	printf("\nO salá rio bruto é: %-7.2f", vSalarioBruto);
    return 0;
}