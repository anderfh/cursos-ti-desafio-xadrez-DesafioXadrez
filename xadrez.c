#include <stdio.h>

// Desafio de Xadrez - MateCheck
void recursivoTorre(int n){
    if (n > 0) {
        printf("Direita\n"); // Imprime o movimento;
        recursivoTorre(n-1); // Chama a si mesma.
    }
}
void recursivoBispo(int n){
    for (int j = n ; j > 0 ; j = n-n){
        printf("Cima e "); //Movimento vertical
        for (int i = 1 ; i > 0 ; i--){
            printf("Direita\n"); //Movimento horizontal
        }
        recursivoBispo(n-1); // Chama a si mesma.
    }    
}
void recursivoRainha(int n){
    if (n < 0) {
        printf("Esquerda\n"); // Imprime o movimento
        recursivoRainha(n+1); // Chama a si mesma
    }
}

int main() {
   
    printf ("\nMovimentação da Torre:\n");// Implementação de Movimentação da Torre
    int torre = 5; // define quantas casas a peça vai se movimentar.
    recursivoTorre(torre); // chama o movimento.
    
    printf ("\nMovimentação do Bispo:\n"); // Implementação de Movimentação do Bispo
    int bispo = 5; // define quantas casas a peça vai se movimentar.
    recursivoBispo(bispo); // chama o movimento.

    printf ("\nMovimentação da Rainha\n");// Implementação de Movimentação da Rainha
    int rainha = -8; // define quantas casas a peça vai se movimentar.
    recursivoRainha(rainha); // Chama o movimento.
    
    printf("\nMovimentação do Cavalo\n"); //Implementação de3 movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int linha4 = 3;
    int coluna4;
    for (coluna4 = 3; coluna4 >= 2; coluna4--)
    {
        printf("Cima, ");
        while (coluna4 % 2 == 0 && linha4 == 3)
        {
            printf("Direita.\n");
            linha4--;
        }        
    }
    
    return 0;
}
