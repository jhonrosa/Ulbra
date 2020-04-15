Algoritmo "ATIVIDADE 22"
//22. FUA para ler uma temperatura em graus Fahrenheit e apresentá-la convertida em
//graus Centígrados. A fórmula de conversão é: C= (F-32)*(5/9). Onde F é a
//temperatura em Fahrenheit e C é a temperatura em Centígrados

Var
grausf, formula: real


Inicio
escreva("Digite a temperatura em graus Fahrenheit:")
leia(grausf)
formula<-(grausf-32)* 5/9
escreva("A conversão de graus Fahrenheit para Centígrados é: ", formula)

Fimalgoritmo