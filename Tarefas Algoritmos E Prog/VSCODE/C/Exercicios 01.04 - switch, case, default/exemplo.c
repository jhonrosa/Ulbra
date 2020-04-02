/* Fazer um programa que leia um número e escreva-o por extenso
caso o número não seja escolhido, dar erro.*/

#include <stdio.h>
#include <conio.h> 
int main (){
int digito;

    printf("Entre com um número {0 até 9]:  ");
    scanf("%i", &digito);
    switch(digito)
    {
        case 0: printf("Zero\n");
                    break;
        case 1: printf("Um\n");
                 break;
        case 2: printf("Dois\n");
                 break;
        case 3: printf("Três\n");
                 break;
        case 4: printf("Quatro\n");
                 break;
        case 5: printf("Cinco\n");
                 break;
        case 6: printf("Seis\n");
                 break;        
        case 7: printf("Sete\n");
                 break;        
        case 8: printf("Oito\n");
                 break;        
        case 9: printf("Nove\n");
                    break;        
        default: printf("ERRO: Não é um digito!");
        
        return 0;       
    
    }
} 