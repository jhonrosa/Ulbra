Algoritmo "ATIVIDADE 10"
//10. Fa�a um algoritmo para ler: n�mero da conta do cliente, saldo,
//d�bito e cr�dito. Ap�s, calcular e escrever o saldo atual
//(saldo atual = saldo - d�bito + cr�dito). Tamb�m testar se saldo atual
//for maior ou igual a zero escrever a mensagem 'Saldo Positivo'
//sen�o escrever a mensagem 'Saldo Negativo'.
Var
cliente:inteiro
saldo, saldoatual, deb, cred:real

Inicio
escreva("Informe o n�mero da sua conta: ")
leia(cliente)
escreva("Informe seu saldo: ")
leia(saldo)
escreva("Informe seu d�bito atual: ")
leia(deb)
escreva("Informe seu cr�dito atual: ")
leia(cred)

saldoatual<- saldo - deb + cred
escreval("O saldo atual da conta ",cliente, " � de: R$", saldoatual)
se(saldoatual<=0)entao
escreval("SALDO NEGATIVO!")
senao
escreval("SALDO POSITIVO!")
fimse
Fimalgoritmo