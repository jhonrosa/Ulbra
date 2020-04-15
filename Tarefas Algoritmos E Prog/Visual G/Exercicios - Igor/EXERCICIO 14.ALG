Algoritmo "Exercicio 14"
//14. Solicite 3 notas de um aluno.
//Calcule a média:  m = (n1 + n2 + n3) / 3
//Depois exibir a média e exibir a situação de acordo com as regras a seguir:
//se m < 4 -> reprovado direto
//se m >=7 -> aprovado
//caso contrário, está de recuperação. Neste caso,
//solicite a nota de recuperação.
//Se esta nota for < 5 -> reprovado
//Se for >= 5 -> aprovado
Var
n1,n2,n3, media, nr: real

Inicio
escreva("Informe sua primeira nota:")
leia(n1)
escreva("Informe sua segunda nota:")
leia(n2)
escreva("Informe sua terceira nota:")
leia(n3)
media<-(n1+n2+n3)/3
se media<4 entao
escreval("",media,". REPROVADO DIRETO!")
senao
se media>7 entao
escreval("", media,". APROVADO!")
senao ((media=5)ou(media=6))
escreval("Está de recuperação!")
escreva("Informa sua nota de recuperação:")
leia(nr)
se (nr>=5) entao
escreval("APROVADO!")
senao
escreval("REPROVADO!")
fimse
fimse
fimse


Fimalgoritmo