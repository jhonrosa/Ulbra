Algoritmo "ATIVIDADE 8"
//8. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e
//R$ 1,00 se forem compradas pelo menos 12. Escreva um algoritmo que leia o
//número de maçãs compradas, calcule e escreva o custo total da compra.
Var
num, preco: real


Inicio
escreva("Informe o número de maças que deseja comprar:")
leia(num)
se(num>=12)entao
preco<-num*1.30
escreva("Você comprou ", num," maças, custaram: R$", preco)
senao
preco<-num*1.0
escreva("Você comprou ", num," maças, custaram:R$", preco)
fimse

Fimalgoritmo