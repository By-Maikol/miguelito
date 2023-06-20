#include <ctype.h>

int main()
{
	char resp; //respuesta del usuario 
	char c;
	printf("¿es masculino o femenino (M/F)?");
	scanf("%c",&resp);
	resp= toupper(resp);
	switch(resp)
	{
		case 'M':
			puts ("es un enfermero");
			break;
		case 'F':
			puts("es una enfermera ");
			break;
			default:
				puts("no es enfermero ni enfermera");
				break;
	}
	return 0;
}
