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
const km_litro = 12;

#include <stdio.h>
int main() {

   float  velmedia, consumo, tmp_gst, dst_per, km_litro;

   printf("Digite o tempo gasto em horas na sua viagem:");
   scanf("%f", &tmp_gst);
   printf("Digite quantos km/h andou durante a viagem:");
   scanf("%f", &velmedia);

    dst_per = tmp_gst*velmedia;
    consumo = dst_per/12;
   printf("A distância percorrida foi: %.2fKM", (dst_per));
   printf("\nQuantidade de litros usados foi de: %.2f litros", (consumo));
    
    return 0;

}