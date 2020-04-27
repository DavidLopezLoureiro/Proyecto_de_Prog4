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

	vacio.DNI[0] = '0';
	vacio.DNI[1] = '0';
	vacio.DNI[2] = '0';
	vacio.DNI[3] = '0';
	vacio.DNI[4] = '0';
	vacio.DNI[5] = '0';
	vacio.DNI[6] = '0';
	vacio.DNI[7] = '0';
	vacio.DNI[8] = '0';
	vacio.DNI[9] = 0;

	vacio.curso = 0;

	vacio.carrera = malloc(sizeof(char) * 2);

	vacio.carrera[0] = 'n';
	vacio.carrera[1] = 0;

	vacio.nombre = malloc(sizeof(char) * 6);

	vacio.nombre[0] = 'v';
	vacio.nombre[1] = 'a';
	vacio.nombre[2] = 'c';
	vacio.nombre[3] = 'i';
	vacio.nombre[4] = 'o';
	vacio.nombre[5] = 0;

	//ALUMNO A MATRICULAR
	Alumno John;

	John.DNI[0] = '0';
	John.DNI[1] = '1';
	John.DNI[2] = '2';
	John.DNI[3] = '3';
	John.DNI[4] = '4';
	John.DNI[5] = '5';
	John.DNI[6] = '6';
	John.DNI[7] = '7';
	John.DNI[8] = '8';
	John.DNI[9] = 0;

	John.curso = 1;

	John.carrera = malloc(sizeof(char) * 4);

	John.carrera[0] = 'A';
	John.carrera[1] = 'D';
	John.carrera[2] = 'E';
	John.carrera[3] = 0;

	John.nombre = malloc(sizeof(char) * 5);

	John.nombre[0] = 'J';
	John.nombre[1] = 'O';
	John.nombre[2] = 'H';
	John.nombre[3] = 'N';
	John.nombre[4] = 0;

	//PROFESOR PARA LA ASIGNATURA
	Profesor felipe;

	felipe.nombre = malloc(sizeof(char) * 7);

	felipe.nombre[0] = 'f';
	felipe.nombre[1] = 'e';
	felipe.nombre[2] = 'l';
	felipe.nombre[3] = 'i';
	felipe.nombre[4] = 'p';
	felipe.nombre[5] = 'e';
	felipe.nombre[6] = 0;

	felipe.DNI[0] = '3';
	felipe.DNI[1] = '5';
	felipe.DNI[2] = '9';
	felipe.DNI[3] = '1';
	felipe.DNI[4] = '2';
	felipe.DNI[5] = '2';
	felipe.DNI[6] = '3';
	felipe.DNI[7] = '7';
	felipe.DNI[8] = 'P';
	felipe.DNI[9] = 0;

	//SE USA PARA RELLENAR EL ARRAY DE ELEMENTOS VACIOS
	Asignatura vacia;

	vacia.Codigo[0] = '0';
	vacia.Codigo[1] = '0';
	vacia.Codigo[2] = 0;

	vacia.carrera = malloc(sizeof(char) * 4);

	vacia.carrera[0] = 'A';
	vacia.carrera[1] = 'D';
	vacia.carrera[2] = 'E';
	vacia.carrera[3] = 0;

	vacia.creditos = 0;
	vacia.curso = 0;

	vacia.nombre = malloc(sizeof(char) * 6);

	vacia.nombre[0] = 'v';
	vacia.nombre[1] = 'a';
	vacia.nombre[2] = 'c';
	vacia.nombre[3] = 'i';
	vacia.nombre[4] = 'a';
	vacia.nombre[5] = 0;

	vacia.profe = &felipe;

	//ASIGNATURA
	Asignatura mate;
	mate.Codigo[0] = '0';
	mate.Codigo[1] = '1';
	mate.Codigo[2] = 0;

	mate.carrera = malloc(sizeof(char) * 6);

	mate.carrera[0] = 'i';
	mate.carrera[1] = 'n';
	mate.carrera[2] = 'f';
	mate.carrera[3] = 'o';
	mate.carrera[4] = 'r';
	mate.carrera[5] = 0;

	mate.creditos = 6;
	mate.curso = 1;

	mate.nombre = malloc(sizeof(char) * 5);

	mate.nombre[0] = 'm';
	mate.nombre[1] = 'a';
	mate.nombre[2] = 't';
	mate.nombre[3] = 'e';
	mate.nombre[4] = 0;

	mate.profe = &felipe;

	//AULA
	Aula aula1;

	aula1.codigo[0] = '0';
	aula1.codigo[1] = '1';
	aula1.codigo[2] = 0;

	aula1.ocupadapor[0][0] = mate;



	//RELLENA LOS ARRAYS DE ELEMENTOS VACIOS
	for (int i = 0; i < 5; i++) {
		for (int u = 0; u < 6; u++) {

			aula1.ocupadapor[i][u] = vacia;

		}
	}

	mate.alumnos = malloc(sizeof(Alumno)*30);

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
	reserva(&aula1, 1, 0, mate);
	printf("Tras realizar la reserva: \n");

	for (int i = 0; i < 6; i++) {

		printf("\n");
		for (int u = 0; u < 5; u++) {

			printf(" %i  ", aula1.ocupadapor[u][i].creditos);

		}
	}

	printf("\n \n");
	printf(
			"Para mostrar que no permite realizar reservas encima de reservas: ");
	reserva(&aula1, 1, 0, mate);
	printf("\n \n");

	//FUNCION DE QUITADO DE RESERVA DE AULAS
	quitaReserva(&aula1, 1, 0, vacia);

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
	matricular(&mate, John, 0);
	printf("Con un alumno matriculado en mate: %i \n", mate.alumnos[0].curso);
/*
	//MENÚ
	int opcion = 0;

	do {
		printf("\nElije una opción: \n \n");
		printf("1. Visualizar horario \n");
		printf("2. Reservar \n");
		printf("3. Quitar reserva \n");
		printf("4. Matricular alumno \n");
		printf("5. Salir \n");
		fflush( stdin);
		scanf("%d", &opcion);

		//Leer
		switch (opcion) {
		case 1:
			printf("Has seleccionado %i \n", opcion);
			break; //Visualizar horario

		case 2:
			printf("Has seleccionado %i \n", opcion);
			break; //Reservar

		case 3:
			printf("Has seleccionado %i \n", opcion);
			break; //Quitar reserva

		case 4:
			printf("Has seleccionado %i \n", opcion);
			break; //Matricular alumno

		case 5:
			break; //Salir

		default:
			printf("Opción incorrecta");
			break;

		}

	} while (opcion != 5);
*/
	free(vacio.carrera);
	free(vacio.nombre);
	free(John.carrera);
	free(John.nombre);
	free(felipe.nombre);
	free(vacia.carrera);
	free(vacia.nombre);
	free(mate.carrera);
	free(mate.nombre);


	return 0;

}

