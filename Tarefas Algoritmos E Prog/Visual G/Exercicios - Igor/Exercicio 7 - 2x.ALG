Algoritmo "Exercicio 7"
//7. Calcule a seguinte f�rmula: (C# e fluxograma)
//X = b / m.
//Se m = 0, voc� n�o deve efetuar a divis�o. E deve exibir um erro na tela.
//Ao final, mostre o valor de x.
Var
b, m, calc:real

Inicio
escreva("Digite um valor para b:")
leia(b)
escreva("Digite um valor para m:")
leia(m)
se (m=0) entao
escreva("ERRO!")
senao
calc<-b/m
escreva("O valor do calculo �:",calc)
fimse
Fimalgoritmo