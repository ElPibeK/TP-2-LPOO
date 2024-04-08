#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int contador_vocales = 0;
    int i;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; i < strlen(cadena); i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador_vocales++;
        }
    }

    printf("La cadena ingresada tiene %d vocales.\n", contador_vocales);

    return 0;
}
