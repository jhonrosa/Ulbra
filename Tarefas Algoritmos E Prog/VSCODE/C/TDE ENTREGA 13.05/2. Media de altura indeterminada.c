/*2. Faça um algoritmo que leia a altura de um número indeterminado de pessoas. 
Calcule e exiba a média das alturas das pessoas. O algoritmo deve ler uma altura e perguntar se a pessoa deseja continuar (S-sim ou N-não). 
Quando a resposta for 'N', deve parar a leitura.
 Utilizar a estrutura de repetição faça-enquanto (do while). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int cont = 0, altura = 0;
    float calc, soma = 0;
    char opcao;

    do
    {
        printf("Informe sua altura:");
        scanf("%d", &altura);
        soma = soma + altura;
        cont++;
        printf("Dejesa continuar: S ou N: ");
        scanf("%s", &opcao);
        
        
    } while (opcao == 'S' || opcao == 's');
    calc = soma / cont;
    printf("A média de altura é: %.2f", calc);

    system("pause");
    return 0;
}