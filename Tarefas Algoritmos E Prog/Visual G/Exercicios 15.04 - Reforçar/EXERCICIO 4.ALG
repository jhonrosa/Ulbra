Algoritmo "Exercicio 4"
//4. Ler um número e se ele for maior do que 30,
//então exibir metade do número, caso contrário,
//imprimir o dobro do número.
Var
num, num2:real

Inicio
escreva("Informe um número:")
leia(num)
se (num>=30) entao
num2<-num/2
escreva("A metade de ", num, " é:", num2)
senao
num2<-num*2
escreva("O dobro de ", num, " é:", num2)
fimse

Fimalgoritmo