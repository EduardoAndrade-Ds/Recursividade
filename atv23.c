#include <stdio.h>

void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1; 
    int n2 = fim - meio;         

   
    int L[n1], R[n2];


    for (int i = 0; i < n1; i++) {
        L[i] = arr[inicio + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[meio + 1 + j];
    }


    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;  y

      
        mergeSort(arr, inicio, meio);

   
        mergeSort(arr, meio + 1, fim);

       
        merge(arr, inicio, meio, fim);
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

    
    mergeSort(arr, 0, n - 1);

  
    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
