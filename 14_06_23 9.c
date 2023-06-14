#include <stdio.h>

int max(int x, int y) {
    if (x < y)
        return y;
    else
        return x;
}

int main() {
    int m, n;
    
    do {
        printf("Ingrese dos números (separados por espacio): ");
        scanf("%d %d", &m, &n);
        printf("El máximo de %d y %d es %d\n", m, n, max(m, n));
    } while (m != 0);
    
    return 0;
}
