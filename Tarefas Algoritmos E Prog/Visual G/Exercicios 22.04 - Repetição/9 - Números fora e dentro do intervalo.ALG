Algoritmo "Numeros fora e dentro do intervalo"
//9. LER 10 VALORES E CONTAR QUANTOS EST�O NO INTERVALO [10,20] E QUANTOS
//DELES EST�O FORA DESTE INTERVALO. ESCREVER O RESULTADO DAS DUAS
//CONTAGENS.
Var
contd, i, contf, num:inteiro

inicio
para i de 1 ate 10 faca
escreva("Digite um n�mero:")
leia(num)
se ((num>=10) e (num<=20))entao
contd<-contd+1
senao
contf<-contf+1
fimse
fimpara
escreval("Quantidade de n�meros no intervalo entre 10 e 20:",contd)
escreval("Quantidade de n�meros fora do invervalo entre 10 e 20:", contf)
Fimalgoritmo