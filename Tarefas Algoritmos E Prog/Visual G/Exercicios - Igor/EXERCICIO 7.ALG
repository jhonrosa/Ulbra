Algoritmo "Exercicio 7"
//7. Calcule a seguinte f�rmula: (C# e fluxograma)
//X = b / m.
//Se m = 0, voc� n�o deve efetuar a divis�o. E deve exibir um erro na tela.
//Ao final, mostre o valor de x.
Var
b, m, calc: real

Inicio
escreva("Digite um n�mero: ")
leia(b)
escreva("Digite um n�mero: ")
leia(m)
calc<-b/m
se (m=0)entao
escreva("ERRO!")
senao
escreva("A divis�o de",b, " por", m," �:", calc)
fimse

Fimalgoritmo
