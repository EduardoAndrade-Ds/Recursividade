#include <stdio.h>


int contarCaminhos(int matriz[][3], int x, int y, int x2, int y2) {

    if (x >= 3 || y >= 3) {
        return 0;
    }

    if (x == x2 && y == y2) {
        printf("(%d,%d) ", x, y);
        return 1;
    }

    int caminhosDireita = contarCaminhos(matriz, x, y + 1, x2, y2);  
    int caminhosBaixo = contarCaminhos(matriz, x + 1, y, x2, y2);     


    if (caminhosDireita > 0) {
        printf("(%d,%d) ", x, y);
    }
    if (caminhosBaixo > 0) {
        printf("(%d,%d) ", x, y);
    }

    return caminhosDireita + caminhosBaixo; 
}

int main() {
   
    int matriz[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    
    int x1 = 0, y1 = 0, x2 = 2, y2 = 2;

    
    int caminhos = contarCaminhos(matriz, x1, y1, x2, y2);

    printf("\nNúmero de caminhos encontrados: %d\n", caminhos);

    return 0;
}
