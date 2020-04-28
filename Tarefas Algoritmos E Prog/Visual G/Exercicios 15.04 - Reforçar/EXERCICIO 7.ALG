Algoritmo "Exercicio 7"
//7. Fazer um algoritmo que leia o percurso em quilômetros,
//o tipo do carro e informe o consumo estimado de combustível,
//sabendo-se que um carro tipo C faz 12 Km com um litro de gasolina,
//um tipo B faz 9 Km e o tipo A, 8 Km por litro.

Var
KM:caracter
perc, resultado:real

Inicio
escreva("Informe o percurso em KM:")
leia(perc)
escreval("Informe o tipo de carro:")
escreva("Tipo A - 8KM/L | Tipo B - 9KM/L | Tipo C - 12KM/L:")
leia(KM)

se ((KM="a") ou (KM="A")) entao
resultado<-perc/8
escreva("O consumo estimado de combustível foi:", resultado)
senao

se ((KM="b") ou (KM="B")) entao
resultado<-perc/9
escreva("O consumo estimado de combustível foi:", resultado)
senao

se ((KM="c") ou (KM="C")) entao
resultado<-perc/12
escreva("O consumo estimado de combustível foi:", resultado)
fimse
fimse
fimse
Fimalgoritmo