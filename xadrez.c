#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nível NOVATO)
 
int main() {
    
    int torre = 1 , bispo = 1;

    while (torre <= 5)
    {
        printf("Torre - Direita %d\n", torre);
        torre++;
    } //movendo a torre 5 vezes para a DIREITA

    do{
        printf("Cima, Direita %d\n", bispo);
        bispo++;
    }while (bispo <= 5);
    // movendo o bispo 5 casas na DIAGONAL

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda %d\n", rainha);
    }
    // movendo a rainha 8 casas para a ESQUERDA




    return 0;
}
