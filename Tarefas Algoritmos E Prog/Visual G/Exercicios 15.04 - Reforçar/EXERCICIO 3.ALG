Algoritmo "Exercicio 3"
//3. para reajustar o sal�rio de acordo com a fun��o. Se for t�cnico
//aumentar o sal�rio 50%, se for gerente, aumentar 30%
//e se for outro cargo, aumentar 20%.
Var
salario, salarioatual:real
cargo:inteiro

Inicio
escreval("Informe seu cargo:")
escreva("1 para T�cnico | 2 Para Gerente | 3 para Outros Cargos:")
leia(cargo)
escreva("Informe seu sal�rio:")
leia(salario)
escolha(cargo)
caso 1
salarioatual<-salario+(salario*50/100)
escreva("Voc� recebeu um aumento para: R$", salarioatual)

caso 2
salarioatual<-salario+(salario*30/100)
escreva("Voc� recebeu um aumento para: R$", salarioatual)

caso 3
salarioatual<-salario+(salario*20/100)
escreva("Voc� recebeu um aumento para: R$", salarioatual)
fimescolha


Fimalgoritmo