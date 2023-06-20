//programa numero 
#include <stdio.h>

double cuadrado (double n);
int main()
{
	double x= 11.5;
	printf("%6.21f al cuadrado = %8.41f \n",x, cuadrado (x));
	return 0;
}
double cuadrado (double n)
{
	return n*n;
}
