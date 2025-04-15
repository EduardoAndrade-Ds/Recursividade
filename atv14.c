#include <stdio.h>

void decimalParaBinario(int n) {
    if (n == 0) return;
    decimalParaBinario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("0");
    } else {
        decimalParaBinario(numero);
    }

    printf("\n");
    return 0;
}
