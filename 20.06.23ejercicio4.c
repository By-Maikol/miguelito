#include <math.h>
int main()
{
	int exponente;
	double d,y;
	printf("\n ceil (3.7)=%1f \t \t ceil (3.4)-1f",ceil(3.7), ceil(3.4));
	printf("\n ceil (-3.7)=%1f \t \t ceil (-3.4)-1f",ceil(-3.7), ceil(-3.4));
	printf("\n floor(3.7)=%1f \t \t floor (3.4)-1f",floor(3.7), floor(3.4));
	printf("\n floor  (-3.7)=%1f \t \t ceil (3.4)-1f",floor(-3.7), floor(-3.4));
	printf("\n fmod (5.6,2.5)=%1f \t \t ceil (3.4)-1f",ceil(3.7), ceil(3.4));
	d=frexp(16.0, &exponente);
	d=modf(-17.365, &y);
	printf("\n parte decimal de -17.365= %1f",d);
	printf("\n parte entera de -17.365= %1f",y);
	return 0;
}
