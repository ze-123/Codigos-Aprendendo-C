#include <stdio.h>

int main(){
    int vet[5];
    int i;

    for(i=0; i < 5; i++){ 
        scanf("%d", (vet + i));
    }

    for(i=0; i < 5; i++){
        printf("%d ", *(vet + i) * 2);
    }

    /*
    int vet[7];
    int i, soma=0;

    for(i=0; i < 7; i++){
        scanf("%d", (vet + i));
    }

    for(i=0; i < 7; i++){
        if (!(i%2)){
            soma += *(vet + i);
        }
    }

    printf("SOMA DAS POSICOES PARES: %d", soma);
    */
   
    return 0;
}