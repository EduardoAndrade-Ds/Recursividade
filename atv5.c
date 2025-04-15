#include <stdio.h>


void contagemRegressiva(int n) {
    if (n < 0) {  
        return;
    }

    printf("%d\n", n);

    contagemRegressiva(n - 1);
}

int main() {
    int num;

    printf("Digite um número para iniciar a contagem regressiva: ");
    scanf("%d", &num);

    contagemRegressiva(num);

    return 0;
}