// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int n) {
    if(n == 0 | n == 1) {
        return 1;
    } 
    
    return n * fatorial(n-1);
}

int main() {
    int num;
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    if(num < 0){
        return 1;
    }
    
    printf("o fatorial de %d é: %d", num, fatorial(num));

    return 0;
}