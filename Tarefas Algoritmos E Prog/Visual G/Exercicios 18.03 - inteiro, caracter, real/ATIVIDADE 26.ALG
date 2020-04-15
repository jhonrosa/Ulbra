Algoritmo "ATIVIDADE 26"
//26. Considerando que o índice de reajuste para determinada classe social
//foi acordado para ser um índice de reposição salarial mais um índice de
//produtividade que cada empresa irá definir, FUA que leia o código de
//um funcionário, seu salário atual, o índice de reposição e o de produtividade
//e calcule o novo salário do funcionário. Escrever o código do funcionário
//seu salário atual, quanto terá de aumento e o
//novo salário.
Var
cdfuncionario: caracter
salarioatual, novosalario, indicerep, indiceprod, valorep, valorprod: real
Inicio
escreva("Digite o código do funcionário: ")
leia(cdfuncionario)
escreva("Digite o salário do funcionário: R$")
leia(salarioatual)
escreva("Digite o indice de reposição em percetual: ")
leia(indicerep)
escreva("Digite o indice de produtividade em percetual: ")
leia(indiceprod)

valorep<- (salarioatual*indicerep)/100
valorprod<- (salarioatual*indiceprod)/100
novosalario<- salarioatual+valorprod+valorep

escreva("O novo salário do funcionário será: R$", novosalario)

Fimalgoritmo