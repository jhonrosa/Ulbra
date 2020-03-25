//17. FUA para calcular o consumo médio de um automóvel (medido em Km/l), dado que
//são conhecidos a distância total percorrida e o volume do combustível consumido
//para percorrê-la (medidos em litros).

#include <stdio.h>
int main() {

    float distancia, combustivel, consumo;
    
    printf("Digite a distância percorrida:");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel consumida:");
    scanf("%f", &combustivel);

    consumo = distancia/combustivel;
    
    printf("O seu carro faz: %0.f Km/L", consumo);

    return 0;


    }