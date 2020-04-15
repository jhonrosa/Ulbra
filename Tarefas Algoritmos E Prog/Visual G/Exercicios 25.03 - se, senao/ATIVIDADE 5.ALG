Algoritmo "ATIVIDADE 5"
//5. Faça um algoritmo para entrar com código, sexo e idade de uma pessoa.
//Se a pessoa for do sexo feminino e tiver menos que 25 anos,
//imprimir código e mensagem: ACEITA. Caso contrário, imprimir código
//e a mensagem: NÃO ACEITA.

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
escreva(nome,". Você está aceita(o)!")
senao
escreva(nome,". Você foi recusado(a)!")
fimse

Fimalgoritmo