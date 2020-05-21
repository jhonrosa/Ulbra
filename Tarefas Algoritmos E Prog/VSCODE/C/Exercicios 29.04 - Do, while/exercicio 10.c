/*10. Escreva um algoritmo para ler um valor N (validar para aceitar apenas valores
positivos), ou seja, a leitura do número deve ser repetida até que o valor
informado seja positivo. Logo após ler outro valor (aceitar apenas valores
menores do que o primeiro) ou seja, a leitura do número deve ser repetida
enquanto o valor informado seja maior que o outro. Por último, dividir o
primeiro valor pelo segundo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    float n1, n2, resul;

    do
    {
        printf("Informe um número:");
        scanf("%f", &n1);
        printf("Informe outro número:");
        scanf("%f", &n2);

        if (n1 < 0)
        {
            printf("Informe novamente n1:");
            scanf("%f", &n1);
        }
        else if (n2 > n1)
        {
            printf("Informe novamente n2:");
            scanf("%f", &n2);
        }
    } while (n2 > n1);
    resul = n1 / n2;
    printf("O resultado é: %.2f", resul);

    system("pause");
    return 0;
}