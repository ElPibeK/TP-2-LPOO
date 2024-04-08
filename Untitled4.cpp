#include <stdio.h>

int main() {
    char cadena[100], caracter_original, caracter_reemplazo;
    int i;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingrese el car�cter que desea reemplazar: ");
    scanf(" %c", &caracter_original);

    printf("Ingrese el car�cter de reemplazo: ");
    scanf(" %c", &caracter_reemplazo);

    printf("Cadena original: %s", cadena);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == caracter_original) {
            cadena[i] = caracter_reemplazo;
        }
    }

    printf("Cadena despu�s del reemplazo: %s", cadena);

    return 0;
}
