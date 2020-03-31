#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Aula.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Asignatura.h"
#include <math.h>

#define MAX_LINE 10

/*
 *
 EN PROCESO DE CREACION

//Commit de prueba

 void clearIfNeeded(char *str, int max_line)
 {
 // Limpia los caracteres de mÂ·s introducidos
 if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
 while (getchar() != '\n');
 }

 char mostrarMenu()
 {
 printf("1. Introducir asignatura en aula \n");
 printf("2. \n");
 printf("Pulsar 'q' para salir\n");
 printf("\n");
 printf("Opcion: ");
 fflush(stdout);
 char linea[MAX_LINE];
 fgets(linea, MAX_LINE, stdin);
 clearIfNeeded(linea, MAX_LINE);
 return * linea;
 }
 */

int main() {


	//Dado que este proyecto requiere en gran parte la creacion de objetos de C++ para poder añadir aulas, alumnos, asignaturas y demas lo que hemos desarrollado en esta entrega son las funciones basicas que nos permiten matricular alumnos y reservar y quitar reservas. Para probarlas existen unos datos de prueba y con solo ejecutar se muestran los resultados de estas funciones.

	//SE USA PARA RELLENAR EL ARRAY DE ELEMENTOS VACIOS
	Alumno vacio;
	vacio.DNI = "0";
	vacio.curso = 0;
	vacio.carrera = "0";
	vacio.nombre = "0";

	//ALUMNO A MATRICULAR
	Alumno John;
	John.DNI = "34876";
	John.curso = 1;
	John.carrera = "ADE";
	John.nombre = "MIKEL";

	//PROFESOR PARA LA ASIGNATURA
	Profesor felipe;
	felipe.nombre = "Felipe";
	felipe.DNI = "234212";

	//SE USA PARA RELLENAR EL ARRAY DE ELEMENTOS VACIOS
	Asignatura vacia;
	vacia.Codigo = 00;
	vacia.carrera = "general";
	vacia.creditos = 0;
	vacia.curso = 0;
	vacia.nombre = "vacia";
	vacia.profe = felipe;

	//ASIGNATURA
	Asignatura mate;
	mate.Codigo = 01;
	mate.carrera = "general";
	mate.creditos = 6;
	mate.curso = 1;
	mate.nombre = "mate";
	mate.profe = felipe;

	//AULA
	Aula aula1;
	aula1.codigo = "01";
	aula1.ocupadapor[0][0] = mate;

	//RELLENA LOS ARRAYS DE ELEMENTOS VACIOS
	for (int i = 0; i < 5; i++) {
		for (int u = 0; u < 6; u++) {

			aula1.ocupadapor[i][u] = vacia;

		}
	}

	for (int y = 0; y < 30; y++) {

		mate.alumnos[y] = vacio;

	}

	//Los ceros son para marcar que no hay nada en esa posicion. Si sale algo que no sea un 0 quiere decir que hay un elemento.

	printf("Sin reservas: \n");

	for (int i = 0; i < 6; i++) {

		printf("\n");
		for (int u = 0; u < 5; u++) {

			printf(" %i  ", aula1.ocupadapor[u][i].creditos);

		}
	}
	printf("\n \n");

	//FUNCION DE RESERVA DE AULAS
	aula1 = reserva(aula1, 1, 0, mate);
	printf("Tras realizar la reserva: \n");

	for (int i = 0; i < 6; i++) {

		printf("\n");
		for (int u = 0; u < 5; u++) {

			printf(" %i  ", aula1.ocupadapor[u][i].creditos);

		}
	}

	printf("\n \n");
	printf("Para mostrar que no permite realizar reservas encima de reservas: ");
	aula1 = reserva(aula1, 1, 0, mate);
	printf("\n \n");
	//FUNCION DE QUITADO DE RESERVA DE AULAS
	aula1 = quitaReserva(aula1, 1, 0, vacia);

	printf("Tras quitar la reserva: \n");

	for (int i = 0; i < 6; i++) {

		printf("\n");
		for (int u = 0; u < 5; u++) {

			printf(" %i  ", aula1.ocupadapor[u][i].creditos);

		}
	}

	printf("\n \n");

	printf("Sin alumnos matriculado en mate: %i \n", mate.alumnos[0].curso);

	//FUNCION PARA MATRICULAR
	mate = matricular(mate, John, 0);
	printf("Con un alumno matriculado en mate: %i \n", mate.alumnos[0].curso);

	return 0;


	//MENÚ

	int n, opcion;

	    do
	    {
	        printf( "\n   1. Calcular el doble de un n%cmero entero.", 163 );
	        printf( "\n   2. Calcular la mitad de un n%cmero entero.", 163 );
	        printf( "\n   3. Calcular el cuadrado de un n%cmero entero.", 163 );
	        printf( "\n   4. Salir." );
	        printf( "\n\n   Introduzca opci%cn (1-4): ", 162 );

	        scanf( "%d", &opcion );

	        /* Inicio del anidamiento */

	        switch ( opcion )
	        {
	            case 1: printf( "\n   Introduzca un n%cmero entero: ", 163 );
	                    scanf( "%d", &n );
	                    printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
	                    break;

	            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
	                    scanf( "%d", &n );
	                    printf( "\n   La mitad de %d es %f\n\n", n, ( float ) n / 2 );
	                    break;

	            case 3: printf( "\n   Introduzca un n%cmero entero: ", 163 );
	                    scanf( "%d", &n );
	                    printf( "\n   El cuadrado de %d es %d\n\n", n, ( int ) pow( n, 2 ) );
	         }

	         /* Fin del anidamiento */

	    } while ( opcion != 4 );

}

