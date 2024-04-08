#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][100];
    int longitudes[5];
    int max_longitud = 0;
    int indice_max = 0;

    for (int i = 0; i < 5; i++) {
        printf("Ingrese la palabra %d: ", i + 1);
        fgets(palabras[i], sizeof(palabras[i]), stdin);
        palabras[i][strcspn(palabras[i], "\n")] = '\0';

        longitudes[i] = strlen(palabras[i]);

        if (longitudes[i] > max_longitud) {
            max_longitud = longitudes[i];
            indice_max = i;
        }
    }

    printf("La palabra mas larga es: %s\n", palabras[indice_max]);

    return 0;
}
