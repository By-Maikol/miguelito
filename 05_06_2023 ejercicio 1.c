/*ejercicio 1: depurar y editar (copiar) el codigo TAMBIEN agregar una instruccion printf con el mensaje 
"se introdujo la variable" y describir la variante en el uso del switch */
#include <stdio.h>
int main() {
    int opcion;

    printf("Introduce un número: ");
    scanf("%d", &opcion);
    printf("Se introdujo la variable: %d\n", opcion);

    switch (opcion) {
        case 0:
            puts("cero");
            break;
        case 1:
            puts("uno");
            break;
        case 2:
            puts("dos");
            break;
        case 3:
            puts("tres");
            break;
        default:
            puts("fuera de rango");
    }

    return 0;
}

