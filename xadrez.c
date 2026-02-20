#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    printf ("Movimentação do Bispo\n"); // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int linha1 = 1; // Peça começa na primeira casa da esquerda.
    int coluna = 1; // Peça começa na primeira coluna da esquerda. 
    while (linha1 <= 5 | coluna <= 5) // Peça se movimenta até a casa 6/6, andando 5 casas na diagonal.
    {
        printf ("cima e direita\n" );
        linha1++;
        coluna++;

    }

    printf ("\nMovimentação da Torre\n");// Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int linha2 = 1;// Peça começa na primeira casa da esquerda.
    do
    {
        printf("direita\n");
        linha2++;
    } while (linha2 <= 5);
    

    printf ("\nMovimentação da Rainha\n");// Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int linha3 = 8; linha3 >= 1; linha3--)
    {
        printf("Esquerda\n");
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    printf("\nMovimentação do Cavalo\n"); //Implementação de3 movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int linha4 = 3;
    int coluna4;
    for (coluna4 = 3; coluna4 >= 2; coluna4--)
    {
        printf("Baixo, ");
        while (coluna4 % 2 == 0 && linha4 == 3)
        {
            printf("Esquerda.\n");
            linha4--;
        }
        
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
