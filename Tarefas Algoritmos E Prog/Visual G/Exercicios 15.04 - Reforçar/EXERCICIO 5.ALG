Algoritmo "Exercicio 5"
//5. Ler tr�s n�meros e verificar se a soma deles � maior que 50.
//Se for, escrever uma mensagem informando.

Var
soma, a, b, c:real

Inicio
escreva("Digite um n�mero:")
leia(a)
escreva("Digite outro n�mero:")
leia(b)
escreva("Digite mais um n�mero:")
leia(c)
soma<-a+b+c
se(soma>50)entao
escreva("A soma foi maior que 50!")
senao
escreva("",a," +",b," +",c," � =", soma)
fimse

Fimalgoritmo