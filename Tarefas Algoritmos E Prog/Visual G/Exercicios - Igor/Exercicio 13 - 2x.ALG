Algoritmo "Exercicio 13"
//13. Saldo
//Solicite:
//nome
//sal�rio
//despesas com sa�de (ds)
//despesas com lazer (dl)
//despesas com alimenta��o (da)
//Calcule o saldo: saldo = salario - (ds+dl+da)
//Exiba o saldo e a situa��o dependendo das condi��es a seguir:
//se saldo <=0 exiba "gaste menos..."
//se saldo entre 0 e 3000 exiba "melhor fazer uma poupan�a...�
//se saldo entre 3001 e 5000 exiba "sobrou bastante hein!�
//se saldo > 5000 exiba "parab�ns corintiano!!!"
Var
nome:caracter
salario, ds, dl, da, saldo:real


Inicio
escreva("Informe seu nome:")
leia(nome)
escreva("Informe o seu sal�rio:")
leia(salario)
escreva("Informe a sua despesa com sa�de:")
leia(ds)
escreva("Informe a sua despesa com lazer:")
leia(dl)
escreva("Informe a sua despesa com alimenta��o:")
leia(da)
saldo<-salario - (ds+dl+da)

se saldo<=0 entao
escreva("Gaste menos!")
senao

se ((saldo>0) e (saldo<=3000)) entao
escreva("Fa�a uma poupan�a!")
senao

se ((saldo>3001) e (saldo<=5000)) entao
escreva("Sobrou bastante hein!")
senao

se saldo>5000 entao
escreva("Parab�ns!")
senao

fimse
fimse
fimse
fimse

Fimalgoritmo