/*13. Faça um programa que leia um número e calcule a soma de todos os números de
1 até ele (use laço enquanto). Ex.: se o usuário digitar 7, o programa vai mostrar
28, pois 1+2+3+4+5+6+7=28.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int num, y = 1, soma = 0;

    printf("Digite um número:");
    scanf("%i", &num);

    while (y <= num)
    {
        soma += y; //vai fazer a soma com a contagem 
        y++;      //até o número informado
    }
    printf("%i", y); //resultado sempre depois da chave

    system("pause");
    return 0;
}