/* programa numero
titulo: ejercicio 4 
fecha: 31_05_2023
Nombre: Jose Miguel del Razo Rosales */
#include <stdio.h>

int main() 
{
	int m=99, n;
	n= ++m;
	printf("m %d, n=%d\n", m,n);
	n= ++m;
	printf("m= %d, n=%d\n", m,n);
	printf("m= %d\n", m++);
	printf("m= %d\n",++m);
	return 0;
	
}
