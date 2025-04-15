#include <stdio.h>

void torreDeHanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    // Passo 1
    torreDeHanoi(n - 1, origem, destino, auxiliar);

    // Passo 2
    printf("Mover disco %d de %c para %c\n", n, origem, destino);

    // Passo 3
    torreDeHanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int discos;

    printf("Digite o número de discos: ");
    scanf("%d", &discos);

    printf("Solução para %d discos:\n", discos);
    torreDeHanoi(discos, 'A', 'B', 'C');

    return 0;
}
