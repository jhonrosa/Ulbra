/*18. Uma empresa de pesquisa resolveu entrevistar os torcedores do Rio Grande do
Sul para saber qual a maior torcida. Faça um programa que leia um número não
conhecido de respostas do time que torce: G – Grêmio, I – Inter ou O - outros. O
programa deve encerrar quando for digitado F - fim. Escrever ao final o total de
torcedores entrevistados, a quantidade de gremistas, a quantidade de colorados e
a porcentagem de gremistas e de colorados em relação ao total.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    char time; 
    int cont=0, i=0, g=0;

    do
    {
        printf("I - Inter\n G - Grêmio\n O - Outros\n F - Fim\n");
        printf("Informe o time que você torce:");
        scanf("%s", &time);
        getchar();
        cont++;
        
         if (time == 'I' || time == 'i')
        {
            i++;
        }
        else if (time == 'G' || time == 'g')
        {
            g++;
        }
        
    printf("Total de entrevistados: %i\n", cont);
    printf("Foram entrevistados: %i gremistas.\n", g);
    printf("Foram entrevistados: %i colorados.", i);
    system("pause");

    } while (time == 'F' || time == 'f');
    
    
    return 0;
}