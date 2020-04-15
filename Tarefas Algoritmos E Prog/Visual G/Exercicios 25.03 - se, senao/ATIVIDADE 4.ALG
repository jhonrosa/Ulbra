Algoritmo "ATIVIDADE 4"
//4. Construa um algoritmo que leia dois números e efetue a adição. Caso o valor
//somado seja maior que 20, este deverá ser apresentado somando e a ele mais
//8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
//subtraindo-se 5
Var
n1, n2, soma, total: real

Inicio
escreva("Digite um número:")
leia(n1)
escreva("Digite outro número:")
leia(n2)
soma<-n1+n2
se(soma>20)entao
total<-soma+8
escreva("A soma entre ", n1, " e", n2, " foi de: ", soma, " + 8 = ", total)
senao
total<-soma-5
escreva("A soma entre ", n1, " e", n2, " foi de:", soma, " - 5= ", total)
fimse

Fimalgoritmo