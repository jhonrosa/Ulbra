/*8. LER 10 VALORES E ESCREVER QUANTOS DESTES VALORES SÃO NEGATIVOS.*/

#include <stdio.h>
int main(){
    
    int num, cont, x;
     
    for (x=1; x<=10; x++){
        printf("Informe um número: ");
        scanf("%i", &num);

        if (num<0) {
            cont+=1;
        }
    }
    printf("A quantidade de números negativos são: %i", cont);
    return 0;
}

