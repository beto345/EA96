//
// Created by usuario on 09/01/2025.
//xxx
#include <stdio.h>//Libreria estandar input/output
#include <string.h>

int countVowels(char* phrase);//Contar vocales parametro retorna total de vocales
int countConsonantes(char* phrase);//Contar vocales parametro retorna total de consonantes
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

    } while (cadena[0] = '\0');
    return 0;



}
