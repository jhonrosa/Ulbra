Algoritmo "Ler N de N negativos"
//8. LER 10 VALORES E ESCREVER QUANTOS DESTES VALORES SÃO NEGATIVOS.
var
num,i, cont: inteiro

inicio
i<-1
para i de 1 ate 10 faca
escreva(i,"º valor ")
leia(num)
i<-i+1
se (num<0) entao
cont <- cont + 1

fimse
fimpara

escreva("Quantidade de numeros negativos: ",cont)

fimalgoritmo