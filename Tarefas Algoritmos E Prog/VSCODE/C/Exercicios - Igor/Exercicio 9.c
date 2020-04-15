/*9. Dia da Semana
Solicite um dia da semana (número inteiro) e seu programa deverá informar por extenso qual é o dia. EX: 1 =
domingo.*/

#include <stdio.h>
int main(){
    int dia;

    printf("Informe o dia da semana(numeral): ");
    scanf("%i", &dia);
    switch(dia){
    case 1:
    printf("Domingo!");
        break;
    case 2:
    printf("Segunda-feira!");
        break;
    case 3:
    printf("Terça-feira!");
        break;
    case 4:
    printf("Quarta-feira!");
        break;
    case 5:
    printf("Quinta-feira!");
        break;
    case 6:
    printf("Sexta-feira!");
        break;
    case 7:
    printf("Sábado!");
        break;
        return 0;
    }
}   