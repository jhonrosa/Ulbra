//Faça um programa que calcule a potência de um número. Solicite que o usuário informe a base e o
//expoente, e seu programa deverá calcular a potência do referido número. EX:
//Base = 7
//Expoente = 2
//Resultado: 49

#include <stdio.h>
int main(){

    int n, x, poten, cont;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Digite um número inteiro não-negativo: ");
    scanf("%d", &n);
    poten=1;
    cont=0;
    while(cont !=n){
        poten= poten*x;
        cont = cont +1;
    }
        printf("\nO valor de %d elevado a %d é: %d", x, n, poten);
        return 0;
   

}