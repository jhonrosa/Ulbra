Algoritmo "Exercicio 2"
//2. Faça um algoritmo que leia um mês e diga qual a estação do ano
//correspondente (Primavera, Verão, Outono, Inverno).
Var
mes:inteiro

Inicio
escreva("Informe o mês que deseja saber a estação (de 1 a 12):")
leia(mes)

se ((mes=2)ou(mes=1) ou (mes=12))entao
escreva("Verão!")
senao
se ((mes>=3) e (mes<=5)) entao
escreva("Outono!")
senao
se ((mes>=6) e (mes<=8)) entao
escreva("Inverno!")
senao
se((mes>=9) e (mes<=11))entao
escreva("Primavera!")
senao
se (mes=0) ou (mes>=13) entao
escreva("ERRO!")
senao
fimse
fimse
fimse
fimse
fimse
Fimalgoritmo