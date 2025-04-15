#include <stdio.h>

int main(){

int t = 0;
int b = 0;
int r = 0;

        printf("Movimento da Torre\n");
        printf("5 casas para a direita\n");
    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n");
    }

        printf("\nMovimento do Bispo\n");
        printf("5 casas na diagonal para cima e a direita\n");
    while (b <= 5)
    {
        printf("Cima, Direita\n");
       b++;
    }

        printf("\nMovimento da Rainha\n");
        printf("8 casas para a esquerda\n");
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
    


 
    return 0;
}
