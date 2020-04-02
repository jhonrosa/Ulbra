/*4 . Escreva um algoritmo que tendo como dados de entrada o preço de um produto e
um código de origem emita o preço junto de sua procedência. Caso o código não
seja nenhum dos especificados o produto é considerado importado. Os códigos de
origem são os seguintes:
1 - Sul 5 – Nordeste
2 – Norte 6 – Sudeste
3 – Leste 7 - Centro Oeste
4 – Oeste 8 – Noroeste */

#include <stdio.h>
#include <conio.h>
int main(){

float preco;
int cod;

printf("Digite o preço do produto: ");
scanf("%f", &preco);
printf("Digite o código de origem: ");
scanf("%i", &cod);
switch(cod){
    case 1:
    printf("O produto custa: R$%.2f e sua procedência é do sul", preco);
    break;
    case 2:
    printf("O produto custa: R$%.2f e sua procedência é do norte", preco);
    break;
    case 3:
    printf("O produto custa: R$%.2f e sua procedência é do leste", preco);
    break;
    case 4:
    printf("O produto custa: R$%.2f e sua procedência é do oeste", preco);
    break;
    case 5:
    printf("O produto custa: R$%.2f e sua procedência é do nordeste", preco);
    break;
    case 6:
    printf("O produto custa: R$%.2f e sua procedência é do sudeste", preco);
    break;
    case 7:
    printf("O produto custa: R$%.2f e sua procedência é do centro oeste", preco);
    break;
    case 8:
    printf("O produto custa: R$%.2f e sua procedência é do noroeste", preco);
    break;
    default:
    printf("Produto importado!");
    return 0;
}

}