Algoritmo "Exercicio 8"
//8. Programa faixa et�ria: (C# e fluxograma)
//Solicite o nome e a idade de uma pessoa.
//Ent�o, exiba:
//Ol� ______ ! Sua idade � ________
//Exiba tamb�m a faixa et�ria de acordo com as regras abaixo:
//Se idade = 0 "beb�"
//Se idade > 0 e idade <= 12 "Crian�a"
//Se idade > 12 e idade <= 18 "adolescente"
//Se idade > 18 e idade <= 60 "adulto"
//Se idade > 60 e idade <= 120 "idoso"
//Se idade > 120 "m�mia"
Var
nome:caracter
idade:inteiro

Inicio
escreva("Informe seu nome:")
leia(nome)
escreva("Informe sua idade:")
leia(idade)
se (idade=0)entao
escreva("Voc� � um beb�!")
senao
fimse
se (idade>0) e (idade<=12)entao
escreva("Voc� � uma crian�a!")
senao
fimse
se (idade>12) e (idade<=18) entao
escreva("Voc� � um adolescente!")
senao
fimse
se (idade>18) e (idade<=60) entao
escreva("Voc� � um adulto!")
senao
fimse
se (idade>60) e (idade<=120) entao
escreva("Voc� � um idoso!")
senao
fimse
se (idade>120) entao
escreva("Voc� � uma m�mia!")
senao
fimse
Fimalgoritmo