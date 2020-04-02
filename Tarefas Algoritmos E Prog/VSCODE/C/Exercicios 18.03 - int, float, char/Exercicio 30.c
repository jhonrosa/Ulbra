//30. Uma revendedora de carros usados paga a seus funcionários vendedores, um salário
//fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do
//valor das vendas por ele efetuadas. FUA que lê o número do vendedor, o número de
//carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que
//recebe por carro vendido e calcula o salário mensal do vendedor, escrevendo-o
//juntamente com o seu número de identificação.

#include <stdio.h>
int main(){
    int cdvendedor, vefetuadas;
    float  comissao, vendastotal, salariofixo, salariofinal;
    

    printf("Informe aqui o código do vendedor: ");
    scanf("%i", &cdvendedor);
    printf("Informe o número de vendas efetuadas pelo vendedor de código %i: ", cdvendedor);
    scanf("%i", &vefetuadas);
    printf("Informe o valor total de vendas deste mês: R$");
    scanf("%f", &vendastotal);
    printf("Informe o salário fixo do vendedor %i: R$", cdvendedor);
    scanf("%f", &salariofixo);
    
    comissao = (vendastotal*5)/100;
    salariofinal = comissao + salariofixo;
    
    printf("\nO total de ganho em comissões do vendedor %i é de: R$%.3f", cdvendedor, comissao);
    printf("\nO salário final foi de: R$%.3f do vendedor %i ", salariofinal, cdvendedor);

    return 0;
}