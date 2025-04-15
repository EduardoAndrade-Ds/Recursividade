#include <stdio.h>

void imprimirCombinacao(int *arr, int n, int *combinacao, int k, int indice) {
    if (k == 0) {
     
        printf("{");
        for (int i = 0; i < k; i++) {
            printf("%d", combinacao[i]);
            if (i < k - 1) {
                printf(", ");
            }
        }
        printf("}\n");
        return;
    }

    if (indice == n) return;  

   
    combinacao[k - 1] = arr[indice];
 
    imprimirCombinacao(arr, n, combinacao, k - 1, indice + 1);

    
    imprimirCombinacao(arr, n, combinacao, k, indice + 1);
}

int main() {
    int n, k;

    printf("Digite o número de elementos no array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Digite o valor de k (tamanho das combinações): ");
    scanf("%d", &k);

    int combinacao[k];  

    printf("Combinacoes de tamanho %d: \n", k);
    imprimirCombinacao(arr, n, combinacao, k, 0);

    return 0;
}
