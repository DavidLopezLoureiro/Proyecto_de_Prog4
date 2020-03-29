
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Aula.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Asignatura.h"


#define MAX_LINE 10



void clearIfNeeded(char *str, int max_line)
	{
		// Limpia los caracteres de m·s introducidos
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



int main() {

	printf("1. Introducir asignatura en aula \n");


	Profesor felipe;

	felipe.nombre = "Felipe";
	felipe.DNI = "234212";



	Asignatura mate;

	mate.Codigo = 01;
	mate.carrera = "general";
	mate.creditos = 6;
	mate.curso = 1;
	mate.nombre = "mate";
	mate.profe = felipe;



	Aula aula1;

	aula1.codigo = "01";
	aula1.ocupadapor[0][0] = mate;

	return 0;



	}

