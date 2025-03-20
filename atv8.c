#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verifica_palindromo(char str[], int inicio, int fim)
{

    if(inicio >= fim) {
        return 1;
    }

    if(!isalum(str[inicio])) {
        return verifica_palindromo(str, inicio + 1, fim);
    }

    if(!isalum(str[fim])) {
        return verifica_palindromo(str, inicio, fim -1);
    }

    if(tolower(str))
}

int main() {

    char str[100];

    printf("Digite uma palavra");
    fgets(str, sizeof(str), stdin);


} 