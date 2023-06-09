#include <stdio.h>

int main () 

{
    
   char opcion ;
     do{
      puts ("hola");
      puts ("¡desea otro tipo de saludo? (s/n)");
       scanf ("%c",&opcion );
    }   while (opcion == 's'|| opcion == 'S');
     
     
      puts  ("adios");
     
     return 0;
     
}
