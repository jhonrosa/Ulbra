#include <stdio.h>
int main() 
 
{
int b=0,h=0;
float area=0;
 
printf("Digite o valor da base:");
scanf("%i",&b);
printf("\nDigite o valor da altura:");
scanf("%i",&h);
 
area=(b*h)/2;
 
printf("\nO valor da area do triangulo é igual a: %.2f\n\n",area);

return 0;
}