#include <stdio.h>
int main(int argc, char const *argv[])
{
	int z,x,y;
	printf("Escriba un numero\n");
	scanf("%d",&x);
	printf("Escriba otro numero\n");
	scanf("%d",&z);
	y=x%z;
	printf("\n");
	if (y==0)
	{
		printf("El numero %d es divisible entre %d\n",x,z);
	}
	else
	{
		printf("El numero %d no es divisible entre %d\n",x,z);
	}
	return 0;
