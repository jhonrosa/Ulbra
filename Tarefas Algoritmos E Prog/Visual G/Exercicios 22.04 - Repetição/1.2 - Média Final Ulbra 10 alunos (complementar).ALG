Algoritmo "M�dia final 10 alunos ulbra"
//1. Fa�a um algoritmo para calcular a nota final de 10
//alunos. Considera que para cada aluno ser�o lidas 3
//notas e que a nota final ser� a utilizada na ULBRA(soma
//das 3 notas) e que as notas que ser�o lidas s�o AP1,
//AP2 e AS.
Var
ap1, ap2, as,  media, soma:real
x: inteiro

Inicio

soma<-0
para x de 1 ate 10 passo 1 faca
escreva("Informe a nota AP1:")
leia(ap1)
escreva("Informe a nota AP2:")
leia(ap2)
escreva("Informa a nota AS:")
leia(as)
soma<-ap1+ap2+as
fimpara
media<-soma/3
escreva("A m�dia final da ulbra ser�:", media)
Fimalgoritmo