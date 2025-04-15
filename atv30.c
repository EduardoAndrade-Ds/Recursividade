#include <stdio.h>

void gerarParenteses(int abertos, int fechados, int n, char* resultado, int index) {
    
    if (abertos == n && fechados == n) {
        resultado[index] = '\0';  
        printf("%s\n", resultado); 
        return;
    }

    
    if (abertos < n) {
        resultado[index] = '(';
        gerarParenteses(abertos + 1, fechados, n, resultado, index + 1);
    }

    
    if (fechados < abertos) {
        resultado[index] = ')';
        gerarParenteses(abertos, fechados + 1, n, resultado, index + 1);
    }
}

int main() {
    int n;
    printf("Digite o número de pares de parênteses: ");
    scanf("%d", &n);

    
    char resultado[2 * n + 1];
    
    
    gerarParenteses(0, 0, n, resultado, 0);

    return 0;
}
