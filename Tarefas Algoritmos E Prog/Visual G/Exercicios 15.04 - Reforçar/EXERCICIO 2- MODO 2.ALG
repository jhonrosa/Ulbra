Algoritmo "Exercicio 2- modo 2"
//2. Fa�a um algoritmo que leia um m�s e diga qual a esta��o do ano
//correspondente (Primavera, Ver�o, Outono, Inverno).
//Considere: outono - abril, maio e junho
//Inverno - julho, agosto e setembro
//Primavera � outubro, novembro e dezembro
//Ver�o � janeiro, fevereiro e mar�o

Var
mes:caracter

Inicio


escreva("Informe o m�s para saber a esta��o:")
leia(mes)

escolha (mes)
caso "abril"
escreva("Outono!")
caso "maio"
escreva("Outono!")
caso "junho"
escreva("Outono!")

caso "julho"
escreva("Inverno!")
caso "agosto"
escreva("Inverno!")
caso "setembro"
escreva("Inverno!")


caso "outubro"
escreva("Primavera!")
caso "novembro"
escreva("Primavera!")
caso "dezembro"
escreva("Primavera!")

caso "janeiro"
escreva("Ver�o!")
caso "fevereiro"
escreva("Ver�o!")
caso "mar�o"
escreva("Ver�o!")
fimescolha
Fimalgoritmo