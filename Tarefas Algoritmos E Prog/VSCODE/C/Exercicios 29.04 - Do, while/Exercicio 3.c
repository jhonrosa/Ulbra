/******************************************************************************
3. Faça um programa que leia teclas digitadas do teclado até que o usuário
pressione a tecla W.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char tecla;
     do
     {
         printf("Digite uma tecla:");
         scanf("%c", &tecla);
         getchar();
     } while (tecla!='w' && tecla!='W'); 
    
    return 0;
}

