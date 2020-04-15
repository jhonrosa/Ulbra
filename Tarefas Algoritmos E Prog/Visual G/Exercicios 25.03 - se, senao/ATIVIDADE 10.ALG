Algoritmo "ATIVIDADE 10"
//10. Faça um algoritmo para ler: número da conta do cliente, saldo,
//débito e crédito. Após, calcular e escrever o saldo atual
//(saldo atual = saldo - débito + crédito). Também testar se saldo atual
//for maior ou igual a zero escrever a mensagem 'Saldo Positivo'
//senão escrever a mensagem 'Saldo Negativo'.
Var
cliente:inteiro
saldo, saldoatual, deb, cred:real

Inicio
escreva("Informe o número da sua conta: ")
leia(cliente)
escreva("Informe seu saldo: ")
leia(saldo)
escreva("Informe seu débito atual: ")
leia(deb)
escreva("Informe seu crédito atual: ")
leia(cred)

saldoatual<- saldo - deb + cred
escreval("O saldo atual da conta ",cliente, " é de: R$", saldoatual)
se(saldoatual<=0)entao
escreval("SALDO NEGATIVO!")
senao
escreval("SALDO POSITIVO!")
fimse
Fimalgoritmo