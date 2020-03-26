//5. Faça um algoritmo para entrar com código, sexo e idade de uma pessoa. Se a
//pessoa for do sexo feminino e tiver menos que 25 anos, imprimir código e
//mensagem: ACEITA. Caso contrário, imprimir código e a mensagem: NÃO
//ACEITA.

#include <stdio.h>
int main(){
    int cd, idade;
    char sexo;
    printf("Digite seu código: ");
    scanf("%i", &cd);
    printf("Digite sua idade: ");
    scanf("%i%*c", &idade);
    printf("Insira o seu sexo: M - masculino F - feminino: ");
    scanf("%c", &sexo);

    if (sexo == 'f' && idade<=25)
        printf("Você está: ACEITA!");
   
    else
        {
        printf("Você foi: RECUSADA!");
    }
    return 0;
}