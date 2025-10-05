#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; 
    
 
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

 
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
     tabuleiro[7][6] = 3;
    
    // Imprime o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  A B C D E F G H I J\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }

    return 0;
}