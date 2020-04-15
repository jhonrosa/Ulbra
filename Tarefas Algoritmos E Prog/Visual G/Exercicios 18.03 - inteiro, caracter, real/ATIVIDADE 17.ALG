Algoritmo "semnome"
//17. FUA para calcular o consumo médio de um automóvel (medido em Km/l), dado que
//são conhecidos a distância total percorrida e o volume do combustível consumido
//para percorrê-la (medidos em litros).
Var
distancia, combustivel, consumo: real


Inicio
escreva("Digite a distância percorrida:")
leia(distancia)
escreva("Digite a quantidade de combustivel consumida:")
leia(combustivel)
consumo<- distancia/combustivel
escreva("O seu carro faz: ", consumo," KM/L")

Fimalgoritmo