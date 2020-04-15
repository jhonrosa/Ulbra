Algoritmo "ATIVIDADE 27"
//27. FUA que lê o número de um funcionário, seu número de horas trabalhadas e o valor
//que recebe por hora e calcula o salário deste funcionário.
Var
funcionario: caracter
hrtrab, vhora, salario: real

Inicio
escreva("Digite o código do funcionário: ")
leia(funcionario)
escreva("Digite o número de horas trabalhadas: ")
leia(hrtrab)
escreva("Digite o valor ganho por hora trabalhada: ")
leia(vhora)

salario<- hrtrab*vhora

escreva("O salário do funcionário ", funcionario, " é de: R$", salario)

Fimalgoritmo