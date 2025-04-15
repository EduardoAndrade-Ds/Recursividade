#include <stdio.h>

int soma_array(int arr[], int indice, int tamanho){
    if (indice == tamanho){

       return 0;

    }

    return arr[indice] + soma_array(arr[], indice, tamanho + 1);
}

int main() {
    int 
}