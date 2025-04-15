#include <stdio.h>

#define MAX 50


void imprimirTabuleiro(int tabuleiro[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tabuleiro[i] == j)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}


int ehSeguro(int tabuleiro[], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
       
        if (tabuleiro[i] == coluna || tabuleiro[i] - i == coluna - linha || tabuleiro[i] + i == coluna + linha) {
            return 0;
        }
    }
    return 1;
}


int resolverNQueens(int tabuleiro[], int n, int linha) {
    if (linha == n) {
        imprimirTabuleiro(tabuleiro, n); 
        return 1;
    }
    
    int solucoes = 0;
    for (int coluna = 0; coluna < n; coluna++) {
        if (ehSeguro(tabuleiro, linha, coluna)) {
            tabuleiro[linha] = coluna;  
            solucoes += resolverNQueens(tabuleiro, n, linha + 1);  
        }
    }
    
    return solucoes;  
}

int main() {
    int n;

    printf("Digite o valor de n (número de rainhas): ");
    scanf("%d", &n);

    int tabuleiro[MAX] = {0};  

    
    int solucoes = resolverNQueens(tabuleiro, n, 0);

    printf("Número de soluções encontradas: %d\n", solucoes);

    return 0;
}
