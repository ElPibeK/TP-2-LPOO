#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ordenarCadena(char cadena[]);

int main() {
    char cadena1[100], cadena2[100];
    int es_anagrama = 1;

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    ordenarCadena(cadena1);
    ordenarCadena(cadena2);

    if (strcmp(cadena1, cadena2) != 0) {
        es_anagrama = 0;
    }

    if (es_anagrama) {
        printf("Las cadenas son anagramas.\n");
    } else {
        printf("Las cadenas no son anagramas.\n");
    }

    return 0;
}

void ordenarCadena(char cadena[]) {
    int i, j;
    char temp;

    for (i = 0; cadena[i]; i++) {
        cadena[i] = tolower(cadena[i]);
    }

    for (i = 0; cadena[i]; i++) {
        for (j = i + 1; cadena[j]; j++) {
            if (cadena[i] > cadena[j]) {
                temp = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = temp;
            }
        }
    }
}
