Algoritmo "ATIVIDADE 4"
//4. Construa um algoritmo que leia dois n�meros e efetue a adi��o. Caso o valor
//somado seja maior que 20, este dever� ser apresentado somando e a ele mais
//8; caso o valor somado seja menor ou igual a 20, este dever� ser apresentado
//subtraindo-se 5
Var
n1, n2, soma, total: real

Inicio
escreva("Digite um n�mero:")
leia(n1)
escreva("Digite outro n�mero:")
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