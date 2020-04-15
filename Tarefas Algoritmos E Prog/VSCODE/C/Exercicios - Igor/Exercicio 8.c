/*8. Programa faixa etária: (C# e fluxograma)
Solicite o nome e a idade de uma pessoa.
Então, exiba:
Olá ______ ! Sua idade é ________
Exiba também a faixa etária de acordo com as regras abaixo:
Se idade = 0 "bebê"
Se idade > 0 e idade <= 12 "Criança"
Se idade > 12 e idade <= 18 "adolescente"
Se idade > 18 e idade <= 60 "adulto"
Se idade > 60 e idade <= 120 "idoso"
Se idade > 120 "múmia"*/

#include <stdio.h>
int main(){
    char nome[100];
    int idade;

    printf("Informe seu nome: ");
    scanf(" %[^\n]s", nome);
    printf("Informe sua idade: ");
    scanf("%i", &idade);
    
    if(idade<=12){
    printf("Olá %s! Sua idade é %i. \nVocê é um bebê!", nome, idade);
    }
    else 
        if(idade>12 && idade<=18)
    {
         printf("Olá %s! Sua idade é %i. \nVocê é um adolescente!", nome, idade);
    }   
        else
            if(idade>18 && idade<=60){
            printf("Olá %s! Sua idade é %i. \nVocê é um adulto!", nome, idade);
        }
        else 
            if(idade>60 && idade<=120)
        {
        printf("Olá %s! Sua idade é %i. \nVocê é um idoso!", nome, idade);
        }
            else
                if(idade>120){
                printf("Olá %s! Sua idade é %i. \nVocê é uma múmia!", nome, idade);
            }
            return 0;
}