#include <stdio.h>


double potencia(double x, int n) {
    if (n == 0) {  
        return 1;
    } else if (n > 0) {  
        return x * potencia(x, n - 1);
    }
    return 1; 
}

int main() {
    double x;
    int num;

    
    printf("Digite a base x: ");
    scanf("%lf", &x);
    printf("Digite o expoente n: ");
    scanf("%d", &num);

    
    printf("%.2lf elevado a %d é: %.2lf\n", x, num, potencia(x, num));

    return 0;
}