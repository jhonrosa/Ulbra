Algoritmo "ATIVIDADE 2"
//2. Faça um algoritmo para ler um número e se ele for maior do que 30, então
//exibir metade do número, caso contrário, imprimir o dobro do número.
Var
num, n1: real

Inicio
escreva("Digite um número: ")
leia(num)
se(num<=30)entao
n1<-num/2
escreva("A metade do número é: ", n1)
senao
n1<-num*2
escreva("O dobro do número é: ", n1)
fimse
Fimalgoritmo