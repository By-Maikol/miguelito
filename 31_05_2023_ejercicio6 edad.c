/* programa numero
titulo: ejercicio 6
fecha: 31_05_2023
Nombre: Jose Miguel del Razo Rosales */
#include <stdio.h>

int main() 
{
	int edad, MayorDeEdad, juvenil, MenorDeEdad;
	scanf("%i",&edad);
	MayorDeEdad=(edad>18); 
	juvenil=(edad>15) && (edad<=18);
	MenorDeEdad=(edad<15) && (edad>=0);
	printf("%i\n",MayorDeEdad);
	printf("%i\n",juvenil);
	printf("%i\n",MenorDeEdad);


	return 0;
	
}
