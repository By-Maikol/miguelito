#include <stdio.h>

int main() {
    int arreglo[10] = {5, 10, 3, 8, 2, 7, 9, 1, 6, 4};
    int suma = 0;
    int mayor = arreglo[0];
    
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
        suma += arreglo[i];
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }
    
    printf("\n\nSuma de los elementos: %d\n", suma);
    printf("El mayor elemento: %d\n", mayor);
    
    return 0;
}
