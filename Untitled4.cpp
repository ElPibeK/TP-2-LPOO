#include <stdio.h>

int main() {
    char cadena[100], caracter_original, caracter_reemplazo;
    int i;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingrese el carácter que desea reemplazar: ");
    scanf(" %c", &caracter_original);

    printf("Ingrese el carácter de reemplazo: ");
    scanf(" %c", &caracter_reemplazo);

    printf("Cadena original: %s", cadena);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == caracter_original) {
            cadena[i] = caracter_reemplazo;
        }
    }

    printf("Cadena después del reemplazo: %s", cadena);

    return 0;
}
