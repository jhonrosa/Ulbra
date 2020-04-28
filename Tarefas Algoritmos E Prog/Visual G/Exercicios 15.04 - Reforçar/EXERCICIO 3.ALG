Algoritmo "Exercicio 3"
//3. para reajustar o salário de acordo com a função. Se for técnico
//aumentar o salário 50%, se for gerente, aumentar 30%
//e se for outro cargo, aumentar 20%.
Var
salario, salarioatual:real
cargo:inteiro

Inicio
escreval("Informe seu cargo:")
escreva("1 para Técnico | 2 Para Gerente | 3 para Outros Cargos:")
leia(cargo)
escreva("Informe seu salário:")
leia(salario)
escolha(cargo)
caso 1
salarioatual<-salario+(salario*50/100)
escreva("Você recebeu um aumento para: R$", salarioatual)

caso 2
salarioatual<-salario+(salario*30/100)
escreva("Você recebeu um aumento para: R$", salarioatual)

caso 3
salarioatual<-salario+(salario*20/100)
escreva("Você recebeu um aumento para: R$", salarioatual)
fimescolha


Fimalgoritmo