Algoritmo "semnome"
//12. Potência
//Faça um programa que calcule a potência de um número. Solicite que o usuário
//informe a base e o expoente, e seu programa deverá calcular a potência
//do referido número. EX:
//Base = 7
//Expoente = 2
//Resultado: 49
funcao POTENCIA(BASE,EXPO:INTEIRO):inteiro
Var
cont, poten:inteiro
inicio
      poten<-1
      para cont de 1 ate EXPO passo 1 faca
      poten<-poten*BASE
      fimpara
      retorne poten
fimfuncao

var
ex, bas:inteiro
Inicio
escreva("Informe o número da base:")
leia(bas)
escreva("informe o número do expoente:")
leia(ex)
escreva("O resultado é: ", POTENCIA(bas,ex))

Fimalgoritmo