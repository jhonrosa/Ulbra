Algoritmo "ATIVIDADE 19"
//19. FUA para dar o total, em reais, de um cofrinho que contenha:
//? n1 moedas de 1 real;
//? n2 moedas de 50 centavos;
//? n3 moedas de 25 centavos;
//? n4 moedas de 10 centavos; e
//? n5 moedas de 5 centavos.
Var
n1,n2,n3,n4,n5: inteiro
total: real


Inicio
escreva("Digite a quantidade de moedas de 1 real: ")
leia(n1)
escreva("Digite a quantidade de moedas de 50 centavos: ")
leia(n2)
escreva("Digite a quantidade de moedas de 25 centavos: ")
leia(n3)
escreva("Digite a quantidade de moedas de 10 centavos: ")
leia(n4)
escreva("Digite a quantidade de moedas de 5 centavos: ")
leia(n5)

total<- (n1) + (n2/2) + (n3/4) + (n4/10) + (n5/20)


escreva("O valor total contido em seu cofrinho é de: ", total, " reais")

Fimalgoritmo