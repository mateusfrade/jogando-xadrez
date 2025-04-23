#include <stdio.h>

void movimentoDaTorre (int casas){
    if (casas > 0){
        printf("Direita\n");
        movimentoDaTorre (casas - 1);  
    }
}

void movimnetoDoBispo (int casas){
    if (casas > 0){
        printf("Cima, direita\n");
        movimnetoDoBispo (casas - 1);
    }
}

void movimenetoDaRainha (int casas){
    if (casas > 0){
        printf("Esquerda\n");
        movimenetoDaRainha (casas - 1);
    }
}

void movimentoDoCavalo(int casas) {
    if (casas > 0) {
        for (int i = 1; i <= 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}
    
int main(){
    int torre = 5, bispo = 5, rainha = 8, cavalo = 3;    
    

    printf("Movimneto da torre.\n");
    printf("5 casas para a direita\n");

    movimentoDaTorre(torre);

    printf("\nMovimento do Bispo\n");
    printf("5 casas na diagonal para cima e a direita\n");

    movimnetoDoBispo(bispo);

    printf("\nMovimento da Rainha\n");
    printf("8 casas para a esquerda\n");

    movimenetoDaRainha(rainha);

    printf("\nMovimento do Cavalo\n");
    printf("2 casas para cima e 1 para a direita\n");   

    movimentoDoCavalo(cavalo);
   

    return 0;
}
