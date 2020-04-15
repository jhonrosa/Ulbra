Algoritmo "ATIVIDADE 7"
//7. Faça um algoritmo que verifique a validade de uma senha fornecida pelo
//usuário. A senha válida é o número 1234. OBS: Se a senha informada
//pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser exibida.
//Se for a correta, a mensagem "ACESSO PERMITIDO" deverá ser exibida.

Var
senha:inteiro


Inicio
escreva("Digite aqui sua senha:")
leia(senha)
se(senha=1234)entao
escreva("ACESSO PERMITIDO")
senao
escreva("ACESSO NEGADO")
fimse

Fimalgoritmo