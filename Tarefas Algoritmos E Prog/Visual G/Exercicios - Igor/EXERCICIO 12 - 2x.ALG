Algoritmo "Exercicio 12"
//12. Pot�ncia
//Fa�a um programa que calcule a pot�ncia de um n�mero. Solicite que o usu�rio
//informe a base e o expoente, e seu programa dever� calcular a pot�ncia
//do referido n�mero. EX:
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
escreva("Informe o n�mero da base:")
leia(bas)
escreva("informe o n�mero do expoente:")
leia(ex)
escreva("O resultado �: ", POTENCIA(bas,ex))

Fimalgoritmo