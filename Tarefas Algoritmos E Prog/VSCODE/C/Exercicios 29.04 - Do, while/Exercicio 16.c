/*16. Uma revenda de carros precisa calcular o financiamento de um veículo. O
veículo pode ser financiado em 36 ou 48 vezes. Faça um programa que leia o
valor total do veículo e o número de vezes em que será financiado. Ao final,
exiba na tela o acordo final ( número de parcelas e valor da parcela. Ex: 36 x
R$800,00). Verifique se o usuário está digitando o número de vezes correto,
caso digite algum valor incorreto, solicite uma nova leitura até ele informar um
valor válido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    int parcela;
    float valortotal, parcela36, parcela48;
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    do
    {
        printf("Informe o valor total do carro:");
        scanf("%f", &valortotal);
        printf("Informe se deseja o parcelamento em 36 ou 48 vezes:");
        scanf("%i", &parcela);

        if (parcela != 36 || parcela != 48)
        {
            printf("Número inválido de parcelas!\n");
        }
        
    }    while (parcela<36 || parcela>48);
            if (parcela == 36)
        {
            parcela36 = valortotal / parcela;
            printf("%ix de %.2f", parcela, parcela36);
        }
        else if (parcela == 48)
        {
            parcela48 = valortotal / parcela;
            printf("%ix de %.2f", parcela, parcela48);
        }
    

    system("pause");
    return 0;
}