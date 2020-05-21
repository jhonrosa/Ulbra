/*7. Utilize a estrutura do enquanto para escrever números na tela, de 1 até o valor
informado pelo usuário como final. Ex: usuário informou 7, na tela aparece:
1, 2, 3, 4, 5, 6, 7.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int num, y=1;

    printf("Digite um número:");
    scanf("%i", &num);
       
while (y<=num){
    
    printf("%i", y);
    y++;
}
    return 0;
}