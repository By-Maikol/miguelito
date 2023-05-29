/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

int main() {
	int b;
	float circulo;
	float cuadrado;
	int h;
	int l;
	int opcion;
	int r;
	float triangulo;
	printf("area de las formas\n");
	scanf("%i",&opcion);
	switch (opcion) {
	case 1:
		scanf("%i",&l);
		cuadrado = l*l;
		printf("%f\n",cuadrado);
		break;
	case 2:
		scanf("%i",&b);
		scanf("%i",&h);
		triangulo = b*h/2;
		printf("%f\n",triangulo);
		break;
	case 3:
		scanf("%i",&r);
		circulo = 3.1416*pow(r,2);
		printf("%f\n",circulo);
		break;
	}
	return 0;
}

