Algoritmo "Exercicio 5"
//5. Calcule valor de R, exibindo-o em vídeo. Faça em fluxograma e em C#
//X = B³ * H
//R = X / J
Var
b, h, j, calc, calc2: real

Inicio
escreva("Digite um número: ")
leia(b)
escreva("Digite outro número: ")
leia(h)
escreva("Digite o número que você deseja que divida o calculo 1: ")
leia(j)
calc<- (b*b*b)*h
calc2<-calc/j
escreval("O valor de X é: ", calc)
escreval("",calc," dividido por",j," é:", calc2)

Fimalgoritmo