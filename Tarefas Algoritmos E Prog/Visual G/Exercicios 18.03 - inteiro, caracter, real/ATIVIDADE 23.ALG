Algoritmo "ATIVIDADE 23"
//23. FUA para efetuar o c�lculo do valor de uma presta��o em atraso, utilizando a
//f�rmula: PRESTA��O=VALOR+(VALOR*(TAXA/100)*TEMPO).
Var

parc, tx, tmp: inteiro
prest: real


Inicio
escreva("Digite o valor da d�vida: R$")
leia(parc)
escreva("Digite a taxa da multa: R$")
leia(tx)
escreva("Digite quantos dias j� se passaram ap�s o vencimento:")
leia(tmp)

prest<- parc+(parc*(tx/100)*tmp)
escreva("O valor da d�vida at� o dia de hoje �: R$", prest)

Fimalgoritmo