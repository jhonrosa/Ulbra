/*2. Treinamento de WriteLine
Solicite os seguintes dados: nome, sobrenome, rua, nº, bairro, cidade, estado e cep.
Exiba:
Sr: Nome + Sobrenome + Residente à Rua, nº, bairro, cidade - estado, CEP. Favor comparer à escola neste sábado.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char cep[100], nome[100], end[100], bairro[100], cid[100], estado[100];
    int num;

    printf("Informe seu nome completo: ");
    scanf(" %[^\n]s", nome);
    printf("Informe seu endereço: ");
    scanf(" %[^\n]s", end);
    printf("Informe o numeral da sua casa: ");
    scanf("%i", &num);
    printf("Informe seu bairro: ");
    scanf("%s", bairro);
    printf("Informe sua cidade: ");
    scanf("%s", cid);
    printf("Informe a sigla do seu estado: ");
    scanf("%s", estado);
    printf("Informe o CEP: ");
    scanf("%s", cep);

    printf("\n %s, residente ao endereço %s, %i, %s, %s - %s, %s. \n Favor comparecer a escola neste sábado.", nome, end, num, bairro, cid, estado, cep);

    return 0;

}