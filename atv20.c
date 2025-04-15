#include <stdio.h>
#include <string.h>


void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}


void permutacoes(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s, ", str);  
        return;
    }
    
    for (int i = inicio; i <= fim; i++) {

        trocar(&str[inicio], &str[i]);

       
        permutacoes(str, inicio + 1, fim);

       
        trocar(&str[inicio], &str[i]);
    }
}

int main() {
    char str[100];

    printf("Digite a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("Permutações de %s: \n", str);
    permutacoes(str, 0, n - 1);

    return 0;
}
