Algoritmo "Exercicio 6"
//6. Solicite os seguintes dados de um aluno
//Nome do aluno (string)
//Nota N1 (double)
//Nota N2 (double)
//Ao final, exiba o nome do aluno e média baseando-se na seguinte fórmula:
//N1 * 0.4 + N2 * 0.6
Var
n1, n2, media:real
aluno:caracter

Inicio
escreva("Informe seu nome:")
leia(aluno)
escreva("Informe sua nota 1:")
leia(n1)
escreva("Informe sua nota 2:")
leia(n2)
media<- n1*0.4 + n2*0.6
escreval("Sr: ", aluno," sua média foi:",media)

Fimalgoritmo