Algoritmo "Exercicio 1"
//1. Faça um programa que receba o valor da venda, escolha a condição de pagamento no menu e mostre o total da venda final conforme condições a seguir:

//1 - Venda a Vista - desconto de 10%
//2 - Venda a Prazo 30 dias - desconto de 5%
//3 - Venda a Prazo 60 dias - mesmo preço
//4 - Venda a Prazo 90 dias - acréscimo de 5%
//5 - Venda com cartão de débito - desconto de 8%
//6 - Venda com cartão de crédito - desconto de 7%

Var
valor, vfinal:real
tip:inteiro


Inicio

escreva("Informe o valor da venda:")
leia(valor)
escreval("Digite de 1 a 6 para informar o método de pagamento:")
escreval("1 - Venda a Vista - desconto de 10%")
escreval("2 - Venda a Prazo 30 dias - desconto de 5%")
escreval("3 - Venda a Prazo 60 dias - mesmo preço")
escreval("4 - Venda a Prazo 90 dias - acréscimo de 5%")
escreval("5 - Venda com cartão de débito - desconto de 8%")
escreval("6 - Venda com cartão de crédito - desconto de 7%")
leia(tip)
escolha(tip)
caso 1
vfinal<-valor-(valor*10/100)
escreva("O valor total da venda deu: R$", vfinal)

caso 2
vfinal<-valor-(valor*5/100)
escreva("O valor total da venda deu: R$", vfinal)

caso 3
vfinal<-valor
escreva("O valor total da venda deu: R$", vfinal)

caso 4
vfinal<-valor + (valor*5/100)
escreva("O valor total da venda deu: R$", vfinal)

caso 5
vfinal<-valor -(valor*8/100)
escreva("O valor total da venda deu: R$", vfinal)

caso 6
vfinal<-valor-(valor*7/100)
escreva("O valor total da venda deu: R$", vfinal)
fimescolha
Fimalgoritmo