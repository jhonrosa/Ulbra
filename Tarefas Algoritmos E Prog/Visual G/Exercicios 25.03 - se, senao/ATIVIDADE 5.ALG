Algoritmo "ATIVIDADE 5"
//5. Fa�a um algoritmo para entrar com c�digo, sexo e idade de uma pessoa.
//Se a pessoa for do sexo feminino e tiver menos que 25 anos,
//imprimir c�digo e mensagem: ACEITA. Caso contr�rio, imprimir c�digo
//e a mensagem: N�O ACEITA.

Var
idade: inteiro
sexo, nome: caracter

Inicio
escreva("Digite seu nome:")
leia(nome)
escreva("Digite sua idade:")
leia(idade)
escreva("Insira o seu sexo: M para Masculino, F para Feminino:")
leia(sexo)
se(sexo="f")e (idade<=25)entao
escreva(nome,". Voc� est� aceita(o)!")
senao
escreva(nome,". Voc� foi recusado(a)!")
fimse

Fimalgoritmo