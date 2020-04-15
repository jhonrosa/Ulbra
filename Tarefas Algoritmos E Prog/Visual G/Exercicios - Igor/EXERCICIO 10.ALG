Algoritmo "Exercicio 10"
//10. Ano bissexto
//Solicite ao usuário que digite um ano. Seu programa deverá informar se
//o ano digitado é bissexto ou não. Lembre-se que ano bissexto
//(de forma simplificada) é aquele que é divisível por 4 com resto igual a zero.
Var
ano:inteiro

Inicio
escreva("Digite um ano para saber se é bissexto: ")
leia(ano)

se (ano mod 400 = 0) ou ((ano mod 4 = 0) e (ano mod 100 <> 0)) entao
        escreval("O ANO É BISSEXTO!")

senao
        escreval("O ANO NÃO É BISSEXTO!")
fimse

Fimalgoritmo