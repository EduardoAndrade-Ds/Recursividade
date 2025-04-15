// Online C compiler to run C program online
#include <stdio.h>

int somaNumero(int n) {
    if(n == 0 | n == 1) {
        return 1;
    } 
    
    return n + somaNumero(n-1);
}

int main() {
    int num;
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    if(num < 0){
        return 1;
    }
    
    printf("A soma é %d", somaNumero(num));

    return 0;
}