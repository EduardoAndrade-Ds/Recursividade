#include <stdio.h>

void gerarSubconjuntos(int *arr, int n, int *subconjunto, int indice) {
    
    printf("{");
    for (int i = 0; i < n; i++) {
        if (subconjunto[i]) {
            printf("%d", arr[i]);
            if (i < n - 1) {
                printf(", ");
            }
        }
    }
    printf("}\n");

    
    for (int i = indice; i < n; i++) {
        subconjunto[i] = 1;  
        gerarSubconjuntos(arr, n, subconjunto, i + 1);  
        subconjunto[i] = 0;  
    }
}

int main() {
    int n;

    printf("Digite o número de elementos no array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int subconjunto[n];  
    for (int i = 0; i < n; i++) {
        subconjunto[i] = 0; 
    }

    printf("Subconjuntos do array: \n");
    gerarSubconjuntos(arr, n, subconjunto, 0);

    return 0;
}
