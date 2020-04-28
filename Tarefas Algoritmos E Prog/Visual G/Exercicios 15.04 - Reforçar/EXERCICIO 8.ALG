Algoritmo "Exercicio 8"
//8. As maçãs custam R$ 1,50 cada se forem compradas menos de uma dúzia,
//e R$ 1,00 se forem compradas pelo menos 12.
//Escreva um programa que leia o número de maçãs compradas,
//calcule e escreva o custo total da compra.
Var
nrmacas:inteiro
custotal:real


Inicio
escreva("Informe o número de maças compradas:")
leia(nrmacas)
se (nrmacas<12) entao
custotal<-nrmacas*1.50
escreva("",nrmacas," custaram:R$", custotal)
senao (nrmacas>=12)
custotal<-nrmacas*1.00
escreva("",nrmacas," custaram:R$", custotal)
fimse

Fimalgoritmo