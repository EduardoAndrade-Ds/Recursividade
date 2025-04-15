#include <stdio.h>

int comprimentoString(const char *str) {
    if (*str == '\0') return 0;             
    return 1 + comprimentoString(str + 1);   
}

int main() {
    char texto[1000];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

  
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    int tamanho = comprimentoString(texto);
    printf("Comprimento da string: %d\n", tamanho);

    return 0;
}
