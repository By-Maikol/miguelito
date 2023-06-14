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
    int numero, repeticiones;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("Ingrese el número de repeticiones: ");
    scanf("%d", &repeticiones);

    while (repeticiones-- > 0) {
        if (esPrimo(numero))
            printf("%d es primo.\n", numero);
        else
            printf("%d no es primo.\n", numero);
    }

    return 0;
}

