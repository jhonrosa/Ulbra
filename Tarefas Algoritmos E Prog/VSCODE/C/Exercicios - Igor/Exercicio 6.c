/*6. Solicite os seguintes dados de um aluno
Nome do aluno (string)
Nota N1 (double)
Nota N2 (double)
Ao final, exiba o nome do aluno e média baseando-se na seguinte fórmula: N1 * 0.4 + N2 * 0.6 */

#include <stdio.h>
int main(){

    char nome[100];
    float n1, n2, media;

    printf("Informe seu nome completo: ");
    scanf(" %[^\n]s", nome);
    printf("Informe sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe sua segunda nota: ");
    scanf("%f",&n2);
    media=n1*0.4+n2*0.6;
    printf("%s, sua média foi: %.2f", nome, media);
    return 0;
}