Algoritmo "Exercicio 7"
//7. Calcule a seguinte fórmula: (C# e fluxograma)
//X = b / m.
//Se m = 0, você não deve efetuar a divisão. E deve exibir um erro na tela.
//Ao final, mostre o valor de x.
Var
b, m, calc: real

Inicio
escreva("Digite um número: ")
leia(b)
escreva("Digite um número: ")
leia(m)
calc<-b/m
se (m=0)entao
escreva("ERRO!")
senao
escreva("A divisão de",b, " por", m," é:", calc)
fimse

Fimalgoritmo
