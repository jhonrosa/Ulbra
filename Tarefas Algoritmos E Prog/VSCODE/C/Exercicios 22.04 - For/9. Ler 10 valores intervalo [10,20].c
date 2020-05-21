/*9. LER 10 VALORES E CONTAR QUANTOS ESTÃO NO INTERVALO [10,20] E QUANTOS
DELES ESTÃO FORA DESTE INTERVALO. ESCREVER O RESULTADO DAS DUAS
CONTAGENS.*/

#include <stdio.h>
int main()
{

    int num, dentro=0, fora=0, x;
    
    for (x = 1; x <= 10; x++)
    {
        printf("Digite um número:");
        scanf("%i", &num);
        if (num >= 10 && num <= 20)
        {
            dentro += 1;
        }
        else
        {
            fora += 1;
        }
    }
    printf("Quantidade de valores dentro do intervalo entre 10 e 20: %i\n", dentro);
    printf("Quantidade de valores fora do intervalo entre 10 e 20: %i", fora);

    return 0;
}