Algoritmo "Exercicio 8"
//8. Programa faixa etária: (C# e fluxograma)
//Solicite o nome e a idade de uma pessoa.
//Então, exiba:
//Olá ______ ! Sua idade é ________
//Exiba também a faixa etária de acordo com as regras abaixo:
//Se idade = 0 "bebê"
//Se idade > 0 e idade <= 12 "Criança"
//Se idade > 12 e idade <= 18 "adolescente"
//Se idade > 18 e idade <= 60 "adulto"
//Se idade > 60 e idade <= 120 "idoso"
//Se idade > 120 "múmia"
Var
nome:caracter
idade:inteiro

Inicio
escreva("Informe seu nome:")
leia(nome)
escreva("Informe sua idade:")
leia(idade)
se (idade=0)entao
escreva("Você é um bebê!")
senao
fimse
se (idade>0) e (idade<=12)entao
escreva("Você é uma criança!")
senao
fimse
se (idade>12) e (idade<=18) entao
escreva("Você é um adolescente!")
senao
fimse
se (idade>18) e (idade<=60) entao
escreva("Você é um adulto!")
senao
fimse
se (idade>60) e (idade<=120) entao
escreva("Você é um idoso!")
senao
fimse
se (idade>120) entao
escreva("Você é uma múmia!")
senao
fimse
Fimalgoritmo