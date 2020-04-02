/*3 . Escrever um algoritmo que leia um código e três valores: a, b e c. Os códigos
válidos são 1, 2, 3, 4 e 5. Se o código for diferente destes, apresentar a mensagem
"CÓDIGO INVÁLIDO" e terminar o programa.
- código = 1: multiplicar os três valores;
- código = 2: somar os três valores;
- código = 3: subtrair os três valores;
- código = 4: somar o quadrado dos 3 valores;
- código = 5: apenas escrever os 3 valores*/

#include <stdio.h>
#include <conio.h>
int main (){
    float n1, n2, n3, soma, sub, divi, mult;
    char cod; 

    printf("Digite um código: ");
    scanf("%c", &cod);
    switch(cod){
    case '1': 
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);
    mult=n1*n2*n3;
    printf("A a multiplicação é: %.2f", mult);
            break;
    case '2':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);
    soma=n1+n2+n3;
    printf("A soma é: %.2f", soma);
            break;
    case '3':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);
    sub=n1-n2-n3;
    printf("A subtração é: %.2f", sub);
            break;    
    case '4':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);
    mult=n1+n2+n3*2;
    printf("O quadrado da soma é: %.2f", mult);
            break;
     case '5':
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);
    printf("Os três números escolhidos foram: %f, %f e %f", n1, n2, n3);
            break;  
    default: printf("CÓDIGO INVÁLIDO!");
     return 0;
}
}