Algoritmo "ATIVIDADE 25"
//25. FUA para ler o código de um vendedor, seu salário fixo,
//o total de vendas por ele efetuadas e o percentual de comissão
//que recebe sobre as vendas. Calcular o salário total do vendedor.
//escrever o código do vendedor e o seu salário total.
Var
vendedor: caracter
salariofixo, perc, comissao, salariototal:  real
totalvendas: inteiro

Inicio
escreva("Digite o código do vendedor: ")
leia(vendedor)
escreva("Digite seu salário fixo: R$")
leia(salariofixo)
escreva("Digite o valor total de vendas nesse mês: R$")
leia(totalvendas)
escreva("Digite a percentual de comissão que recebe sobre as vendas: ")
leia(perc)
comissao<- (totalvendas*perc)/100
salariototal<- salariofixo+comissao

escreva("O salário total do vendedor ", vendedor, " foi de: R$", salariototal)

Fimalgoritmo