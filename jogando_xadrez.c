#include <stdio.h>

int main(){

int i = 0, j = 0, k = 0, l = 0; 
int movimentoDoCavalo = 1;

        printf("Movimento da Torre\n");
        printf("5 casas para a direita\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

        printf("\nMovimento do Bispo\n");
        printf("5 casas na diagonal para cima e a direita\n");
    while (j <= 5)
    {
        printf("Cima, Direita\n");
       j++;
    }

        printf("\nMovimento da Rainha\n");
        printf("8 casas para a esquerda\n");
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    
    printf("\nMovimento do Cavalo\n");
    printf("2 casas para cima e 1 para a direita\n");
while (movimentoDoCavalo --)
{
    for (l = 1; l <= 2; l++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
}

 
    return 0;
}
