Algoritmo "ATIVIDADE 21"
//21. FUA para ler uma temperatura em graus Centígrados e apresentá-la convertida em
//graus Fahrenheit. A fórmula de conversão é: F=(9*C+160)/5. Onde F é a
//temperatura em Fahrenheit e C é a temperatura em Centígrados.
Var
grausc, grausf, formula: real


Inicio
escreva("Digite a temperatura em graus Centígrados:")
leia(grausc)

formula<-(9*grausc+160)/5
escreva("A conversão de graus Centígrados para graus Fah. é:", formula, "ºF")


Fimalgoritmo