Algoritmo "ATIVIDADE 23"
//23. FUA para efetuar o cálculo do valor de uma prestação em atraso, utilizando a
//fórmula: PRESTAÇÃO=VALOR+(VALOR*(TAXA/100)*TEMPO).
Var

parc, tx, tmp: inteiro
prest: real


Inicio
escreva("Digite o valor da dívida: R$")
leia(parc)
escreva("Digite a taxa da multa: R$")
leia(tx)
escreva("Digite quantos dias já se passaram após o vencimento:")
leia(tmp)

prest<- parc+(parc*(tx/100)*tmp)
escreva("O valor da dívida até o dia de hoje é: R$", prest)

Fimalgoritmo