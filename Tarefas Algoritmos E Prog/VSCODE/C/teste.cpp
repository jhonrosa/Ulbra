#include <stdio.h>
int main(){
    int gol1, gol2; 
    char time1[100], time2[100];
    printf("Digite o nome do seu time: ");
    scanf("%s", &time1);
    printf("Digite o número de gols marcado na partida: ");
    scanf("%i", &gol1);    
    printf("Digite o nome do seu time 2: ");
    scanf("%s", &time2);
    printf("Digite o número de gols marcado na partida: ");
    scanf("%i", &gol2);

    if (gol1 > gol2){
    	
	printf("O time vencedor foi: %s", time1);

}
    else 
		if (gol1 < gol2){
	
		
        printf("O time vencedor foi: %s", time2);
}
        else 
			if (gol1 == gol2){
            printf("A partida empatou!");
}
    return 0;
}
