Algoritmo "ATIVIDADE 20"
//20. FUA que efetue e calculo do salário líquido de um professor. Para fazer este
//programa você deverá possuir alguns dados, tais como: valor da hora aula, número
//de aulas dadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se
//estabelecer qual será o seu salário bruto para efetuar o desconto e ter o valor do
//salário líquido. Ao final do algoritmo devem ser mostrados o salário bruto e o
//salário líquido do professor.
Var
vhora, aulas, desconto, percdsc, salariobruto, salarioliquido: real


Inicio
escreva("Digite o número de aulas dadas no mês:")
leia(aulas)

escreva("Digite o valor ganho por hora:")
leia(vhora)

escreva("Informe o percentual de desconto do INSS:")
leia(percdsc)

salariobruto<- vhora*aulas
desconto<- salariobruto*percdsc/100
salarioliquido<- salariobruto - desconto

escreval("Seu salário bruto é: R$", salariobruto)
escreval("O valor do desconto é: R$", desconto)
escreval("Seu salário liquído é: R$", salarioliquido)

Fimalgoritmo