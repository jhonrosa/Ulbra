Algoritmo "ATIVIDADE 24"
//24. FUA para ler o c�digo da pe�a 1, a quantidade de pe�as 1, o valor unit�rio da pe�a
//1, o c�digo da pe�a 2, a quantidade de pe�as 2, o valor unit�rio da pe�a 2 e o
//percentual de IPI a ser acrescentado ao valor de cada pe�a. Calcule o valor a ser
//pago para cada pe�a e o valor total da compra. Escrever a quantidade, o c�digo, o
//valor unit�rio, o valor unit�rio com IPI e o valor total para cada pe�a e tamb�m o
//valor total da compra.
Var
qtpc1, qtpc2, cdpc1, cdpc2: inteiro
vpc1, vpc2, percipi, valorvenda1, valorvenda2, valordesconto, total: real

Inicio
escreva("Digite o c�digo da pe�a 1: ")
leia(cdpc1)
escreva("Digite a quantidade de pe�as 1 vendidas: ")
leia(qtpc1)
escreva("Digite o valor unit�rio da pe�a 1: R$")
leia(vpc1)

valorvenda1<- qtpc1*vpc1
escreval("Valor total da venda da pe�a 1 foi: R$%", valorvenda1)
escreval("Digite o c�digo da pe�a 2: ")
leia(cdpc2)
escreva("Digite a quantidade de pe�as 2 vendidas: ")
leia(qtpc2)
escreva("Digite o valor unit�rio da pe�a 2: R$")
leia(vpc2)

valorvenda2<- qtpc2*vpc2
escreval("Valor total da venda da pe�a 2 foi: R$", valorvenda2)

escreval("digite o percentual de desconto IPI: ")
leia(percipi)

valordesconto<- (valorvenda1 + valorvenda2*percipi)/100
escreva("O valor do desconto IPI das duas vendas foi de: R$", valordesconto)
total<- (valorvenda1+valorvenda2) - valordesconto
escreva("O valor total da venda menos o desconto foi de: R$", total)

Fimalgoritmo