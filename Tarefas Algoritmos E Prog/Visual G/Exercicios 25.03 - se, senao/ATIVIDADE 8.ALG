Algoritmo "ATIVIDADE 8"
//8. As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e
//R$ 1,00 se forem compradas pelo menos 12. Escreva um algoritmo que leia o
//n�mero de ma��s compradas, calcule e escreva o custo total da compra.
Var
num, preco: real


Inicio
escreva("Informe o n�mero de ma�as que deseja comprar:")
leia(num)
se(num>=12)entao
preco<-num*1.30
escreva("Voc� comprou ", num," ma�as, custaram: R$", preco)
senao
preco<-num*1.0
escreva("Voc� comprou ", num," ma�as, custaram:R$", preco)
fimse

Fimalgoritmo