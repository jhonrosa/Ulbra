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

nome: caracter
idade: inteiro

Inicio
escreva("Informe seu nome:")
leia(nome)
escreva("Informe sua idade:")
leia(idade)
se(idade<=12) entao
escreva("",nome,". Voc� � um beb�!")
senao
se(idade<=18)entao
escreva("",nome,". Voc� � um adolescente!")
senao
se (idade<=60)entao
escreva("",nome,". Voc� � um adulto!")
senao
se(idade<=120)entao
escreva("",nome,". Voc� � um idoso!")
senao(idade>120)
escreva("",nome,". Voc� � uma m�mia!")
fimse
fimse
fimse
fimse

Fimalgoritmo