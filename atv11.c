#include <stdio.h>
#include <string.h>

int contarChar(const char *str, char c) {
    if (*str == '\0') {
        return 0;
    }
    return (*str == c) + contarChar(str + 1, c);
}

int main() {
    char texto[1000];
    char caractere;

    printf("Digite a string: ");
    fgets(texto, sizeof(texto), stdin);

    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere);  

    int resultado = contarChar(texto, caractere);
    printf("O caractere '%c' aparece %d vezes.\n", caractere, resultado);

    return 0;
}
