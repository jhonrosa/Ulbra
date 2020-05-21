/******************************************************************************
4. Faça um programa para ler números do teclado até que o usuário digite o
número 0. Quando encerrar o loop, deve ser escrito na tela uma mensagem
“Sistema Encerrado”.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
     do
     {
         printf("Digite um número:");
         scanf("%d", &num);
         
         
     } while (num!=0); 
        printf("SISTEMA ENCERRADO!");
    
    return 0;
}

