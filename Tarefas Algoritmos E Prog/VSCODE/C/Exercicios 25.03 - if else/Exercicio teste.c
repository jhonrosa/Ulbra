#include <stdio.h>

 int idade;

int main() {
    printf("Digite a idade:");
    scanf("%i", &idade);
    if (idade == 16 || idade == 17 || idade>70)
        {
        printf("\n Voto facultativo!");
        printf("\n Você não é obrigado a votar!");
        }
    else
        if (idade >=18 && idade <=70)
            printf("Voto obrigatório!");
        else
            if(idade <= 15)
            {
                printf("Ainda não pode votar");
                printf("\nPrecisa ter 16 anos ou mais");
            }
    return 0;
}