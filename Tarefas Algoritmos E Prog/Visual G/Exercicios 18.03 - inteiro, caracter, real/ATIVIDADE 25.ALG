Algoritmo "ATIVIDADE 25"
//25. FUA para ler o c�digo de um vendedor, seu sal�rio fixo,
//o total de vendas por ele efetuadas e o percentual de comiss�o
//que recebe sobre as vendas. Calcular o sal�rio total do vendedor.
//escrever o c�digo do vendedor e o seu sal�rio total.
Var
vendedor: caracter
salariofixo, perc, comissao, salariototal:  real
totalvendas: inteiro

Inicio
escreva("Digite o c�digo do vendedor: ")
leia(vendedor)
escreva("Digite seu sal�rio fixo: R$")
leia(salariofixo)
escreva("Digite o valor total de vendas nesse m�s: R$")
leia(totalvendas)
escreva("Digite a percentual de comiss�o que recebe sobre as vendas: ")
leia(perc)
comissao<- (totalvendas*perc)/100
salariototal<- salariofixo+comissao

escreva("O sal�rio total do vendedor ", vendedor, " foi de: R$", salariototal)

Fimalgoritmo