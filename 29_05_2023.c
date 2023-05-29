/* programa numero 
titulo:
fecha:
Nombre:*/
#include <stdio.h>
int MiNumero;
int main()

{
/* variables al principio de la fundacion main*/
int j;
printf("¿cual es el numero favorito?" );
scanf("%d",%MiNumero);
int numerodeInteracciones=10;
int i;
for(i=0, i<numerodeInteracciones; ++i+2){
	printf("interaccion numero: %d\n",i);
}
printf("cuanto vale la variable i: %d\n",i);
printf("cuanto vale la variable MiNumero: %d\n");
printf("cuanto vale la variable numerodeInteracciones: %d\n",numerodeInteracciones);
return 0;
}

