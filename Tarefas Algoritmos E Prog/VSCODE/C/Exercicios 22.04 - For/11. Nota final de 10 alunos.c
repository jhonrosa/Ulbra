/*1. Faça um algoritmo para calcular a nota final de 10
alunos. Considera que para cada aluno serão lidas 3
notas e que a nota final será a utilizada na ULBRA(soma
das 3 notas) e que as notas que serão lidas são AP1,
AP2 e AS.*/

#include <stdio.h>
int main() {

    int x;
    float nota1, nota2, as, soma;
    for (x=1;x<=10; x++) {
        printf("Informe a nota 1:");
        scanf("%f", &nota1);
        printf("Informe a nota 2:");
        scanf("%f", &nota2);
        printf("Informe a nota AS:");
        scanf("%f", &as);
        soma= (nota1+nota2+as)/3;
    }

    printf("A média que será utilizada na ulbra é: %.2f", soma);
    return 0;
}