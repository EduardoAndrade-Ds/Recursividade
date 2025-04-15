#include <stdio.h>
#include <string.h>

void inverterString(char str[], int i, int j) {
    if (i >= j) {
        return;
    }
    
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    
    inverterString(str, i + 1, j - 1);
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0'; 
    
    int n = strlen(str);
    inverterString(str, 0, n - 1);
    
    printf("String invertida: %s\n", str);
    
    return 0;
}