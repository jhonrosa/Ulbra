//7. Faça um algoritmo que verifique a validade de uma senha fornecida pelo
//usuário. A senha válida é o número 1234. OBS: Se a senha informada
//pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser exibida.
//Se for a correta, a mensagem "ACESSO PERMITIDO" deverá ser exibida.

#include <stdio.h>
int main(){

    int senha;

    printf("Digite aqui sua senha: ");
    scanf("%i", &senha);
    if(senha==1234){
        printf("ACESSO PERMITIDO");
    }
    else{
        printf("ACESSO NEGADO");
        
    }
        return 0;
}