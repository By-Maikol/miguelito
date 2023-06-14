#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    printf("Ingrese los números (-1 para terminar):\n");

    while (1) {
        scanf("%d", &numero);
        
        if (numero == -1) {
            break;  // Salir del bucle while
        }

        suma += numero;
    }

    printf("La suma de los números ingresados es: %d\n", suma);

    return 0;
}
