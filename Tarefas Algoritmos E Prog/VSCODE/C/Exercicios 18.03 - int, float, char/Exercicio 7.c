//**Calculo para criação de coelhos**


#include <stdio.h>

int main()
{
int nro_coelhos;
float custo;

printf("Qual o numero de coelhos? "); //escreva
scanf("%i", &nro_coelhos); //leia %i para inteiro %f para real(float) &obrigatório para leitura
custo = (nro_coelhos*0.70)/18+10;
printf("\nCusto para criar %i coelho(s) = %.2f", nro_coelhos, custo);

return 0;
}