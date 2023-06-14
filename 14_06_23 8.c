#include <stdio.h>

void cuadrado(int n) {
    int q = 0;
    while (q <= 1000) {
        q = n * n;
        printf("El cuadrado de %d es %d\n", n, q);
        n++;
    }
}

int main() {
    int n = 1;
    cuadrado(n);
    return 0;
}


