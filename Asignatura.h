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


typedef struct{

	char Codigo;
	char nombre;
	int creditos;
	char carrera;
	int curso;
	Profesor profe;

}Asignatura;


#endif /* ASIGNATURA_H_ */
