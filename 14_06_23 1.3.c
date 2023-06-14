#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0;  // No es primo
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // No es primo
        }
    }

    return 1;  // Es primo
}

int main() {
    int bandera = 1;
    int repeticiones = 0;
    int numero;

    while (bandera) {
        printf("Ingrese un número (-1 para salir): ");
        scanf("%d", &numero);

        if (numero == -1) {
            bandera = 0;
        } else {
            if (esPrimo(numero)) {
                printf("%d es primo.\n", numero);
            } else {
                printf("%d no es primo.\n", numero);
            }
            repeticiones++;
        }
    }

    printf("Se realizaron %d repeticiones.\n", repeticiones);

    return 0;
}
