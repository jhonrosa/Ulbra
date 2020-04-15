Algoritmo "ATIVIDADE 24"
//24. FUA para ler o código da peça 1, a quantidade de peças 1, o valor unitário da peça
//1, o código da peça 2, a quantidade de peças 2, o valor unitário da peça 2 e o
//percentual de IPI a ser acrescentado ao valor de cada peça. Calcule o valor a ser
//pago para cada peça e o valor total da compra. Escrever a quantidade, o código, o
//valor unitário, o valor unitário com IPI e o valor total para cada peça e também o
//valor total da compra.
Var
qtpc1, qtpc2, cdpc1, cdpc2: inteiro
vpc1, vpc2, percipi, valorvenda1, valorvenda2, valordesconto, total: real

Inicio
escreva("Digite o código da peça 1: ")
leia(cdpc1)
escreva("Digite a quantidade de peças 1 vendidas: ")
leia(qtpc1)
escreva("Digite o valor unitário da peça 1: R$")
leia(vpc1)

valorvenda1<- qtpc1*vpc1
escreval("Valor total da venda da peça 1 foi: R$%", valorvenda1)
escreval("Digite o código da peça 2: ")
leia(cdpc2)
escreva("Digite a quantidade de peças 2 vendidas: ")
leia(qtpc2)
escreva("Digite o valor unitário da peça 2: R$")
leia(vpc2)

valorvenda2<- qtpc2*vpc2
escreval("Valor total da venda da peça 2 foi: R$", valorvenda2)

escreval("digite o percentual de desconto IPI: ")
leia(percipi)

valordesconto<- (valorvenda1 + valorvenda2*percipi)/100
escreva("O valor do desconto IPI das duas vendas foi de: R$", valordesconto)
total<- (valorvenda1+valorvenda2) - valordesconto
escreva("O valor total da venda menos o desconto foi de: R$", total)

Fimalgoritmo