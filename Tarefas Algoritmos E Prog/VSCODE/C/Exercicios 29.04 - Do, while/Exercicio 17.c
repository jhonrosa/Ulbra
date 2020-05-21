/*17. Faça um algoritmo que calcule a média de preços dos produtos de uma livraria,
pedindo ao usuário o código do produto e o preço. Calcule a média dos preços,
escreva o código do produto mais caro e o código do mais barato. O último
produto lido deve ser de código zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    float preco, soma = 0, media, maiscaro = 0, maisbarato;
    int cod, cont = 0, codmaisbarato, codmaiscaro;

    printf("Informe o código do produto (digite 0 para sair):");
    scanf("%i", &cod);
    printf("Informe o preço do produto referente ao código:");
    scanf("%f", &preco);

    if (cod != 0)
    {
        codmaisbarato = cod;
        maisbarato = preco;
    }

    do
    {
        if (preco != 0)
        {
            cont++;
            soma += preco;
        }
        if (preco > maiscaro)
        {
            maiscaro = preco;
            codmaiscaro = cod;
        }
        if (preco < maisbarato)
        {
            maisbarato = preco;
            codmaisbarato = cod;
        }
        printf("Digite um codigo (zero encerra o programa):");
        scanf("%d", &cod);

        if (cod != 0)
        {
            printf("Digite o preço:");
            scanf("%f", &preco);
        }
    }

    while (preco != 0);
    media = soma / cont;
    printf("\nMedia de preços = %.2f", media);
    printf("\nCodigo do produto mais caro: %d - preço: %.2f", codmaiscaro, maiscaro);
    printf("\nCodigo do produto mais barato: %d - preço: %.2f", codmaisbarato, maisbarato);
    system("pause");
    return 0;
}