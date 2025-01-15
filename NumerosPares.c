#include <stdio.h>

void generateEvenNumbers(int numero, char option) {
    if (numero % 2 == 0) {
        for (int i = 1; i <= 50; i++) {
            printf("%d\n", i);
        }


        printf("¿Desea salir del programa? (s = salir, n = continuar): ");
        scanf(" %c", &option);

        if (option == 's' || option == 'S') {
            printf("Saliendo del programa...\n");
        } else if (option == 'n' || option == 'N') {
            printf("El programa continuará...\n");
        }
    }
}

int validatePositiveInt(int number) {
    return (number > 0);
}

int main() {
    char option;
    int numero;

    printf("Ingrese un número:\n");
    scanf("%d", &numero);

    if (validatePositiveInt(numero)) {
        printf("El número positivo es válido.\n");
        generateEvenNumbers(numero, option);
    } else {
        printf("El número negativo no es válido.\n");
    }

    return 0;
}
