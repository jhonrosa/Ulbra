Algoritmo "Atividade 3"

Var
a, b, op:inteiro
resultado:real

Inicio
escreva("Digite um n�mero: ")
leia(a)
escreva("Digite outro n�mero: ")
leia(b)
escreva("Escolha 1= + 2= - 3= * 4= /:")
leia(op)
se (op=1) entao
resultado <- a+b
fimse
se (op = 2) entao
resultado <- a-b
fimse
se (op = 3) entao
resultado <- a*b
fimse
se (op = 4) entao
resultado <- a/b
fimse
escreval("Resultado = ", resultado)

Fimalgoritmo