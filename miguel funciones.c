#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j;
	int calificaciones,promedio;
	void calcularPromedio(int calificaciones[][materias],float promedio[]) {
		for ( i = 0; i < alumnos; i++){
			int sumatoria=0;
			for ( j = 0; j< materias; j++){
				sumatoria += calificaciones [i][j];
	    	}
	    	promedio[i] = (float)sumatoria/ materias;
		}
   }
   
  void  mostrarDatos(int calificaciones[][materias],float promedio[]){
  	printf ("calificaciones:\n");
  	for (i = 0; i < alumnos; i++){
  		printf ("alumno %d:\n", i + 1);
  		for ( j = 0; j < materias; j++){
  			printf ("materia %d: %d\n", j + 1 calificaciones[i][j]);
		  }
	  }   printf("promedio: %.2f\n\n", promedio[i]);
  }
  
  int main() {
  	
  }
	    
	return 0;
}
