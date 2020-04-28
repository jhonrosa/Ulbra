Algoritmo "Tabuada do 1 ao 5"
//10. Escreva um programa que imprima a tabuada (de 1 a 10) para os
//números de 1 a 5.
Var
i,num:inteiro

Inicio
escreva("Informe um número para a tabuada:")
leia(num)
para i de 1 ate 5 passo 1 faca
escreval(num," x", i, " =", i*num)
se(num>5)entao
escreva("erro! Escolha de 1 a 5!")
fimse
fimpara
Fimalgoritmo