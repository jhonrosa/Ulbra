Algoritmo "ATIVIDADE 16"
//16. FUA para efetuar o cálculo da quantidade de litros de combustível gasta em uma
//viagem, utilizando-se um automóvel que faz 12 km por litro. Para obter o cálculo, o
//usuário deverá fornecer o tempo gasto na viagem e a velocidade média durante a
//mesma. Desta forma, será possível obter a distância percorrida com a fórmula
//DISTÂNCIA=TEMPO*VELOCIDADE. Tendo o valor da distância, basta calcular a
//quantidade de litros de combustível utilizada na viagem com a fórmula:
//LITROS_USADOS=DISTÂNCIA/12. O algoritmo deverá apresentar os valores da
//velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de
//litros utilizada na viagem.
// a = km/h
Var
velmedia, consumo, tmp_gst, dst, km_litro: real

Inicio
escreva("Digite o tempo gasto em horas na sua viagem:")
leia(tmp_gst)
escreva("Digite quantos km/h andou durante a viagem:")
leia(velmedia)

dst<- tmp_gst*velmedia
consumo<- (dst)/12
escreval("A distância percorrida foi: ", dst)
escreval("Quantidade de litros usados foi de: ",consumo," litros")

Fimalgoritmo