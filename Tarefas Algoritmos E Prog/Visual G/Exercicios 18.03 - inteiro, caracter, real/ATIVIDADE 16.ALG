Algoritmo "ATIVIDADE 16"
//16. FUA para efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma
//viagem, utilizando-se um autom�vel que faz 12 km por litro. Para obter o c�lculo, o
//usu�rio dever� fornecer o tempo gasto na viagem e a velocidade m�dia durante a
//mesma. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula
//DIST�NCIA=TEMPO*VELOCIDADE. Tendo o valor da dist�ncia, basta calcular a
//quantidade de litros de combust�vel utilizada na viagem com a f�rmula:
//LITROS_USADOS=DIST�NCIA/12. O algoritmo dever� apresentar os valores da
//velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de
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
escreval("A dist�ncia percorrida foi: ", dst)
escreval("Quantidade de litros usados foi de: ",consumo," litros")

Fimalgoritmo