/*10. Ano bissexto
Solicite ao usuário que digite um ano. Seu programa deverá informar se o ano digitado é bissexto ou não.
Lembre-se que ano bissexto (de forma simplificada) é aquele que é divisível por 4 com resto igual a zero.*/

#include <stdio.h>
int main(){

    int ano;

    printf("Informe um ano: ");
    scanf("%i", &ano);

    if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 !=0)){
        printf("O ANO É BISSEXTO!");
        }
    else{
        printf("O ANO NÃO É BISSEXTO!");
        }
    return 0;
}