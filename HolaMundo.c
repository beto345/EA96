#include <stdio.h>

int main() {
    char nombre[100];


    printf("Ingresa tu nombre:");
    scanf("%s", &nombre);
    for (int j = 0; j < 5; j++) {
        printf("*");
    }
    return 0;
}
