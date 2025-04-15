#include <stdio.h>


int particionar(int arr[], int baixo, int alto) {
    int pivo = arr[alto];  
    int i = baixo - 1;  

    for (int j = baixo; j < alto; j++) {
        if (arr[j] <= pivo) {  
            i++;  
           
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

   
    int temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;

    return i + 1; 
}


void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
       
        int pivo = particionar(arr, baixo, alto);

   
        quickSort(arr, baixo, pivo - 1);

       
        quickSort(arr, pivo + 1, alto);
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

   
    quickSort(arr, 0, n - 1);

  
    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
