Algoritmo "Exercicio 4"
//4. Ler um n�mero e se ele for maior do que 30,
//ent�o exibir metade do n�mero, caso contr�rio,
//imprimir o dobro do n�mero.
Var
num, num2:real

Inicio
escreva("Informe um n�mero:")
leia(num)
se (num>=30) entao
num2<-num/2
escreva("A metade de ", num, " �:", num2)
senao
num2<-num*2
escreva("O dobro de ", num, " �:", num2)
fimse

Fimalgoritmo