// Online C compiler to run C program online
#include <stdio.h>

int fibonacci(int n) {
    if(n == 0) {
        return 0;
    } 
    
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
    

int main() {
    int num;
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Numero invalido! Por favor insira um numero não negativo.\n");
        return 1;
    }
    
    printf("O %dº número de Fibonacci é: %d\n", num, fibonacci(num));

    return 0;
}