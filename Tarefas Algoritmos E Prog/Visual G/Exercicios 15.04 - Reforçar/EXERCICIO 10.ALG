Algoritmo "Exercicio 10"
//10. Fa�a um algoritmo para ler: n�mero da conta do cliente, saldo, d�bito
//e cr�dito. Ap�s, calcular e escrever o saldo atual
//(saldo atual = saldo - d�bito + cr�dito).
//Tamb�m testar se saldo atual for maior ou igual a zero
//escrever a mensagem 'Saldo Positivo', sen�o
//escrever a mensagem 'Saldo Negativo'.
Var
cliente:inteiro
saldo, debito, credito, saldoat:real

Inicio
escreva("Informe o n�mero da sua conta:")
leia(cliente)
escreva("Informe seu saldo banc�rio:")
leia(saldo)
escreva("Informe o seu d�bito:")
leia(debito)
escreva("Informe o seu cr�dito:")
leia(credito)
saldoat<-saldo-debito+credito
se(saldoat>=0)entao
escreva("",saldoat,". Saldo positivo!")
senao
escreva("", saldoat,". Saldo negativo!")
fimse

Fimalgoritmo