#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int longitud, i, es_palindromo = 1;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    longitud = strlen(cadena) - 1; 

    for (i = 0; cadena[i] == ' '; i++);
    for (longitud; cadena[longitud] == ' '; longitud--);

    for (i = 0; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - i - 1]) {
            es_palindromo = 0;
            break;
        }
    }

    if (es_palindromo) {
        printf("La cadena %s es un palindromo.\n", cadena);
    } else {
        printf("La cadena %s no es un palindromo.\n", cadena);
    }

    return 0;
}
