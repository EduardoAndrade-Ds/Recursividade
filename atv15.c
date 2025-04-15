#include <stdio.h>

void imprimirPares(int n) {
    if (n < 0) return; 
    imprimirPares(n - 1); 
    if (n % 2 == 0) {
        printf("%d ", n);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    imprimirPares(numero);
    printf("\n");

    return 0;
}
