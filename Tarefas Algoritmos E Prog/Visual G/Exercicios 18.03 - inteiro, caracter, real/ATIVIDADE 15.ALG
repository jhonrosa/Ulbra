Algoritmo "ATIVIDADE 15"
//15. FUA que leia a idade de uma pessoa em anos, meses e dias e mostre-a expressa em
//dias. (Nota: considere todos os anos com 365 dias e todos os meses com 30 dias).

Var
ano_at, ano_ps, mes_at, mes_ps, dia_at, dia_ps, a, b, c: inteiro


Inicio
escreva("Digite o dia do nascimento: ")
leia(dia_ps)
escreva("O m�s (numeral) que nasceu: ")
leia(mes_ps)
escreva("E o ano:")
leia(ano_ps)

escreva("Digite o dia de hoje: ")
leia(dia_at)
escreva("Digite o m�s (numeral) atual: ")
leia(mes_at)
escreva("E o ano: ")
leia(ano_at)


a<- ano_at - ano_ps
b<- a*365
c<- a*12

escreval("Voc� nasceu em: ", dia_ps,"/", mes_ps,"/", ano_ps,"/")
escreval("Voc� vive atualmente ",b, " em dias!")
escreval("Sua idade em meses �: ",c , "meses")
escreval("Sua idade em anos �:", a)

Fimalgoritmo