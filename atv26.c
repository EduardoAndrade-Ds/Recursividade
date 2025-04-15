#include <stdio.h>

// x^n = (x^(n/2))^2
// x^n = x * x^(n-1)

int exponenciacaoRapida(int x, int n) {
    if (n == 0) {
        return 1;  
    }

    if (n % 2 == 0) { 
        int half = exponenciacaoRapida(x, n / 2);
        return half * half;  
    } else {  
        return x * exponenciacaoRapida(x, n - 1);  
    }
}

int main() {
    int x, n;

    
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

   
    int resultado = exponenciacaoRapida(x, n);

  
    printf("%d^%d = %d\n", x, n, resultado);

    return 0;
}
