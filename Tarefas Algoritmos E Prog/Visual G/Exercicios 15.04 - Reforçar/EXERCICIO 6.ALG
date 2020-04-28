Algoritmo "Exercicio 6"
//6. Construir um algoritmo que leia dois números e efetue a adição.
//caso o valor somado seja maior que 20,
//este deverá ser apresentado somando e a ele mais 8;
//caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
//subtraindo-se 5

Var
n1, n2, soma, sub, soma2, sub2:real

Inicio
escreva("Digite um número:")
leia(n1)
escreva("Digite outro número:")
leia(n2)
soma<-n1+n2
se (soma>20)entao
soma2<-soma+8
escreva("",soma,"+8 é:",soma2)
senao (soma<=20)
sub<-soma-5
escreva("",soma,"-5 é:", sub)
fimse
Fimalgoritmo