#include<stdio.h>
//sentinela, de conteo,bandera
int main()
{
	int digito_leido=0; //no se  leido ningun dato 
	char car;
	while(!digito_leido)
	{
		printf("introduzca un caracter: ");
		scanf("%c",&car);
		digito_leido=(('0'<=car)) && (('9'<=car));
		
	}
	return 0; 
}
