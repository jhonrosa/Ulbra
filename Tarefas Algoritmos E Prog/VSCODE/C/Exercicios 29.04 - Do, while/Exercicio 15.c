/*15. Faça um programa que receba a idade e a altura de várias pessoas. A cada nova
leitura, deve perguntar ao usuário se ele deseja informar mais dados. O programa
só encerra a leitura de dados quando o usuário responder “NÃO”. Calcule e
imprima a média das alturas das pessoas com mais de 30 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int cont = 0, idade;
    float calc, soma, altura;
    char opcao;

    do
    {
        printf("Informe sua idade:");
        scanf("%d", &idade);
        printf("Informe sua altura:");
        scanf("%f", &altura);
        printf("Dejesa continuar: S ou N: ");
        scanf("%s", &opcao);
        getchar();

        if (idade >= 30)
        {
            soma = soma + altura;
            cont++;
        }
    } while (opcao == 'S' || opcao == 's');
    calc = soma / cont;
    printf("A média de altura entre pessoas com 30+ anos é: %.2f\n", calc);

    system("pause");
    return 0;
}