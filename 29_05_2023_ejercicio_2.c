/* programa numero 
titulo:
fecha:
Nombre:*/
#include <stdio.h>

int main()

{
const int luna = 238857;
float luna_kilo; //distancia en millas 
printf("distancia a la luna %d millas\n",luna);
luna_kilo=luna*1.609; /*una milla es iguala 1.609 kilometro */
printf("en kilometros es %.2fkm. \n" , luna_kilo);

return 0;

}

