Algoritmo "ATIVIDADE 9"
//9. Fa�a um algoritmo para ler o codigo de 2 times e o n�mero de gols marcados
//na partida (para cada time). Escrever o codigo do vencedor. Caso n�o haja
//vencedor dever� ser impressa a palavra EMPATE.
Var
gol1, gol2: inteiro
time1, time2: caracter


Inicio
escreva("Digite o nome do seu time: ")
leia(time1)
escreva("Digite o n�mero de gols marcado na partida: ")
leia(gol1)
escreva("Digite o nome do seu time 2: ")
leia(time2)
escreva("Digite o n�mero de gols marcado na partida: ")
leia(gol2)

se(gol1 > gol2)entao
escreva("O time vencedor foi: ", time1)
senao(gol1 < gol2)
escreva("O time vencedor foi: ", time2)
fimse
se(gol1= gol2)entao
escreva("A partida empatou!")
fimse
Fimalgoritmo