//8. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e
//R$ 1,00 se forem compradas pelo menos 12. Escreva um algoritmo que leia o
//número de maçãs compradas, calcule e escreva o custo total da compra.

#include <stdio.h>
int main(){
   
    float num, preco;

    printf("Informe o número de maças que deseja comprar: ");
    scanf("%f", &num);
    if (num<12){
    preco=num*1.30;
        printf("Você comprou %f maças, custaram: R$%.2f", num, preco);
    }
    else {
        preco=num*1.0;
        printf("Você comprou %f maças, custaram: R$%.2f", num, preco);
    }
        return 0;
    
}