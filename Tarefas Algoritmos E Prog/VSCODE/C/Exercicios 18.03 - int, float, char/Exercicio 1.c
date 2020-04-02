
#include <stdio.h> 
int main()
{
    int nr_funcionario, HRtrab;
    float ValorHora;

    printf("Funcionario numero:");
    scanf("%i", &nr_funcionario);
    printf("Horas trabalhadas mensalmente:");
    scanf("%i", &HRtrab);
    printf("Valor por hora:");
    scanf("%f", &ValorHora);
    ValorHora = (ValorHora*HRtrab);
    printf("\nSeu salario mensal foi = R$%.2f", ValorHora);
    
    return 0; 
    
    } 


