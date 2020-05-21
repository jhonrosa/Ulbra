/*11. Faça um programa para ler os salários dos funcionários de uma empresa. A cada
salário lido o algoritmo deve perguntar ao usuário se ele deseja continuar (s/n).
Se a resposta for não (n), a leitura de salários deve ser encerrada. Após, calcular
e escrever a média salarial dos funcionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
system("cls");

float salario, resul=0, contador=0;
char opcao;

do {
    printf("Informe seu salário:");
    scanf("%f", &salario);
    
    printf("Dejesa continuar: s - Sim | n - Não: ");
    scanf("%s", &opcao);
    contador++;
    resul= resul+salario;
    getchar();
    
}
    while (opcao =='s' || opcao == 'S'); 
    resul=resul/contador;
    printf("A média salárial dos funcionários é: %.2f", resul);
    

    system("pause");
    return 0;
}