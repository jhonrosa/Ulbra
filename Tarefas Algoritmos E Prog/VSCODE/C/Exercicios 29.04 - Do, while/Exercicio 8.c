/*8. Utilize a estrutura do enquanto para escrever a tabuada de um determinado
número informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int num, contador=0;
int resp;
do {
system("cls");
printf("Tabuada\n\n");
printf("Informe um número para o calculo da tabuada:");
scanf("%d", &num);

for (contador=0; contador<=10; contador++)
{
    printf("%d x %d = %d\n", contador,num, contador*num);
}
printf("\n1 - Novo calculo\n");
printf("2 - Sair\n");
scanf("%d", &resp);
} while(resp !=2);
system("pause");
return 0;
}