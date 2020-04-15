/*3. Poema
Faça um programa que, usando um único comando WriteLine, escreva na tela o seguinte texto:
Batatinha quando nasce
se esparrama pelo chão.
Menininha quando dorme
põe a mão no coração.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
char qlq[100];

printf("Digite qualquer coisa e ganhe um poema: ");
scanf(" %[^\n]s", qlq);
printf("\n Batatinha quando nasce \n se esparrama pelo chão. \n Menininha quando dorme \n põe a mão no coração.");

return 0;

}