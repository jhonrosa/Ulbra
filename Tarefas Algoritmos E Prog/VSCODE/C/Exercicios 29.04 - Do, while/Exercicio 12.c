/*12. Faça um programa que exiba um menu para o usuário com 4 opções de cores:
1- Azul
2- Preto
3- Rosa
4- Vermelho
E solicite que ele escolha uma cor. Enquanto ele digitar números inválidos do
menu, exiba uma mensagem de erro e solicite que informe um novo valor.
Quando o valor correto é digitado escreva a cor na tela e encerre o programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int cores;
    do
    {
        printf("Digite\n1 - Azul\n2 - Preto\n3 - Rosa\n4 - Vermelho\n");
        printf("Escolha uma das opções:");
        scanf("%d", &cores);
        if (cores > 4 || cores < 1)
        {
            printf("Número Inválido\n");
        }

    } while (cores > 4 || cores < 1);
    switch (cores)
    {
    case 1:
        printf("Azul!");
        break;
    case 2:
        printf("Preto!");
        break;
    case 3:
        printf("Rosa!");
        break;
    case 4:
        printf("Vermelho!");
        break;

    default:
        printf("Número Inválido!\n");
        printf("Informe novamente:");
        scanf("%d", &cores);
        system("pause");
        return 0;
    }
}