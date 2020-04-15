Algoritmo "ATIVIDADE 3"
//3. Faça um algoritmo para ler três números e verificar se a soma deles é maior
//que 50. Se for, escrever uma mensagem informando.
Var
n1, n2, n3, soma: real

Inicio
escreva("Digite um número:")
leia(n1)
escreva("Digite um segundo número:")
leia(n2)
escreva("Digite um terceiro número:")
leia(n3)
soma<-n1+n2+n3
se(soma>=50)entao
escreva("A soma entre os 3 números foi maior que 50, foi:", soma)
senao(soma<=50)
escreva("A soma entre os 3 números foi menor que 50, foi:", soma)
fimse

Fimalgoritmo