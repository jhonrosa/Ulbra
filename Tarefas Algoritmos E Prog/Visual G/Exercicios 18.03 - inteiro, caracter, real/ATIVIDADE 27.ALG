Algoritmo "ATIVIDADE 27"
//27. FUA que l� o n�mero de um funcion�rio, seu n�mero de horas trabalhadas e o valor
//que recebe por hora e calcula o sal�rio deste funcion�rio.
Var
funcionario: caracter
hrtrab, vhora, salario: real

Inicio
escreva("Digite o c�digo do funcion�rio: ")
leia(funcionario)
escreva("Digite o n�mero de horas trabalhadas: ")
leia(hrtrab)
escreva("Digite o valor ganho por hora trabalhada: ")
leia(vhora)

salario<- hrtrab*vhora

escreva("O sal�rio do funcion�rio ", funcionario, " � de: R$", salario)

Fimalgoritmo