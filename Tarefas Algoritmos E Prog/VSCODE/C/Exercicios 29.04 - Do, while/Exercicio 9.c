/*9. Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida.
Para cada leitura da senha incorreta informada escrever a mensagem "SENHA
INVÁLIDA". Quanto a senha for informada corretamente deve ser impressa a
mensagem "ACESSO PERMITIDO" e o algoritmo encerrado. Considere que a
senha correta é o valor 2020.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int senha;
do {
    system("cls");
    printf("Digite sua senha:");
    scanf("%d", &senha);

    if (senha==2020) {
        printf("ACESSO PERMITIDO!");
    }else {
        printf("SENHA INVÁLIDA!\n");
    }
}   while(senha !=2020);
    system("pause");
    return 0;
}