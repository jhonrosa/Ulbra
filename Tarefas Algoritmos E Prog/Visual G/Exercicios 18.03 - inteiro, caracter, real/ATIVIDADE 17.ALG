Algoritmo "semnome"
//17. FUA para calcular o consumo m�dio de um autom�vel (medido em Km/l), dado que
//s�o conhecidos a dist�ncia total percorrida e o volume do combust�vel consumido
//para percorr�-la (medidos em litros).
Var
distancia, combustivel, consumo: real


Inicio
escreva("Digite a dist�ncia percorrida:")
leia(distancia)
escreva("Digite a quantidade de combustivel consumida:")
leia(combustivel)
consumo<- distancia/combustivel
escreva("O seu carro faz: ", consumo," KM/L")

Fimalgoritmo