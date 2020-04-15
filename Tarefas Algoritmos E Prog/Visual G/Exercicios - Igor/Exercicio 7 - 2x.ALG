Algoritmo "Exercicio 7"
//7. Calcule a seguinte fórmula: (C# e fluxograma)
//X = b / m.
//Se m = 0, você não deve efetuar a divisão. E deve exibir um erro na tela.
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
escreva("O valor do calculo é:",calc)
fimse
Fimalgoritmo