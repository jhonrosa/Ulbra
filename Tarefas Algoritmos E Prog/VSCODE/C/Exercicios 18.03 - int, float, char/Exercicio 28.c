//28. FUA que lê o valor de um empréstimo e calcule o valor de cada amortização
//considerando 24 amortizações a uma taxa de 48%. (VALOR AMORTIZAÇÃO = (VALOR
//EMPRÉSTIMO * TAXA)/NÚMERO AMORTIZAÇÕES).

#include <stdio.h>
int main() {

    float emprestimo, vamortizacao; 
    int amortizacao = 24;
    printf("Digite o valor do empréstimo: R$");
    scanf("%f", &emprestimo);
   
    vamortizacao = (emprestimo*48)/amortizacao;

    printf("O valor de cada armotização ficou: R$%.2f", vamortizacao);

    return 0;
}