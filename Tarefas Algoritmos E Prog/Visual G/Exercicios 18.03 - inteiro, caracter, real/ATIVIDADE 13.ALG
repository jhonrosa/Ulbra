Algoritmo "Atividade 13"
//13. FUA para ler dois números. Multiplicar o primeiro por 4
//e o segundo por 6. Calcule a media aritmética
//dos resultados obtidos. Escrever os valores lidos, os calculados e a
//media aritmética
Var
a, b, s, s1, calc, calc1, calc2, media: real


Inicio
escreva("Digite um número: ")
leia(a)
escreva("Digite outro número: ")
leia(b)
s<- a
s1<- b
calc<- a*4
calc1<- b*6
calc2<- b*6/2
media<- a*4 + b*6/2
escreval(s,"*4 +", s1,"*6/2")
escreval(calc, " +", calc1,"/2")
escreval(calc," +", calc2)
escreval("Valor da média é: ", media)

Fimalgoritmo