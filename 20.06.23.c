#include <stdio.h>
float area_rectangulo(float b, float a);
float entrada (void);

int main ()
{
	float b,h;
	printf("\n base del rectangulo:");
	b=entrada();
	printf("\n altura del rectangulo");
	h=entrada();
	printf("\area del rectangulo %.2f,area",area_rectangulo(b,h));
	return 0;
}
float entrada()
{
	float m;
	do
	{
		scanf("%f", &m);
		
	}
	while (m<=0.0);
	
	return m;
	
}
float area_rectangulo(float b, float a)
{
	return (b*a);
}
