#include <stdio.h>

#define N 4  
#define M 4


void imprimirLabirinto(int labirinto[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (labirinto[i][j] == -1)
                printf("* ");  
            else
                printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
}


int resolverLabirinto(int labirinto[N][M], int x, int y) {
   
    if (x < 0 || y < 0 || x >= N || y >= M || labirinto[x][y] == 1 || labirinto[x][y] == -1)
        return 0;

    
    labirinto[x][y] = -1;

    
    if (x == N - 1 && y == M - 1)
        return 1;

   
    if (resolverLabirinto(labirinto, x, y + 1))
        return 1;

    
    if (resolverLabirinto(labirinto, x + 1, y))
        return 1;

    
    if (resolverLabirinto(labirinto, x, y - 1))
        return 1;

 
    if (resolverLabirinto(labirinto, x - 1, y))
        return 1;

    
    labirinto[x][y] = 0;
    return 0;
}

int main() {
   
    int labirinto[N][M] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0},
        {0, 0, 0, 0}
    };

    
    if (resolverLabirinto(labirinto, 0, 0)) {
        printf("Caminho encontrado:\n");
        imprimirLabirinto(labirinto);
    } else {
        printf("Não foi possível encontrar um caminho.\n");
    }

    return 0;
}
