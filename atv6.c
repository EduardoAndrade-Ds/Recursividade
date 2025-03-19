#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }
    
    printf("A soma dos dígitos de %d é: %d\n", num, somaDigitos(num));
    
    return 0;
}