Algoritmo "Exercicio 5"
//5. Ler três números e verificar se a soma deles é maior que 50.
//Se for, escrever uma mensagem informando.

Var
soma, a, b, c:real

Inicio
escreva("Digite um número:")
leia(a)
escreva("Digite outro número:")
leia(b)
escreva("Digite mais um número:")
leia(c)
soma<-a+b+c
se(soma>50)entao
escreva("A soma foi maior que 50!")
senao
escreva("",a," +",b," +",c," é =", soma)
fimse

Fimalgoritmo