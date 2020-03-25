#include <stdio.h> 
int main() {
    
    float vA, vB;
    
    printf("Informe um número: ");
	scanf("%f", &vA);
 
	printf("Informe outro número: ");
	scanf("%f", &vB);
 
	printf("\nA soma dos números é: %.2f", (vA + vB));
	printf("\nA subtração dos números é: %.2f", (vA - vB));
	printf("\nA multiplicação dos números é: %.2f", (vA * vB));
	printf("\nA divisão dos números é: %.2f", (vA / vB));

    return 0;


}
