Algoritmo "ATIVIDADE 6"
//6. Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro
//e informe o consumo estimado de combustível, sabendo-se que um carro
//tipo C faz 12 Km com um litro de gasolina, um tipo B faz 9 Km e o tipo A
//8 Km por litro.
Var
KM, consumo: real
tipo1: caracter

Inicio
Escreva("Informe o percurso em KM:")
leia(KM)
escreval("Informe o tipo de carro:")
escreva("Tipo A - 8KM/L | Tipo B - 9KM/L | Tipo C - 12KM/L:")
leia(tipo1)
se(tipo1="a")entao
consumo<-KM/8
escreva("A quantidade de combustível consumida é:", consumo)
fimse
se(tipo1="b")entao
consumo<-KM/9
escreval("A quantidade de combustível consumida é:", consumo)
senao( tipo1="c")
consumo<-KM/12
escreval("A quantidade de combustível consumida é:", consumo)
fimse
fimalgoritmo