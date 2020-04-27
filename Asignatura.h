/*
 * Asignatura.h
 *
 *  Created on: 25 mar. 2020
 *      Author: david
 */

#ifndef ASIGNATURA_H_
#define ASIGNATURA_H_




#include <stdio.h>
#include <stdlib.h>
#include "Profesor.h"
#include "Alumno.h"


typedef struct{

	char Codigo[2];
	char *nombre;
	int creditos;
	char *carrera;
	int curso;
	Profesor profe;
	Alumno *alumnos;

}Asignatura;

void matricular(Asignatura *asig, Alumno alum, int cant);


#endif /* ASIGNATURA_H_ */
