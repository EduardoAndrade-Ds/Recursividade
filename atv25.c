#include <stdio.h>


void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int buscaBinaria(int arr[], int baixo, int alto, int valor) {
    if (baixo > alto) {
        return -1;  
    }

    int meio = baixo + (alto - baixo) / 2;  

    
    if (arr[meio] == valor) {
        return meio;
    }

    
    if (arr[meio] > valor) {
        return buscaBinaria(arr, baixo, meio - 1, valor);
    }
    
   
    return buscaBinaria(arr, meio + 1, alto, valor);
}

int main() {
    int n, valor;


    printf("Digite o número de elementos no array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    bubbleSort(arr, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Busca binária
    int resultado = buscaBinaria(arr, 0, n - 1, valor);

    if (resultado != -1) {
        printf("Valor encontrado no índice: %d\n", resultado);
    } else {
        printf("Valor não encontrado no array.\n");
    }

    return 0;
}
