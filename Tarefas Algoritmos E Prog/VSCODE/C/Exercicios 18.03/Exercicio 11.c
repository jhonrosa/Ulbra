// Exercício 11! Para ler três números quaisquer e calcular a media aritmética entre eles.
//Escrever os números lidos e a media calculada.

#include <stdio.h>

 int main() {
	   
	 
	float a, b, c, media;
	   
printf("Digite o primeiro número:");
scanf("%f", &a);

printf("Digite o segundo número:");
scanf("%f", &b);

printf("Digite o terceiro número:");
scanf("%f", &c);

media = (a + b + c) / 3;
printf("A média de %.2f, %.2f e %.2f é: %.2f", a, b, c, media);
 
 return 0;
 }