//15. FUA que leia a idade de uma pessoa em anos, meses e dias e mostre-a expressa em
//dias. (Nota: considere todos os anos com 365 dias e todos os meses com 30 dias).

#include <stdio.h>
int main() {

    int ano_at, ano_ps, mes_at, mes_ps, dia_at, dia_ps, a, b, c;

    printf("Digite o dia do nascimento: ");
    scanf("%i", &dia_ps);
    printf("O mês (numeral) que nasceu: ");
    scanf("%i", &mes_ps);
    printf("E o ano:");
    scanf("%i", &ano_ps);

    printf("Digite o dia de hoje: ");
    scanf("%i", &dia_at);
    printf("Digite o mês (numeral) atual: ");
    scanf("%i", &mes_at);
    printf("E o ano: ");
    scanf("%i", &ano_at);

    
    a = ano_at - ano_ps;
    b = a*365;
    c = a*12;

    printf("Você nasceu em: %i/%i/%i", dia_ps, mes_ps, ano_ps);
    printf("\nVocê vive atualmente %i em dias!", b);
    printf("\nSua idade em meses é: %i meses",c);
    printf("\nSua idade em anos é: %i",a);

    return 0;

}