//19. FUA para dar o total, em reais, de um cofrinho que contenha:
// n1 moedas de 1 real;
// n2 moedas de 50 centavos;
// n3 moedas de 25 centavos;
// n4 moedas de 10 centavos; e
// n5 moedas de 5 centavos.

#include <stdio.h>
int main() {

    int n1,n2,n3,n4,n5;
    float a,b,c,d,e,total;
    
    printf("Digite a quantidade de moedas de 1 real: ");
    scanf("%i", &n1);
    printf("Digite a quantidade de moedas de 50 centavos: ");
    scanf("%i", &n2);
    printf("Digite a quantidade de moedas de 25 centavos: ");
    scanf("%i", &n3);
    printf("Digite a quantidade de moedas de 10 centavos: ");
    scanf("%i",&n4);
    printf("Digite a quantidade de moedas de 5 centavos: ");
    scanf("%i", &n5);

    total = (n1) + (n2/2) + (n3/4) + (n4/10) + (n5/20);
        

    printf("O valor total contido em seu cofrinho é de: %.2f Reais", total);
    
    return 0;
}