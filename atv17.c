#include <stdio.h>

int buscaRecursiva(int arr[], int tamanho, int valor) {
    if (tamanho == 0) return 0;                 
    if (arr[0] == valor) return 1;               
    return buscaRecursiva(arr + 1, tamanho - 1, valor); 
}

int main() {
    int numeros[] = {2, 4, 6, 8};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    if (buscaRecursiva(numeros, tamanho, valor)) {
        printf("Valor encontrado no array.\n");
    } else {
        printf("Valor não encontrado no array.\n");
    }

    return 0;
}
