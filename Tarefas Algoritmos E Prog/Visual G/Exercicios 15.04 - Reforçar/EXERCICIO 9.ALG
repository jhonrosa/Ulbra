Algoritmo "Exercicio 9"
//9. Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha
//de Gude o jogador deve pesar entre 70 Kg (inclusive) e 80 Kg (inclusive)
// e medir de 1,75 m (inclusive) a 1,90 m (inclusive).
//Escreva um programa para ler a altura e o peso de um jogador
//e determine se o jogador está apto a participar do campeonato
//escrevendo uma das seguintes mensagens conforme cada situação.
//‘RECUSADO POR ALTURA’ - (se somente a altura do jogador for inválida)
//‘RECUSADO POR PESO’ - (se somente o peso do jogador for inválido)
//‘TOTALMENTE RECUSADO’-(se a altura e o peso do jogador for inválido)
//‘ACEITO' - (se a altura e o peso do jogador estiverem dentro da faixa especificada)
Var
altura, peso: real

Inicio
escreva("Informe a altura do jogador em metros:")
leia(altura)
escreva("Informe o peso do jogador:")
leia(peso)

se ((peso>80) ou (peso<70)) e ((altura<175) ou (altura>190)) entao
escreva("TOTALMENTE RECUSADO!")
senao
     se ((peso>=80) ou (peso<=70)) e ((altura<175) ou (altura>190)) entao
     escreva("RECUSADO POR ALTURA!")
     senao
          se ((peso>80) ou (peso<70)) e ((altura<=175) ou (altura>=190))entao
          escreva("RECUSADO POR PESO!")
          senao
       se ((peso>=80) ou (peso<=70)) e ((altura<=175) ou (altura>=190))entao
               escreva("ACEITO!")

               fimse
          fimse
     fimse
fimse

Fimalgoritmo