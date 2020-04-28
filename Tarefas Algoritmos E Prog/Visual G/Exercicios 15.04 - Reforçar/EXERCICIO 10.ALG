Algoritmo "Exercicio 10"
//10. Faça um algoritmo para ler: número da conta do cliente, saldo, débito
//e crédito. Após, calcular e escrever o saldo atual
//(saldo atual = saldo - débito + crédito).
//Também testar se saldo atual for maior ou igual a zero
//escrever a mensagem 'Saldo Positivo', senão
//escrever a mensagem 'Saldo Negativo'.
Var
cliente:inteiro
saldo, debito, credito, saldoat:real

Inicio
escreva("Informe o número da sua conta:")
leia(cliente)
escreva("Informe seu saldo bancário:")
leia(saldo)
escreva("Informe o seu débito:")
leia(debito)
escreva("Informe o seu crédito:")
leia(credito)
saldoat<-saldo-debito+credito
se(saldoat>=0)entao
escreva("",saldoat,". Saldo positivo!")
senao
escreva("", saldoat,". Saldo negativo!")
fimse

Fimalgoritmo