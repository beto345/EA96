//
// Created by usuario on 09/01/2025.
//xxx
#include <stdio.h>
#include <string.h>

int countVowels(char* phrase);
int countConsonantes(char* phrase);
void getInput();

int main() {
    char cadena[100];

    do {
        printf("Ingrese una frase:\n");
        scanf("%[^\n]", cadena);

        if (strlen(cadena) > 0) {
            printf("La cadena es válida\n");
        } else {
            printf("La cadena no es válida\n");
        }

    } while (cadena[0] != '\0');
    return 0;

}
