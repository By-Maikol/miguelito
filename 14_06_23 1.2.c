#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1)
        return 0;  // No es primo

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;  // No es primo

    return 1;  // Es primo
}

int main() {
    int numero, continuar = 1;

    while (continuar) {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        printf("%d %s primo.\n", numero, esPrimo(numero) ? "es" : "no es");

        printf("¿Desea continuar? (1 para sí, 0 para no): ");
        scanf("%d", &continuar);
    }

    return 0;
}

