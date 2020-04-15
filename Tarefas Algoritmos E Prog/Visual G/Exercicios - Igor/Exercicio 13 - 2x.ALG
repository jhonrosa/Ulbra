Algoritmo "Exercicio 13"
//13. Saldo
//Solicite:
//nome
//salário
//despesas com saúde (ds)
//despesas com lazer (dl)
//despesas com alimentação (da)
//Calcule o saldo: saldo = salario - (ds+dl+da)
//Exiba o saldo e a situação dependendo das condições a seguir:
//se saldo <=0 exiba "gaste menos..."
//se saldo entre 0 e 3000 exiba "melhor fazer uma poupança...”
//se saldo entre 3001 e 5000 exiba "sobrou bastante hein!”
//se saldo > 5000 exiba "parabéns corintiano!!!"
Var
nome:caracter
salario, ds, dl, da, saldo:real


Inicio
escreva("Informe seu nome:")
leia(nome)
escreva("Informe o seu salário:")
leia(salario)
escreva("Informe a sua despesa com saúde:")
leia(ds)
escreva("Informe a sua despesa com lazer:")
leia(dl)
escreva("Informe a sua despesa com alimentação:")
leia(da)
saldo<-salario - (ds+dl+da)

se saldo<=0 entao
escreva("Gaste menos!")
senao

se ((saldo>0) e (saldo<=3000)) entao
escreva("Faça uma poupança!")
senao

se ((saldo>3001) e (saldo<=5000)) entao
escreva("Sobrou bastante hein!")
senao

se saldo>5000 entao
escreva("Parabéns!")
senao

fimse
fimse
fimse
fimse

Fimalgoritmo