#include <stdio.h> 
int main() {
    
    float vA, vB;
    
    printf("Informe um n�mero: ");
	scanf("%f", &vA);
 
	printf("Informe outro n�mero: ");
	scanf("%f", &vB);
 
	printf("\nA soma dos n�meros �: %.2f", (vA + vB));
	printf("\nA subtra��o dos n�meros �: %.2f", (vA - vB));
	printf("\nA multiplica��o dos n�meros �: %.2f", (vA * vB));
	printf("\nA divis�o dos n�meros �: %.2f", (vA / vB));

    return 0;


}
