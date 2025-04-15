#include <stdio.h>
#include <math.h>

int ehPrimoRec(int n, int divisor) {
    if (n < 2) return 0; 
    if (divisor > sqrt(n)) return 1; 
    if (n % divisor == 0) return 0; 
    return ehPrimoRec(n, divisor + 1); 
}

int ehPrimo(int n) {
    return ehPrimoRec(n, 2); 
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
