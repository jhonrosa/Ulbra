Algoritmo "ATIVIDADE 26"
//26. Considerando que o �ndice de reajuste para determinada classe social
//foi acordado para ser um �ndice de reposi��o salarial mais um �ndice de
//produtividade que cada empresa ir� definir, FUA que leia o c�digo de
//um funcion�rio, seu sal�rio atual, o �ndice de reposi��o e o de produtividade
//e calcule o novo sal�rio do funcion�rio. Escrever o c�digo do funcion�rio
//seu sal�rio atual, quanto ter� de aumento e o
//novo sal�rio.
Var
cdfuncionario: caracter
salarioatual, novosalario, indicerep, indiceprod, valorep, valorprod: real
Inicio
escreva("Digite o c�digo do funcion�rio: ")
leia(cdfuncionario)
escreva("Digite o sal�rio do funcion�rio: R$")
leia(salarioatual)
escreva("Digite o indice de reposi��o em percetual: ")
leia(indicerep)
escreva("Digite o indice de produtividade em percetual: ")
leia(indiceprod)

valorep<- (salarioatual*indicerep)/100
valorprod<- (salarioatual*indiceprod)/100
novosalario<- salarioatual+valorprod+valorep

escreva("O novo sal�rio do funcion�rio ser�: R$", novosalario)

Fimalgoritmo