Algoritmo "ATIVIDADE 20"
//20. FUA que efetue e calculo do sal�rio l�quido de um professor. Para fazer este
//programa voc� dever� possuir alguns dados, tais como: valor da hora aula, n�mero
//de aulas dadas no m�s e percentual de desconto do INSS. Em primeiro lugar, deve-se
//estabelecer qual ser� o seu sal�rio bruto para efetuar o desconto e ter o valor do
//sal�rio l�quido. Ao final do algoritmo devem ser mostrados o sal�rio bruto e o
//sal�rio l�quido do professor.
Var
vhora, aulas, desconto, percdsc, salariobruto, salarioliquido: real


Inicio
escreva("Digite o n�mero de aulas dadas no m�s:")
leia(aulas)

escreva("Digite o valor ganho por hora:")
leia(vhora)

escreva("Informe o percentual de desconto do INSS:")
leia(percdsc)

salariobruto<- vhora*aulas
desconto<- salariobruto*percdsc/100
salarioliquido<- salariobruto - desconto

escreval("Seu sal�rio bruto �: R$", salariobruto)
escreval("O valor do desconto �: R$", desconto)
escreval("Seu sal�rio liqu�do �: R$", salarioliquido)

Fimalgoritmo