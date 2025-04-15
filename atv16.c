#include <stdio.h>

void imprimirImpares(int atual, int n) {
    if (atual > n) return;  
    printf("%d ", atual);   
    imprimirImpares(atual + 2, n);
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    imprimirImpares(1, numero);
    printf("\n");

    return 0;
}
