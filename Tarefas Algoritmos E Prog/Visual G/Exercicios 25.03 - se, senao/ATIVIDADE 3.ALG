Algoritmo "ATIVIDADE 3"
//3. Fa�a um algoritmo para ler tr�s n�meros e verificar se a soma deles � maior
//que 50. Se for, escrever uma mensagem informando.
Var
n1, n2, n3, soma: real

Inicio
escreva("Digite um n�mero:")
leia(n1)
escreva("Digite um segundo n�mero:")
leia(n2)
escreva("Digite um terceiro n�mero:")
leia(n3)
soma<-n1+n2+n3
se(soma>=50)entao
escreva("A soma entre os 3 n�meros foi maior que 50, foi:", soma)
senao(soma<=50)
escreva("A soma entre os 3 n�meros foi menor que 50, foi:", soma)
fimse

Fimalgoritmo