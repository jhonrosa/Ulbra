Algoritmo "Exercicio 10"
//10. Ano bissexto
//Solicite ao usu�rio que digite um ano. Seu programa dever� informar se
//o ano digitado � bissexto ou n�o.
//Lembre-se que ano bissexto (de forma simplificada) � aquele que � divis�vel
//por 4 com resto igual a zero.
Var
ano:inteiro


Inicio
escreva("Informe um ano para saber se � bissexto: ")
leia(ano)

se (ano mod 400 = 0) ou ((ano mod 4 = 0) e (ano mod 100 <> 0)) entao

        escreval("O ano � bissexto!")

senao

        escreval("O ano n�o � bissexto!")

fimse

Fimalgoritmo