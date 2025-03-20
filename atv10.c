#include <stdio.h>

float  multiplicar(float  a, float  b){
    if(b <= 0){
        return 0;
    }

    return a + multiplicar(a, b - 1);
}

int main() {

    int a, b;

    printf("Digite um numero real: ");
    scanf("%d", &a);

    printf("Digite outro numero real: ");
    scanf("%d", &b);

    int result = multiplicar(a, b);

    printf("O resultado: %d", result);
}